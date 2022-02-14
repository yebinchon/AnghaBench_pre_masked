
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef scalar_t__ splay_tree_key ;


 int FUNC_0 (int ,int ) ;

int
FUNC_1 (splay_tree_key VAR_0, splay_tree_key VAR_1)
{


  if (!VAR_0)
    return VAR_1 ? -1 : 0;
  else if (!VAR_1)
    return VAR_0 ? 1 : 0;

  return FUNC_0 ((tree) VAR_0, (tree) VAR_1);
}
