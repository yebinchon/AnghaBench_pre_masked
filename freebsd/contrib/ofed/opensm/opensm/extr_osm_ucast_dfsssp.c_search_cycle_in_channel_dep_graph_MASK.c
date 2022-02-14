
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ status; struct TYPE_8__* pre; TYPE_2__* linklist; } ;
typedef TYPE_1__ cdg_node_t ;
struct TYPE_9__ {struct TYPE_9__* next; scalar_t__ removed; scalar_t__ num_pairs; int * srcdest_pairs; TYPE_1__* node; } ;
typedef TYPE_2__ cdg_link_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static cdg_node_t *FUNC_2(cdg_node_t * VAR_3,
           cdg_node_t * VAR_4)
{
 cdg_node_t *VAR_5 = ((void*)0);
 cdg_node_t *VAR_6 = VAR_4, *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
 cdg_link_t *VAR_9 = ((void*)0);

 while (VAR_6) {
  VAR_6->status = VAR_1;
  VAR_9 = VAR_6->linklist;
  VAR_7 = ((void*)0);
  while (VAR_9) {
   if (VAR_9->node->status == VAR_2) {
    VAR_7 = VAR_9->node;
    break;
   }
   if (VAR_9->node->status == VAR_1) {
    VAR_5 = VAR_9->node;
    goto Exit;
   }
   VAR_9 = VAR_9->next;
  }
  if (VAR_7) {
   VAR_7->pre = VAR_6;
   VAR_6 = VAR_7;
  } else {

   VAR_6->status = VAR_0;


   VAR_9 = VAR_6->linklist;
   while (VAR_9) {
    if (VAR_9->num_pairs)
     FUNC_0(VAR_9->srcdest_pairs);
    VAR_9->srcdest_pairs = ((void*)0);
    VAR_9->num_pairs = 0;
    VAR_9->removed = 0;
    VAR_9 = VAR_9->next;
   }

   if (VAR_6->pre) {
    VAR_8 = VAR_6;
    VAR_6 = VAR_6->pre;
    VAR_8->pre = ((void*)0);
   } else {

    VAR_6 = FUNC_1(VAR_3);
    if (!VAR_6)
     break;
   }
  }
 }

Exit:
 return VAR_5;
}
