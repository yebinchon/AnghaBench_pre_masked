
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* mfsplay_tree_node ;
typedef scalar_t__ mfsplay_tree_key ;
typedef TYPE_2__* mfsplay_tree ;
struct TYPE_9__ {scalar_t__ depth; scalar_t__ max_depth; int rebalance_p; } ;
struct TYPE_8__ {scalar_t__ key; struct TYPE_8__* right; struct TYPE_8__* left; } ;



__attribute__((used)) static mfsplay_tree_node
FUNC_0 (mfsplay_tree VAR_0,
                         mfsplay_tree_key VAR_1,
                         mfsplay_tree_node * VAR_2,
                         mfsplay_tree_node * VAR_3,
                         mfsplay_tree_node * VAR_4)
{
  mfsplay_tree_node *VAR_5;
  mfsplay_tree_node VAR_6;
  int VAR_7;

  VAR_6 = *VAR_2;

  if (!VAR_6)
    return *VAR_3;

  VAR_7 = ((VAR_1 > VAR_6->key) ? 1 : ((VAR_1 < VAR_6->key) ? -1 : 0));

  if (VAR_7 == 0)

    VAR_5 = 0;
  else if (VAR_7 < 0)

    VAR_5 = &VAR_6->left;
  else

    VAR_5 = &VAR_6->right;

  if (VAR_5)
    {


      if (VAR_0->depth > VAR_0->max_depth)
        {
          VAR_0->rebalance_p = 1;
          return VAR_6;
         }


      VAR_0->depth ++;
      VAR_6 = FUNC_0 (VAR_0, VAR_1, VAR_5, VAR_2, VAR_3);
      VAR_0->depth --;



      if (*VAR_2 != VAR_6 || VAR_0->rebalance_p)
        return VAR_6;
    }

  if (!VAR_3)

    return VAR_6;



  if (!VAR_4)
    {
      if (VAR_6 == (*VAR_3)->left)
        {
          *VAR_2 = VAR_6->right;
          VAR_6->right = *VAR_3;
        }
      else
        {
          *VAR_2 = VAR_6->left;
          VAR_6->left = *VAR_3;
        }
      *VAR_3 = VAR_6;
      return VAR_6;
    }



  if (VAR_6 == (*VAR_3)->left && *VAR_3 == (*VAR_4)->left)
    {
      mfsplay_tree_node VAR_8 = *VAR_3;

      (*VAR_4)->left = VAR_8->right;
      VAR_8->right = *VAR_4;
      VAR_8->left = VAR_6->right;
      VAR_6->right = VAR_8;
      *VAR_4 = VAR_6;
      return VAR_6;
    }
  else if (VAR_6 == (*VAR_3)->right && *VAR_3 == (*VAR_4)->right)
    {
      mfsplay_tree_node VAR_9 = *VAR_3;

      (*VAR_4)->right = VAR_9->left;
      VAR_9->left = *VAR_4;
      VAR_9->right = VAR_6->left;
      VAR_6->left = VAR_9;
      *VAR_4 = VAR_6;
      return VAR_6;
    }



  if (VAR_6 == (*VAR_3)->left)
    {
      (*VAR_3)->left = VAR_6->right;
      VAR_6->right = *VAR_3;
      (*VAR_4)->right = VAR_6->left;
      VAR_6->left = *VAR_4;
      *VAR_4 = VAR_6;
      return VAR_6;
    }
  else
    {
      (*VAR_3)->right = VAR_6->left;
      VAR_6->left = *VAR_3;
      (*VAR_4)->left = VAR_6->right;
      VAR_6->right = *VAR_4;
      *VAR_4 = VAR_6;
      return VAR_6;
    }
}
