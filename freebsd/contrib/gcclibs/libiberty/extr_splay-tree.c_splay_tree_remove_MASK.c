
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* splay_tree_node ;
typedef int splay_tree_key ;
typedef TYPE_2__* splay_tree ;
struct TYPE_7__ {scalar_t__ (* comp ) (int ,int ) ;TYPE_1__* root; int allocate_data; int (* deallocate ) (TYPE_1__*,int ) ;int (* delete_value ) (int ) ;} ;
struct TYPE_6__ {struct TYPE_6__* right; int value; struct TYPE_6__* left; int key; } ;


 int FUNC_0 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;

void
FUNC_4 (splay_tree VAR_0, splay_tree_key VAR_1)
{
  FUNC_0 (VAR_0, VAR_1);

  if (VAR_0->root && (*VAR_0->comp) (VAR_0->root->key, VAR_1) == 0)
    {
      splay_tree_node VAR_2, VAR_3;

      VAR_2 = VAR_0->root->left;
      VAR_3 = VAR_0->root->right;


      if (VAR_0->delete_value)
 (*VAR_0->delete_value) (VAR_0->root->value);
      (*VAR_0->deallocate) (VAR_0->root, VAR_0->allocate_data);



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
