
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int tristate ;
struct TYPE_8__ {TYPE_4__* sym; struct expr* expr; } ;
struct TYPE_7__ {TYPE_4__* sym; struct expr* expr; } ;
struct expr {int type; TYPE_3__ right; TYPE_2__ left; } ;
struct TYPE_6__ {int tri; } ;
struct TYPE_9__ {TYPE_1__ curr; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;






 int VAR_0 ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char const*,char const*) ;
 int FUNC_5 (TYPE_4__*) ;
 char* FUNC_6 (TYPE_4__*) ;
 int VAR_1 ;

tristate FUNC_7(struct expr *VAR_2)
{
 tristate VAR_3, VAR_4;
 const char *VAR_5, *VAR_6;

 if (!VAR_2)
  return VAR_1;

 switch (VAR_2->type) {
 case 129:
  FUNC_5(VAR_2->left.sym);
  return VAR_2->left.sym->curr.tri;
 case 133:
  VAR_3 = FUNC_7(VAR_2->left.expr);
  VAR_4 = FUNC_7(VAR_2->right.expr);
  return FUNC_0(VAR_3, VAR_4);
 case 130:
  VAR_3 = FUNC_7(VAR_2->left.expr);
  VAR_4 = FUNC_7(VAR_2->right.expr);
  return FUNC_2(VAR_3, VAR_4);
 case 131:
  VAR_3 = FUNC_7(VAR_2->left.expr);
  return FUNC_1(VAR_3);
 case 132:
  FUNC_5(VAR_2->left.sym);
  FUNC_5(VAR_2->right.sym);
  VAR_5 = FUNC_6(VAR_2->left.sym);
  VAR_6 = FUNC_6(VAR_2->right.sym);
  return !FUNC_4(VAR_5, VAR_6) ? VAR_1 : VAR_0;
 case 128:
  FUNC_5(VAR_2->left.sym);
  FUNC_5(VAR_2->right.sym);
  VAR_5 = FUNC_6(VAR_2->left.sym);
  VAR_6 = FUNC_6(VAR_2->right.sym);
  return !FUNC_4(VAR_5, VAR_6) ? VAR_0 : VAR_1;
 default:
  FUNC_3("expr_calc_value: %d?\n", VAR_2->type);
  return VAR_0;
 }
}
