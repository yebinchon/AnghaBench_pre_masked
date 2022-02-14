
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct context {scalar_t__ expect; int resfile; } ;
typedef int atf_dynstr_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int,int *) ;
 int FUNC_2 (struct context*,char*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct context*,int *) ;

__attribute__((used)) static void
FUNC_5(struct context *VAR_4, atf_dynstr_t *VAR_5)
{
    if (VAR_4->expect == VAR_1) {
        FUNC_4(VAR_4, VAR_5);
    } else if (VAR_4->expect == VAR_2) {
        FUNC_1(VAR_4->resfile, "failed", -1, VAR_5);
        FUNC_3(VAR_0);
    } else {
        FUNC_2(VAR_4, "Test case raised a failure but was not "
            "expecting one; reason was %s", FUNC_0(VAR_5));
    }
    VAR_3;
}
