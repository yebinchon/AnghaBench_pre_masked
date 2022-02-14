
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eqn_node {struct eqn_def* defs; int toksz; int start; scalar_t__ defsz; } ;
struct eqn_def {scalar_t__ keysz; int key; } ;


 scalar_t__ FUNC_0 (int ,scalar_t__,int ,int ) ;

__attribute__((used)) static struct eqn_def *
FUNC_1(struct eqn_node *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < (int)VAR_0->defsz; VAR_1++)
  if (VAR_0->defs[VAR_1].keysz && FUNC_0(VAR_0->defs[VAR_1].key,
      VAR_0->defs[VAR_1].keysz, VAR_0->start, VAR_0->toksz))
   return &VAR_0->defs[VAR_1];

 return ((void*)0);
}
