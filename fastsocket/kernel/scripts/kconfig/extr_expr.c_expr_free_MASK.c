
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct expr* expr; } ;
struct TYPE_3__ {struct expr* expr; } ;
struct expr {int type; TYPE_2__ right; TYPE_1__ left; } ;
 int FUNC_0 (struct expr*) ;
 int FUNC_1 (char*,int) ;

void FUNC_2(struct expr *VAR_0)
{
 if (!VAR_0)
  return;

 switch (VAR_0->type) {
 case 129:
  break;
 case 131:
  FUNC_2(VAR_0->left.expr);
  return;
 case 132:
 case 128:
  break;
 case 130:
 case 133:
  FUNC_2(VAR_0->left.expr);
  FUNC_2(VAR_0->right.expr);
  break;
 default:
  FUNC_1("how to free type %d?\n", VAR_0->type);
  break;
 }
 FUNC_0(VAR_0);
}
