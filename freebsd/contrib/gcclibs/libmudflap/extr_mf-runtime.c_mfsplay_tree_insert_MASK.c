
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct mfsplay_tree_node_s {int dummy; } ;
typedef void* mfsplay_tree_value ;
typedef TYPE_1__* mfsplay_tree_node ;
typedef scalar_t__ mfsplay_tree_key ;
typedef TYPE_2__* mfsplay_tree ;
struct TYPE_8__ {TYPE_1__* root; scalar_t__ last_splayed_key_p; int num_keys; } ;
struct TYPE_7__ {scalar_t__ key; struct TYPE_7__* left; struct TYPE_7__* right; void* value; } ;


 int FUNC_0 (TYPE_2__*,scalar_t__) ;
 TYPE_1__* FUNC_1 (int) ;

__attribute__((used)) static mfsplay_tree_node
FUNC_2 (mfsplay_tree VAR_0, mfsplay_tree_key VAR_1, mfsplay_tree_value VAR_2)
{
  int VAR_3 = 0;

  FUNC_0 (VAR_0, VAR_1);

  if (VAR_0->root)
    VAR_3 = ((VAR_0->root->key > VAR_1) ? 1 :
                  ((VAR_0->root->key < VAR_1) ? -1 : 0));

  if (VAR_0->root && VAR_3 == 0)
    {


      VAR_0->root->value = VAR_2;
    }
  else
    {

      mfsplay_tree_node VAR_4;

      VAR_4 = FUNC_1 (sizeof (struct mfsplay_tree_node_s));
      VAR_4->key = VAR_1;
      VAR_4->value = VAR_2;
      VAR_0->num_keys++;
      if (!VAR_0->root)
        VAR_4->left = VAR_4->right = 0;
      else if (VAR_3 < 0)
        {
          VAR_4->left = VAR_0->root;
          VAR_4->right = VAR_4->left->right;
          VAR_4->left->right = 0;
        }
      else
        {
          VAR_4->right = VAR_0->root;
          VAR_4->left = VAR_4->right->left;
          VAR_4->right->left = 0;
        }

      VAR_0->root = VAR_4;
      VAR_0->last_splayed_key_p = 0;
    }

  return VAR_0->root;
}
