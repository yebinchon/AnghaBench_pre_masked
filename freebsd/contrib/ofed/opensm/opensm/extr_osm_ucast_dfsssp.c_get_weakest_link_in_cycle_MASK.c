
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ status; TYPE_2__* linklist; } ;
typedef TYPE_1__ cdg_node_t ;
struct TYPE_6__ {scalar_t__ num_pairs; scalar_t__ removed; struct TYPE_6__* next; TYPE_1__* node; } ;
typedef TYPE_2__ cdg_link_t ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;

__attribute__((used)) static cdg_link_t *FUNC_0(cdg_node_t * VAR_2)
{
 cdg_node_t *VAR_3 = VAR_2, *VAR_4 = ((void*)0);
 cdg_link_t *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);

 VAR_5 = VAR_3->linklist;
 while (VAR_5) {
  if (VAR_5->node->status == VAR_0) {
   VAR_6 = VAR_5;
   VAR_4 = VAR_3;
   VAR_3 = VAR_5->node;
   break;
  }
  VAR_5 = VAR_5->next;
 }

 while (1) {
  VAR_3->status = VAR_1;
  VAR_5 = VAR_3->linklist;
  while (VAR_5) {
   if (VAR_5->node->status == VAR_0) {
    if ((VAR_5->num_pairs - VAR_5->removed) <
        (VAR_6->num_pairs -
         VAR_6->removed)) {
     VAR_6 = VAR_5;
     VAR_4 = VAR_3;
    }
    VAR_3 = VAR_5->node;
    break;
   }
   VAR_5 = VAR_5->next;
  }

  if (VAR_3 == VAR_2) {
   VAR_3->status = VAR_1;
   break;
  }
 }

 if (VAR_4->linklist == VAR_6) {
  VAR_4->linklist = VAR_6->next;
 } else {
  VAR_5 = VAR_4->linklist;
  while (VAR_5) {
   if (VAR_5->next == VAR_6) {
    VAR_5->next = VAR_6->next;
    break;
   }
   VAR_5 = VAR_5->next;
  }
 }

 return VAR_6;
}
