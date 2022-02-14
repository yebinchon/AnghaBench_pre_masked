
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hx_expr {int op; char const* arg1; struct hx_expr* arg2; } ;
typedef int * hx509_env ;
typedef int hx509_context ;




 char const* FUNC_0 (int ,int *,char const*) ;
 int * FUNC_1 (int ,int *,char const*) ;

__attribute__((used)) static const char *
FUNC_2(hx509_context VAR_0, hx509_env VAR_1, struct hx_expr *VAR_2)
{
    switch (VAR_2->op) {
    case 129:
 return VAR_2->arg1;
    case 128:
 if (VAR_2->arg2 == ((void*)0))
     return FUNC_0(VAR_0, VAR_1, VAR_2->arg1);

 VAR_1 = FUNC_1(VAR_0, VAR_1, VAR_2->arg1);
 if (VAR_1 == ((void*)0))
     return ((void*)0);

 return FUNC_2(VAR_0, VAR_1, VAR_2->arg2);
    default:
 return ((void*)0);
    }
}
