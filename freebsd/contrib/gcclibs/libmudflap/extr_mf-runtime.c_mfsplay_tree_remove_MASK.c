
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* mfsplay_tree_node ;
typedef scalar_t__ mfsplay_tree_key ;
typedef TYPE_2__* mfsplay_tree ;
struct TYPE_7__ {TYPE_1__* root; int num_keys; scalar_t__ last_splayed_key_p; } ;
struct TYPE_6__ {scalar_t__ key; struct TYPE_6__* right; struct TYPE_6__* left; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*,scalar_t__) ;

__attribute__((used)) static void
FUNC_2 (mfsplay_tree VAR_0, mfsplay_tree_key VAR_1)
{
  FUNC_1 (VAR_0, VAR_1);
  VAR_0->last_splayed_key_p = 0;
  if (VAR_0->root && (VAR_0->root->key == VAR_1))
    {
      mfsplay_tree_node VAR_2, VAR_3;
      VAR_2 = VAR_0->root->left;
      VAR_3 = VAR_0->root->right;

      FUNC_0 (VAR_0->root);
      VAR_0->num_keys--;


      if (VAR_2)
        {
          VAR_0->root = VAR_2;


          if (VAR_3)
            {
              while (VAR_2->right)
                VAR_2 = VAR_2->right;
              VAR_2->right = VAR_3;
            }
        }
      else
        VAR_0->root = VAR_3;
    }
}
