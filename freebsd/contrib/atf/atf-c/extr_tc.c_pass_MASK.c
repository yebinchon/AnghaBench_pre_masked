
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct context {scalar_t__ expect; int resfile; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int,int *) ;
 int FUNC_1 (struct context*,char*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct context *VAR_4)
{
    if (VAR_4->expect == VAR_1) {
        FUNC_1(VAR_4, "Test case was expecting a failure but got "
            "a pass instead");
    } else if (VAR_4->expect == VAR_2) {
        FUNC_0(VAR_4->resfile, "passed", -1, ((void*)0));
        FUNC_2(VAR_0);
    } else {
        FUNC_1(VAR_4, "Test case asked to explicitly pass but was "
            "not expecting such condition");
    }
    VAR_3;
}
