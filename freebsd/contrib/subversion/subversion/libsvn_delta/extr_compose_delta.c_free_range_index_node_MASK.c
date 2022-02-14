
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int free_list; } ;
typedef TYPE_3__ range_index_t ;
struct TYPE_11__ {TYPE_2__* next; TYPE_1__* prev; } ;
typedef TYPE_4__ range_index_node_t ;
struct TYPE_9__ {TYPE_1__* prev; } ;
struct TYPE_8__ {TYPE_2__* next; } ;


 int FUNC_0 (TYPE_4__*,int *) ;

__attribute__((used)) static void
FUNC_1(range_index_t *VAR_0, range_index_node_t *VAR_1)
{
  if (VAR_1->next)
    VAR_1->next->prev = VAR_1->prev;
  if (VAR_1->prev)
    VAR_1->prev->next = VAR_1->next;
  FUNC_0(VAR_1, &VAR_0->free_list);
}
