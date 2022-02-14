
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hx_expr {int op; void* arg2; void* arg1; } ;
typedef enum hx_expr_op { ____Placeholder_hx_expr_op } hx_expr_op ;


 struct hx_expr* FUNC_0 (int) ;

struct hx_expr *
FUNC_1(enum hx_expr_op VAR_0, void *VAR_1, void *VAR_2)
{
    struct hx_expr *VAR_3;

    VAR_3 = FUNC_0(sizeof(*VAR_3));
    if (VAR_3 == ((void*)0))
 return ((void*)0);
    VAR_3->op = VAR_0;
    VAR_3->arg1 = VAR_1;
    VAR_3->arg2 = VAR_2;

    return VAR_3;
}
