
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int free_list; int pool; } ;
typedef TYPE_1__ range_index_t ;
struct TYPE_7__ {int * next; int prev; int * right; int left; void* target_offset; void* limit; void* offset; } ;
typedef TYPE_2__ range_index_node_t ;
typedef void* apr_size_t ;


 TYPE_2__* FUNC_0 (int ,int *) ;

__attribute__((used)) static range_index_node_t *
FUNC_1(range_index_t *VAR_0,
                       apr_size_t VAR_1,
                       apr_size_t VAR_2,
                       apr_size_t VAR_3)
{
  range_index_node_t *const VAR_4 = FUNC_0(VAR_0->pool, &VAR_0->free_list);
  VAR_4->offset = VAR_1;
  VAR_4->limit = VAR_2;
  VAR_4->target_offset = VAR_3;
  VAR_4->left = *(VAR_4->right = ((void*)0));
  VAR_4->prev = *(VAR_4->next = ((void*)0));
  return VAR_4;
}
