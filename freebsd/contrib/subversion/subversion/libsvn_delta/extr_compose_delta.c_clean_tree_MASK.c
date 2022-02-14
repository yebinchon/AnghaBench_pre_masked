
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* tree; } ;
typedef TYPE_2__ range_index_t ;
struct TYPE_9__ {scalar_t__ offset; scalar_t__ limit; struct TYPE_9__* left; struct TYPE_9__* right; } ;
typedef TYPE_3__ range_index_node_t ;
typedef scalar_t__ apr_size_t ;
struct TYPE_7__ {TYPE_3__* right; } ;


 int FUNC_0 (TYPE_2__*,TYPE_3__* const) ;

__attribute__((used)) static void
FUNC_1(range_index_t *VAR_0, apr_size_t VAR_1)
{
  apr_size_t VAR_2 = VAR_1 + 1;
  range_index_node_t **VAR_3 = &VAR_0->tree->right;
  while (*VAR_3 != ((void*)0))
    {
      range_index_node_t *const VAR_4 = *VAR_3;
      apr_size_t const VAR_5 =
        (VAR_4->right != ((void*)0) && VAR_4->right->offset < VAR_2
         ? VAR_4->right->offset
         : VAR_2);

      if (VAR_4->limit <= VAR_1
          || (VAR_4->offset < VAR_1 && VAR_5 < VAR_1))
        {
          *VAR_3 = VAR_4->right;
          VAR_4->right = ((void*)0);
          FUNC_0(VAR_0, VAR_4);
        }
      else
        {
          VAR_2 = VAR_4->offset;
          VAR_3 = &VAR_4->left;
        }
    }
}
