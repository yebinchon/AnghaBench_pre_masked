
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct context {scalar_t__ expect; scalar_t__ expect_fail_count; scalar_t__ expect_previous_fail_count; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int FUNC_1 (struct context*,char*) ;

__attribute__((used)) static void
FUNC_2(struct context *VAR_7)
{
    if (VAR_7->expect == VAR_0) {
        FUNC_1(VAR_7, "Test case was expected to terminate abruptly "
            "but it continued execution");
    } else if (VAR_7->expect == VAR_1) {
        FUNC_1(VAR_7, "Test case was expected to exit cleanly but it "
            "continued execution");
    } else if (VAR_7->expect == VAR_2) {
        if (VAR_7->expect_fail_count == VAR_7->expect_previous_fail_count)
            FUNC_1(VAR_7, "Test case was expecting a failure but none "
                "were raised");
        else
            FUNC_0(VAR_7->expect_fail_count > VAR_7->expect_previous_fail_count);
    } else if (VAR_7->expect == VAR_3) {

    } else if (VAR_7->expect == VAR_4) {
        FUNC_1(VAR_7, "Test case was expected to receive a termination "
            "signal but it continued execution");
    } else if (VAR_7->expect == VAR_5) {
        FUNC_1(VAR_7, "Test case was expected to hang but it continued "
            "execution");
    } else
        VAR_6;
}
