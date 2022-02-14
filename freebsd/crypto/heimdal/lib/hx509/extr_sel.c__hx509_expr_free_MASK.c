
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hx_expr {int op; struct hx_expr* arg2; struct hx_expr* arg1; } ;







 int FUNC_0 (struct hx_expr*) ;

void
FUNC_1(struct hx_expr *VAR_0)
{
    switch (VAR_0->op) {
    case 130:
    case 131:
 FUNC_0(VAR_0->arg1);
 break;
    case 128:
    case 132:
    case 129:
 FUNC_0(VAR_0->arg1);
 if (VAR_0->arg2)
     FUNC_1(VAR_0->arg2);
 break;
    default:
 if (VAR_0->arg1)
     FUNC_1(VAR_0->arg1);
 if (VAR_0->arg2)
     FUNC_1(VAR_0->arg2);
 break;
    }
    FUNC_0(VAR_0);
}
