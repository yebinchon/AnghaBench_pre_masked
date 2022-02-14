
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* tree; } ;
typedef TYPE_1__ range_index_t ;
struct TYPE_5__ {scalar_t__ offset; int * prev; struct TYPE_5__* left; struct TYPE_5__* right; } ;
typedef TYPE_2__ range_index_node_t ;
typedef scalar_t__ apr_size_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(apr_size_t VAR_0, range_index_t *VAR_1)
{
  range_index_node_t *VAR_2 = VAR_1->tree;
  range_index_node_t VAR_3;
  range_index_node_t *VAR_4, *VAR_5;

  if (VAR_2 == ((void*)0))
    return;

  VAR_3.left = VAR_3.right = ((void*)0);
  VAR_4 = VAR_5 = &VAR_3;

  for (;;)
    {
      if (VAR_0 < VAR_2->offset)
        {
          if (VAR_2->left != ((void*)0)
              && VAR_0 < VAR_2->left->offset)
            {

              range_index_node_t *const VAR_6 = VAR_2->left;
              VAR_2->left = VAR_6->right;
              VAR_6->right = VAR_2;
              VAR_2 = VAR_6;
            }
          if (VAR_2->left == ((void*)0))
            break;


          VAR_5->left = VAR_2;
          VAR_5 = VAR_2;
          VAR_2 = VAR_2->left;
        }
      else if (VAR_0 > VAR_2->offset)
        {
          if (VAR_2->right != ((void*)0)
              && VAR_0 > VAR_2->right->offset)
            {

              range_index_node_t *const VAR_7 = VAR_2->right;
              VAR_2->right = VAR_7->left;
              VAR_7->left = VAR_2;
              VAR_2 = VAR_7;
            }
          if (VAR_2->right == ((void*)0))
            break;


          VAR_4->right = VAR_2;
          VAR_4 = VAR_2;
          VAR_2 = VAR_2->right;
        }
      else
        break;
    }


  VAR_4->right = VAR_2->left;
  VAR_5->left = VAR_2->right;
  VAR_2->left = VAR_3.right;
  VAR_2->right = VAR_3.left;
  if (VAR_0 < VAR_2->offset && VAR_2->left != ((void*)0))
    {
      if (VAR_2->left->right == ((void*)0))
        {

          range_index_node_t *const VAR_8 = VAR_2->left;
          VAR_2->left = VAR_8->right;
          VAR_8->right = VAR_2;
          VAR_2 = VAR_8;
        }
      else
        {

          range_index_node_t **VAR_9 = &VAR_2->left;
          while ((*VAR_9)->right != ((void*)0))
            VAR_9 = &(*VAR_9)->right;


          VAR_5 = VAR_2;
          VAR_4 = VAR_2->left;
          VAR_2 = *VAR_9;
          *VAR_9 = VAR_2->left;
          VAR_5->left = VAR_2->right;
          VAR_2->left = VAR_4;
          VAR_2->right = VAR_5;
        }
    }


  FUNC_0((VAR_0 >= VAR_2->offset)
         || ((VAR_2->left == ((void*)0))
             && (VAR_2->prev == ((void*)0))));
  VAR_1->tree = VAR_2;
}
