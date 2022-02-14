
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_1__* splay_tree_node ;
typedef int splay_tree_key ;
typedef TYPE_2__* splay_tree ;
struct TYPE_11__ {scalar_t__ root; int (* comp ) (int ,int ) ;} ;
struct TYPE_10__ {struct TYPE_10__* right; struct TYPE_10__* left; int key; } ;


 int FUNC_0 (TYPE_1__**,TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__**,TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void
FUNC_4 (splay_tree VAR_0, splay_tree_key VAR_1)
{
  if (VAR_0->root == 0)
    return;

  do {
    int VAR_2, VAR_3;
    splay_tree_node VAR_4, VAR_5;

    VAR_4 = VAR_0->root;
    VAR_2 = (*VAR_0->comp) (VAR_1, VAR_4->key);


    if (VAR_2 == 0)
      return;


    if (VAR_2 < 0)
      VAR_5 = VAR_4->left;
    else
      VAR_5 = VAR_4->right;
    if (!VAR_5)
      return;



    VAR_3 = (*VAR_0->comp) (VAR_1, VAR_5->key);
    if (VAR_3 == 0
        || (VAR_3 < 0 && !VAR_5->left)
        || (VAR_3 > 0 && !VAR_5->right))
      {
 if (VAR_2 < 0)
   FUNC_0 (&VAR_0->root, VAR_4, VAR_5);
 else
   FUNC_1 (&VAR_0->root, VAR_4, VAR_5);
        return;
      }


    if (VAR_2 < 0 && VAR_3 < 0)
      {
 FUNC_0 (&VAR_4->left, VAR_5, VAR_5->left);
 FUNC_0 (&VAR_0->root, VAR_4, VAR_4->left);
      }
    else if (VAR_2 > 0 && VAR_3 > 0)
      {
 FUNC_1 (&VAR_4->right, VAR_5, VAR_5->right);
 FUNC_1 (&VAR_0->root, VAR_4, VAR_4->right);
      }
    else if (VAR_2 < 0 && VAR_3 > 0)
      {
 FUNC_1 (&VAR_4->left, VAR_5, VAR_5->right);
 FUNC_0 (&VAR_0->root, VAR_4, VAR_4->left);
      }
    else if (VAR_2 > 0 && VAR_3 < 0)
      {
 FUNC_0 (&VAR_4->right, VAR_5, VAR_5->left);
 FUNC_1 (&VAR_0->root, VAR_4, VAR_4->right);
      }
  } while (1);
}
