
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eqn_box {struct eqn_box* bottom; struct eqn_box* top; struct eqn_box* right; struct eqn_box* left; struct eqn_box* text; struct eqn_box* next; struct eqn_box* first; } ;


 int FUNC_0 (struct eqn_box*) ;

void
FUNC_1(struct eqn_box *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return;

 if (VAR_0->first)
  FUNC_1(VAR_0->first);
 if (VAR_0->next)
  FUNC_1(VAR_0->next);

 FUNC_0(VAR_0->text);
 FUNC_0(VAR_0->left);
 FUNC_0(VAR_0->right);
 FUNC_0(VAR_0->top);
 FUNC_0(VAR_0->bottom);
 FUNC_0(VAR_0);
}
