
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct expr* expr; int sym; } ;
struct TYPE_3__ {struct expr* expr; int sym; } ;
struct expr {int type; TYPE_2__ right; TYPE_1__ left; } ;
 int FUNC_0 (struct expr*) ;
 struct expr* FUNC_1 (int) ;
 int FUNC_2 (struct expr*,struct expr*,int) ;
 int FUNC_3 (char*,int) ;

struct expr *FUNC_4(struct expr *VAR_0)
{
 struct expr *VAR_1;

 if (!VAR_0)
  return ((void*)0);

 VAR_1 = FUNC_1(sizeof(*VAR_0));
 FUNC_2(VAR_1, VAR_0, sizeof(*VAR_0));
 switch (VAR_0->type) {
 case 129:
  VAR_1->left = VAR_0->left;
  break;
 case 131:
  VAR_1->left.expr = FUNC_4(VAR_0->left.expr);
  break;
 case 133:
 case 128:
  VAR_1->left.sym = VAR_0->left.sym;
  VAR_1->right.sym = VAR_0->right.sym;
  break;
 case 134:
 case 130:
 case 132:
  VAR_1->left.expr = FUNC_4(VAR_0->left.expr);
  VAR_1->right.expr = FUNC_4(VAR_0->right.expr);
  break;
 default:
  FUNC_3("can't copy type %d\n", VAR_1->type);
  FUNC_0(VAR_1);
  VAR_1 = ((void*)0);
  break;
 }

 return VAR_1;
}
