
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct graph {int n_vertices; TYPE_1__* vertices; } ;
struct edge {int src; int dest; struct edge* succ_next; struct edge* pred_next; } ;
struct TYPE_2__ {int component; struct edge* succ; struct edge* pred; } ;
typedef int FILE ;


 int FUNC_0 (int *,char*,...) ;

void
FUNC_1 (FILE *VAR_0, struct graph *VAR_1)
{
  int VAR_2;
  struct edge *VAR_3;

  for (VAR_2 = 0; VAR_2 < VAR_1->n_vertices; VAR_2++)
    {
      if (!VAR_1->vertices[VAR_2].pred
   && !VAR_1->vertices[VAR_2].succ)
 continue;

      FUNC_0 (VAR_0, "%d (%d)\t<-", VAR_2, VAR_1->vertices[VAR_2].component);
      for (VAR_3 = VAR_1->vertices[VAR_2].pred; VAR_3; VAR_3 = VAR_3->pred_next)
 FUNC_0 (VAR_0, " %d", VAR_3->src);
      FUNC_0 (VAR_0, "\n");

      FUNC_0 (VAR_0, "\t->");
      for (VAR_3 = VAR_1->vertices[VAR_2].succ; VAR_3; VAR_3 = VAR_3->succ_next)
 FUNC_0 (VAR_0, " %d", VAR_3->dest);
      FUNC_0 (VAR_0, "\n");
    }
}
