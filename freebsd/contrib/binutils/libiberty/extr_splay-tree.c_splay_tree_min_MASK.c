
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* splay_tree_node ;
typedef TYPE_2__* splay_tree ;
struct TYPE_6__ {TYPE_1__* root; } ;
struct TYPE_5__ {struct TYPE_5__* left; } ;



splay_tree_node
FUNC_0 (splay_tree VAR_0)
{
  splay_tree_node VAR_1 = VAR_0->root;

  if (!VAR_1)
    return ((void*)0);

  while (VAR_1->left)
    VAR_1 = VAR_1->left;

  return VAR_1;
}
