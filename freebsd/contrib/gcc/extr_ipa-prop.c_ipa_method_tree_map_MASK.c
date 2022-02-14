
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct cgraph_node {int dummy; } ;
struct TYPE_2__ {scalar_t__* ipa_param_tree; } ;


 TYPE_1__* FUNC_0 (struct cgraph_node*) ;
 int FUNC_1 (struct cgraph_node*) ;

__attribute__((used)) static int
FUNC_2 (struct cgraph_node *VAR_0, tree VAR_1)
{
  int VAR_2, VAR_3;

  VAR_3 = FUNC_1 (VAR_0);
  for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++)
    if (FUNC_0 (VAR_0)->ipa_param_tree[VAR_2] == VAR_1)
      return VAR_2;

  return -1;
}
