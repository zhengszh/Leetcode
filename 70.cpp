#include <cstdio>
#include <vector>
using namespace std;
class Solution {
public:
    int climbStairs(int n) {
        if (n == 1 || n == 2)
            return n;
        vector<int> dp(n, 0);
        dp[0] = 1;
        dp[1] = 2;
        for (int i = 2; i < n; ++i)
            dp[i] = dp[i - 1] + dp[i - 2];
        return dp[n - 1];
    }
};
int main() {
    Solution s;
    printf("%d\n", s.climbStairs(4));
    return 0;
}
