
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct splay_tree_node_s {int dummy; } ;
typedef void* splay_tree_value ;
typedef TYPE_1__* splay_tree_node ;
typedef int splay_tree_key ;
typedef TYPE_2__* splay_tree ;
struct TYPE_7__ {int (* comp ) (int ,int ) ;TYPE_1__* root; int allocate_data; scalar_t__ (* allocate ) (int,int ) ;int (* delete_value ) (void*) ;} ;
struct TYPE_6__ {struct TYPE_6__* left; struct TYPE_6__* right; void* value; int key; } ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (void*) ;
 scalar_t__ FUNC_3 (int,int ) ;

splay_tree_node
FUNC_4 (splay_tree VAR_0, splay_tree_key VAR_1, splay_tree_value VAR_2)
{
  int VAR_3 = 0;

  FUNC_0 (VAR_0, VAR_1);

  if (VAR_0->root)
    VAR_3 = (*VAR_0->comp)(VAR_0->root->key, VAR_1);

  if (VAR_0->root && VAR_3 == 0)
    {


      if (VAR_0->delete_value)
 (*VAR_0->delete_value)(VAR_0->root->value);
      VAR_0->root->value = VAR_2;
    }
  else
    {

      splay_tree_node VAR_4;

      VAR_4 = ((splay_tree_node)
              (*VAR_0->allocate) (sizeof (struct splay_tree_node_s),
                               VAR_0->allocate_data));
      VAR_4->key = VAR_1;
      VAR_4->value = VAR_2;

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
    }

  return VAR_0->root;
}
