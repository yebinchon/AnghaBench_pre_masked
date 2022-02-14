
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ (* get_order ) (TYPE_2__*,TYPE_2__*) ;int no_of_elements; TYPE_2__* front; } ;
typedef TYPE_1__ queue ;
struct TYPE_8__ {struct TYPE_8__* node_next; } ;
typedef TYPE_2__ node ;


 scalar_t__ FUNC_0 (TYPE_2__*,TYPE_2__*) ;

queue *FUNC_1(
 queue * VAR_0,
 void * VAR_1
 )
{
 node *VAR_2 = (node *)VAR_1 - 1;
 node *VAR_3 = ((void*)0);
 node *VAR_4 = VAR_0->front;

 while (VAR_4 != ((void*)0) &&
        (*VAR_0->get_order)(VAR_2 + 1, VAR_4 + 1) > 0) {
  VAR_3 = VAR_4;
  VAR_4 = VAR_4->node_next;
 }

 if (VAR_3 == ((void*)0)) {
  VAR_2->node_next = VAR_0->front;
  VAR_0->front = VAR_2;
 } else {
  VAR_2->node_next = VAR_3->node_next;
  VAR_3->node_next = VAR_2;
 }

 ++VAR_0->no_of_elements;
 return VAR_0;
}
