
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ splay_tree_key ;



int
FUNC_0 (splay_tree_key VAR_0, splay_tree_key VAR_1)
{
  if ((int) VAR_0 < (int) VAR_1)
    return -1;
  else if ((int) VAR_0 > (int) VAR_1)
    return 1;
  else
    return 0;
}
