
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct context {scalar_t__ expect; int resfile; } ;
typedef int atf_dynstr_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int,int *) ;
 int FUNC_1 (struct context*,char*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct context *VAR_3, atf_dynstr_t *VAR_4)
{
    if (VAR_3->expect == VAR_1) {
        FUNC_0(VAR_3->resfile, "skipped", -1, VAR_4);
        FUNC_2(VAR_0);
    } else {
        FUNC_1(VAR_3, "Can only skip a test case when running in "
            "expect pass mode");
    }
    VAR_2;
}
