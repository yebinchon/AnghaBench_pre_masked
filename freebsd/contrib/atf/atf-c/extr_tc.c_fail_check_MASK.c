
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct context {scalar_t__ expect; int fail_count; int expect_fail_count; int expect_reason; } ;
typedef int atf_dynstr_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct context*,char*,char*) ;
 int FUNC_3 (int ,char*,char*,...) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_4(struct context *VAR_3, atf_dynstr_t *VAR_4)
{
    if (VAR_3->expect == VAR_0) {
        FUNC_3(VAR_2, "*** Expected check failure: %s: %s\n",
            FUNC_0(&VAR_3->expect_reason),
            FUNC_0(VAR_4));
        VAR_3->expect_fail_count++;
    } else if (VAR_3->expect == VAR_1) {
        FUNC_3(VAR_2, "*** Check failed: %s\n", FUNC_0(VAR_4));
        VAR_3->fail_count++;
    } else {
        FUNC_2(VAR_3, "Test case raised a failure but was not "
            "expecting one; reason was %s", FUNC_0(VAR_4));
    }

    FUNC_1(VAR_4);
}
