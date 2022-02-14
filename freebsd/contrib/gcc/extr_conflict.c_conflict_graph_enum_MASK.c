
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ (* conflict_graph_enum_fn ) (int ,int,void*) ;
typedef TYPE_1__* conflict_graph_arc ;
typedef TYPE_2__* conflict_graph ;
struct TYPE_5__ {TYPE_1__** neighbor_heads; } ;
struct TYPE_4__ {int larger; struct TYPE_4__* larger_next; struct TYPE_4__* smaller_next; int smaller; } ;


 scalar_t__ FUNC_0 (int ,int,void*) ;

void
FUNC_1 (conflict_graph VAR_0, int VAR_1,
       conflict_graph_enum_fn VAR_2, void *VAR_3)
{
  conflict_graph_arc VAR_4 = VAR_0->neighbor_heads[VAR_1];
  while (VAR_4 != ((void*)0))
    {

      if ((*VAR_2) (VAR_4->smaller, VAR_4->larger, VAR_3))

 break;



      if (VAR_1 < VAR_4->larger)
 VAR_4 = VAR_4->smaller_next;
      else
 VAR_4 = VAR_4->larger_next;
    }
}
