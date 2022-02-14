
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct context {char const* resfile; scalar_t__ expect_signo; scalar_t__ expect_exitcode; scalar_t__ expect_fail_count; scalar_t__ expect_previous_fail_count; int expect_reason; int expect; scalar_t__ fail_count; int const* tc; } ;
typedef int atf_tc_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct context *VAR_1, const atf_tc_t *VAR_2, const char *VAR_3)
{
    VAR_1->tc = VAR_2;
    VAR_1->resfile = VAR_3;
    VAR_1->fail_count = 0;
    VAR_1->expect = VAR_0;
    FUNC_1(FUNC_0(&VAR_1->expect_reason));
    VAR_1->expect_previous_fail_count = 0;
    VAR_1->expect_fail_count = 0;
    VAR_1->expect_exitcode = 0;
    VAR_1->expect_signo = 0;
}
