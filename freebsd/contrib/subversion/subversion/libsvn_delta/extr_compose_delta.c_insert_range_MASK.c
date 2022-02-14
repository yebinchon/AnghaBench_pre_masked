
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int svn_boolean_t ;
struct TYPE_7__ {TYPE_2__* tree; } ;
typedef TYPE_1__ range_index_t ;
struct TYPE_8__ {scalar_t__ offset; scalar_t__ limit; struct TYPE_8__* prev; struct TYPE_8__* next; struct TYPE_8__* right; struct TYPE_8__* left; scalar_t__ target_offset; } ;
typedef TYPE_2__ range_index_node_t ;
typedef scalar_t__ apr_size_t ;


 TYPE_2__* FUNC_0 (TYPE_1__*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(apr_size_t VAR_0, apr_size_t VAR_1, apr_size_t VAR_2,
             range_index_t *VAR_3)
{
  range_index_node_t *VAR_4 = ((void*)0);

  if (VAR_3->tree == ((void*)0))
    {
      VAR_4 = FUNC_0(VAR_3, VAR_0, VAR_1, VAR_2);
      VAR_3->tree = VAR_4;
    }
  else
    {
      if (VAR_0 == VAR_3->tree->offset
          && VAR_1 > VAR_3->tree->limit)
        {
          VAR_3->tree->limit = VAR_1;
          VAR_3->tree->target_offset = VAR_2;
          FUNC_2(VAR_3, VAR_1);
        }
      else if (VAR_0 > VAR_3->tree->offset
               && VAR_1 > VAR_3->tree->limit)
        {



          const svn_boolean_t VAR_5 =
            (!VAR_3->tree->next
             || VAR_3->tree->limit < VAR_3->tree->next->offset
             || VAR_1 > VAR_3->tree->next->limit);

          if (VAR_5)
            {


              if (VAR_3->tree->prev && VAR_3->tree->prev->limit > VAR_0)
                {

                  VAR_3->tree->offset = VAR_0;
                  VAR_3->tree->limit = VAR_1;
                  VAR_3->tree->target_offset = VAR_2;
                }
              else
                {

                  VAR_4 = FUNC_0(VAR_3, VAR_0, VAR_1,
                                                VAR_2);
                  if ((VAR_4->next = VAR_3->tree->next) != ((void*)0))
                    VAR_4->next->prev = VAR_4;
                  VAR_3->tree->next = VAR_4;
                  VAR_4->prev = VAR_3->tree;

                  VAR_4->right = VAR_3->tree->right;
                  VAR_3->tree->right = ((void*)0);
                  VAR_4->left = VAR_3->tree;
                  VAR_3->tree = VAR_4;
                }
              FUNC_2(VAR_3, VAR_1);
            }
          else
                                  ;
        }
      else if (VAR_0 < VAR_3->tree->offset)
        {
          FUNC_1(VAR_3->tree->left == ((void*)0));


          VAR_4 = FUNC_0(VAR_3, VAR_0, VAR_1, VAR_2);
          VAR_4->left = VAR_4->prev = ((void*)0);
          VAR_4->right = VAR_4->next = VAR_3->tree;
          VAR_3->tree = VAR_4->next->prev = VAR_4;
          FUNC_2(VAR_3, VAR_1);
        }
      else
                              ;
    }
}
