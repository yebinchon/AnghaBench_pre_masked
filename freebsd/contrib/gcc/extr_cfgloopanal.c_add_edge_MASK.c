
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct graph {TYPE_1__* vertices; } ;
struct edge {int src; int dest; struct edge* succ_next; struct edge* pred_next; void* data; } ;
struct TYPE_2__ {struct edge* succ; struct edge* pred; } ;


 struct edge* FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1 (struct graph *VAR_0, int VAR_1, int VAR_2, void *VAR_3)
{
  struct edge *VAR_4 = FUNC_0 (sizeof (struct edge));

  VAR_4->src = VAR_1;
  VAR_4->dest = VAR_2;
  VAR_4->data = VAR_3;

  VAR_4->pred_next = VAR_0->vertices[VAR_2].pred;
  VAR_0->vertices[VAR_2].pred = VAR_4;

  VAR_4->succ_next = VAR_0->vertices[VAR_1].succ;
  VAR_0->vertices[VAR_1].succ = VAR_4;
}
