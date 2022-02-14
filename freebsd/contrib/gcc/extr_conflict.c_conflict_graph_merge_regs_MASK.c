
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* conflict_graph_arc ;
typedef TYPE_2__* conflict_graph ;
struct TYPE_6__ {TYPE_1__** neighbor_heads; } ;
struct TYPE_5__ {int smaller; int larger; struct TYPE_5__* larger_next; struct TYPE_5__* smaller_next; } ;


 int FUNC_0 (TYPE_2__*,int,int) ;

void
FUNC_1 (conflict_graph VAR_0, int VAR_1, int VAR_2)
{
  conflict_graph_arc VAR_3 = VAR_0->neighbor_heads[VAR_2];

  if (VAR_1 == VAR_2)
    return;

  while (VAR_3 != ((void*)0))
    {
      int VAR_4 = VAR_3->smaller;

      if (VAR_4 == VAR_2)
 VAR_4 = VAR_3->larger;

      FUNC_0 (VAR_0, VAR_1, VAR_4);



      if (VAR_2 < VAR_3->larger)
 VAR_3 = VAR_3->smaller_next;
      else
 VAR_3 = VAR_3->larger_next;
    }
}
