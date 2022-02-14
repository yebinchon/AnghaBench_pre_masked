
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct cgraph_node {scalar_t__ decl; } ;
struct TYPE_2__ {scalar_t__* ipa_param_tree; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 TYPE_1__* FUNC_1 (struct cgraph_node*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct cgraph_node*) ;

void
FUNC_4 (struct cgraph_node *VAR_0)
{
  tree VAR_1;
  tree VAR_2;
  tree VAR_3;
  int VAR_4;

  FUNC_3 (VAR_0);
  VAR_1 = VAR_0->decl;
  VAR_2 = FUNC_0 (VAR_1);
  VAR_4 = 0;
  for (VAR_3 = VAR_2; VAR_3; VAR_3 = FUNC_2 (VAR_3))
    {
      FUNC_1 (VAR_0)->ipa_param_tree[VAR_4] = VAR_3;
      VAR_4++;
    }
}
