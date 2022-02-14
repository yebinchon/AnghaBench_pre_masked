
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* next; } ;
typedef TYPE_1__ range_list_node_t ;
struct TYPE_7__ {int free_list; } ;
typedef TYPE_2__ range_index_t ;


 int FUNC_0 (TYPE_1__* const,int *) ;

__attribute__((used)) static void
FUNC_1(range_list_node_t *VAR_0, range_index_t *VAR_1)
{
  while (VAR_0)
    {
      range_list_node_t *const VAR_2 = VAR_0;
      VAR_0 = VAR_2->next;
      FUNC_0(VAR_2, &VAR_1->free_list);
    }
}
