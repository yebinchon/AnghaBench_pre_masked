
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* splay_tree_node ;
typedef int splay_tree_key ;
typedef TYPE_2__* splay_tree ;
struct TYPE_7__ {int (* comp ) (int ,int ) ;TYPE_1__* root; } ;
struct TYPE_6__ {struct TYPE_6__* left; struct TYPE_6__* right; int key; } ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (int ,int ) ;

splay_tree_node
FUNC_2 (splay_tree VAR_0, splay_tree_key VAR_1)
{
  int VAR_2;
  splay_tree_node VAR_3;


  if (!VAR_0->root)
    return ((void*)0);



  FUNC_0 (VAR_0, VAR_1);
  VAR_2 = (*VAR_0->comp)(VAR_0->root->key, VAR_1);


  if (VAR_2 > 0)
    return VAR_0->root;


  VAR_3 = VAR_0->root->right;
  if (VAR_3)
    while (VAR_3->left)
      VAR_3 = VAR_3->left;

  return VAR_3;
}
