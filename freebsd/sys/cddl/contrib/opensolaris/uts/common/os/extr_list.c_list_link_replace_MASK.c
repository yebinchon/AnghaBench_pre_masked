
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* list_prev; TYPE_1__* list_next; } ;
typedef TYPE_3__ list_node_t ;
struct TYPE_8__ {TYPE_3__* list_next; } ;
struct TYPE_7__ {TYPE_3__* list_prev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;

void
FUNC_2(list_node_t *VAR_0, list_node_t *VAR_1)
{
 FUNC_0(FUNC_1(VAR_0));
 FUNC_0(!FUNC_1(VAR_1));

 VAR_1->list_next = VAR_0->list_next;
 VAR_1->list_prev = VAR_0->list_prev;
 VAR_0->list_prev->list_next = VAR_1;
 VAR_0->list_next->list_prev = VAR_1;
 VAR_0->list_next = VAR_0->list_prev = ((void*)0);
}
