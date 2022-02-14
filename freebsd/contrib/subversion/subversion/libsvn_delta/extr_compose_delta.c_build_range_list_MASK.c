
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int range_list_node_t ;
struct TYPE_5__ {TYPE_2__* tree; } ;
typedef TYPE_1__ range_index_t ;
struct TYPE_6__ {scalar_t__ offset; scalar_t__ limit; scalar_t__ target_offset; struct TYPE_6__* next; } ;
typedef TYPE_2__ range_index_node_t ;
typedef scalar_t__ apr_size_t ;


 int FUNC_0 () ;
 int * FUNC_1 (int **,int **,TYPE_1__*,int ,scalar_t__,scalar_t__,scalar_t__ const) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static range_list_node_t *
FUNC_2(apr_size_t VAR_2, apr_size_t VAR_3, range_index_t *VAR_4)
{
  range_list_node_t *VAR_5 = ((void*)0);
  range_list_node_t *VAR_6 = ((void*)0);
  range_index_node_t *VAR_7 = VAR_4->tree;

  while (VAR_2 < VAR_3)
    {
      if (VAR_7 == ((void*)0))
        return FUNC_1(&VAR_5, &VAR_6, VAR_4,
                                VAR_0,
                                VAR_2, VAR_3, 0);

      if (VAR_2 < VAR_7->offset)
        {
          if (VAR_3 <= VAR_7->offset)
            return FUNC_1(&VAR_5, &VAR_6, VAR_4,
                                    VAR_0,
                                    VAR_2, VAR_3, 0);
          else
            {
              FUNC_1(&VAR_5, &VAR_6, VAR_4,
                               VAR_0,
                               VAR_2, VAR_7->offset, 0);
              VAR_2 = VAR_7->offset;
            }
        }
      else
        {






          if (VAR_2 >= VAR_7->limit)
            VAR_7 = VAR_7->next;
          else
            {
              const apr_size_t VAR_8 =
                VAR_2 - VAR_7->offset + VAR_7->target_offset;

              if (VAR_3 <= VAR_7->limit)
                return FUNC_1(&VAR_5, &VAR_6, VAR_4,
                                        VAR_1,
                                        VAR_2, VAR_3, VAR_8);
              else
                {
                  FUNC_1(&VAR_5, &VAR_6, VAR_4,
                                   VAR_1,
                                   VAR_2, VAR_7->limit, VAR_8);
                  VAR_2 = VAR_7->limit;
                  VAR_7 = VAR_7->next;
                }
            }
        }
    }


  FUNC_0();
}
