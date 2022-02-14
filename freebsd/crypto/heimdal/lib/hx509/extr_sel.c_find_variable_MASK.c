
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hx_expr {scalar_t__ op; struct hx_expr* arg2; int arg1; } ;
typedef int * hx509_env ;
typedef int hx509_context ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int * FUNC_1 (int ,int *,int ) ;

__attribute__((used)) static hx509_env
FUNC_2(hx509_context VAR_1, hx509_env VAR_2, struct hx_expr *VAR_3)
{
    FUNC_0(VAR_3->op == VAR_0);

    if (VAR_3->arg2 == ((void*)0))
 return FUNC_1(VAR_1, VAR_2, VAR_3->arg1);

    VAR_2 = FUNC_1(VAR_1, VAR_2, VAR_3->arg1);
    if (VAR_2 == ((void*)0))
 return ((void*)0);
    return FUNC_2(VAR_1, VAR_2, VAR_3->arg2);
}
