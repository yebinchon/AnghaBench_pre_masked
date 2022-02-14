
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int kind; struct TYPE_8__* next; struct TYPE_8__* prev; void* target_offset; void* limit; void* offset; } ;
typedef TYPE_1__ range_list_node_t ;
struct TYPE_9__ {int free_list; int pool; } ;
typedef TYPE_2__ range_index_t ;
typedef enum range_kind { ____Placeholder_range_kind } range_kind ;
typedef void* apr_size_t ;


 TYPE_1__* FUNC_0 (int ,int *) ;

__attribute__((used)) static range_list_node_t *
FUNC_1(range_list_node_t **VAR_0,
                 range_list_node_t **VAR_1,
                 range_index_t *VAR_2,
                 enum range_kind VAR_3,
                 apr_size_t VAR_4,
                 apr_size_t VAR_5,
                 apr_size_t VAR_6)
{
  range_list_node_t *const VAR_7 = FUNC_0(VAR_2->pool, &VAR_2->free_list);
  VAR_7->kind = VAR_3;
  VAR_7->offset = VAR_4;
  VAR_7->limit = VAR_5;
  VAR_7->target_offset = VAR_6;
  if (*VAR_0 == ((void*)0))
    {
      VAR_7->prev = VAR_7->next = ((void*)0);
      *VAR_0 = *VAR_1 = VAR_7;
    }
  else
    {
      VAR_7->prev = *VAR_1;
      VAR_7->next = ((void*)0);
      (*VAR_1)->next = VAR_7;
      *VAR_1 = VAR_7;
    }
  return *VAR_0;
}
