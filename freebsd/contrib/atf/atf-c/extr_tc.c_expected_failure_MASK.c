
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct context {int resfile; int expect_reason; } ;
typedef int atf_dynstr_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int,int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct context *VAR_1, atf_dynstr_t *VAR_2)
{
    FUNC_2(FUNC_1(VAR_2, "%s: ",
        FUNC_0(&VAR_1->expect_reason)));
    FUNC_3(VAR_1->resfile, "expected_failure", -1, VAR_2);
    FUNC_4(VAR_0);
}
