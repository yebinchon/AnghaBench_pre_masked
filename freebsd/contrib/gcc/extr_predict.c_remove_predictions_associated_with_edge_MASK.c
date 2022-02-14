
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct edge_prediction {struct edge_prediction* ep_next; TYPE_2__* ep_edge; } ;
typedef TYPE_2__* edge ;
struct TYPE_5__ {TYPE_1__* src; } ;
struct TYPE_4__ {struct edge_prediction* predictions; } ;



void
FUNC_0 (edge VAR_0)
{
  if (VAR_0->src->predictions)
    {
      struct edge_prediction **VAR_1 = &VAR_0->src->predictions;
      while (*VAR_1)
 {
   if ((*VAR_1)->ep_edge == VAR_0)
     *VAR_1 = (*VAR_1)->ep_next;
   else
     VAR_1 = &((*VAR_1)->ep_next);
 }
    }
}
