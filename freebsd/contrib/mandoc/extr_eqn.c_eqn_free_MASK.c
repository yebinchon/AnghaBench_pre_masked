
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eqn_node {struct eqn_node* defs; struct eqn_node* data; struct eqn_node* val; struct eqn_node* key; scalar_t__ defsz; } ;


 int FUNC_0 (struct eqn_node*) ;

void
FUNC_1(struct eqn_node *VAR_0)
{
 int VAR_1;

 if (VAR_0 == ((void*)0))
  return;

 for (VAR_1 = 0; VAR_1 < (int)VAR_0->defsz; VAR_1++) {
  FUNC_0(VAR_0->defs[VAR_1].key);
  FUNC_0(VAR_0->defs[VAR_1].val);
 }

 FUNC_0(VAR_0->data);
 FUNC_0(VAR_0->defs);
 FUNC_0(VAR_0);
}
