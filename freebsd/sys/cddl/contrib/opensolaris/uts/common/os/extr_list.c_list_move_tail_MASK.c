
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* list_prev; struct TYPE_7__* list_next; } ;
struct TYPE_6__ {scalar_t__ list_size; scalar_t__ list_offset; TYPE_2__ list_head; } ;
typedef TYPE_1__ list_t ;
typedef TYPE_2__ list_node_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;

void
FUNC_2(list_t *VAR_0, list_t *VAR_1)
{
 list_node_t *VAR_2 = &VAR_0->list_head;
 list_node_t *VAR_3 = &VAR_1->list_head;

 FUNC_0(VAR_0->list_size == VAR_1->list_size);
 FUNC_0(VAR_0->list_offset == VAR_1->list_offset);

 if (FUNC_1(VAR_1))
  return;

 VAR_2->list_prev->list_next = VAR_3->list_next;
 VAR_3->list_next->list_prev = VAR_2->list_prev;
 VAR_2->list_prev = VAR_3->list_prev;
 VAR_3->list_prev->list_next = VAR_2;


 VAR_3->list_next = VAR_3->list_prev = VAR_3;
}
