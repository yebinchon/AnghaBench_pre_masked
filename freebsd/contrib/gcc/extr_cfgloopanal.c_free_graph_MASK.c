
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct graph {int n_vertices; struct graph* vertices; struct graph* succ_next; struct graph* succ; } ;
struct edge {int n_vertices; struct edge* vertices; struct edge* succ_next; struct edge* succ; } ;


 int FUNC_0 (struct graph*) ;

__attribute__((used)) static void
FUNC_1 (struct graph *VAR_0)
{
  struct edge *VAR_1, *VAR_2;
  int VAR_3;

  for (VAR_3 = 0; VAR_3 < VAR_0->n_vertices; VAR_3++)
    for (VAR_1 = VAR_0->vertices[VAR_3].succ; VAR_1; VAR_1 = VAR_2)
      {
 VAR_2 = VAR_1->succ_next;
 FUNC_0 (VAR_1);
      }
  FUNC_0 (VAR_0->vertices);
  FUNC_0 (VAR_0);
}
