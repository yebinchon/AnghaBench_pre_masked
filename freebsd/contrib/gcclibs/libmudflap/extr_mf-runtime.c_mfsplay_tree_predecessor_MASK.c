
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* mfsplay_tree_node ;
typedef scalar_t__ mfsplay_tree_key ;
typedef TYPE_2__* mfsplay_tree ;
struct TYPE_7__ {TYPE_1__* root; } ;
struct TYPE_6__ {scalar_t__ key; struct TYPE_6__* right; struct TYPE_6__* left; } ;


 int FUNC_0 (TYPE_2__*,scalar_t__) ;

__attribute__((used)) static mfsplay_tree_node
FUNC_1 (mfsplay_tree VAR_0, mfsplay_tree_key VAR_1)
{
  int VAR_2;
  mfsplay_tree_node VAR_3;

  if (!VAR_0->root)
    return ((void*)0);


  FUNC_0 (VAR_0, VAR_1);
  VAR_2 = ((VAR_0->root->key > VAR_1) ? 1 :
                ((VAR_0->root->key < VAR_1) ? -1 : 0));


  if (VAR_2 < 0)
    return VAR_0->root;

  VAR_3 = VAR_0->root->left;
  if (VAR_3)
    while (VAR_3->right)
      VAR_3 = VAR_3->right;
  return VAR_3;
}
