
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct eqn_node {TYPE_1__* node; } ;
struct eqn_def {scalar_t__ valsz; scalar_t__ keysz; int * val; int * key; } ;
struct TYPE_2__ {int pos; int line; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct eqn_def* FUNC_0 (struct eqn_node*) ;
 scalar_t__ FUNC_1 (struct eqn_node*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int ,char*) ;

__attribute__((used)) static void
FUNC_4(struct eqn_node *VAR_3)
{
 struct eqn_def *VAR_4;

 if (FUNC_1(VAR_3, VAR_2) == VAR_0) {
  FUNC_3(VAR_1,
      VAR_3->node->line, VAR_3->node->pos, "undef");
  return;
 }
 if ((VAR_4 = FUNC_0(VAR_3)) == ((void*)0))
  return;
 FUNC_2(VAR_4->key);
 FUNC_2(VAR_4->val);
 VAR_4->key = VAR_4->val = ((void*)0);
 VAR_4->keysz = VAR_4->valsz = 0;
}
