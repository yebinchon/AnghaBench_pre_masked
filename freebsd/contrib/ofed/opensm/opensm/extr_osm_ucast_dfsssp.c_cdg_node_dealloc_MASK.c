
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* srcdest_pairs; scalar_t__ num_pairs; struct TYPE_5__* next; struct TYPE_5__* linklist; } ;
typedef TYPE_1__ cdg_node_t ;
typedef TYPE_1__ cdg_link_t ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(cdg_node_t * VAR_0)
{
 cdg_link_t *VAR_1 = VAR_0->linklist, *VAR_2 = ((void*)0);


 while (VAR_1) {
  VAR_2 = VAR_1;
  VAR_1 = VAR_1->next;

  if (VAR_2->num_pairs)
   FUNC_0(VAR_2->srcdest_pairs);
  FUNC_0(VAR_2);
 }

 FUNC_0(VAR_0);
}
