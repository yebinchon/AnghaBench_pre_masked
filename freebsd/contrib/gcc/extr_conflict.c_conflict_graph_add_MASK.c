
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct conflict_graph_arc_def {int smaller; int larger; } ;
typedef TYPE_1__* conflict_graph_arc ;
typedef TYPE_2__* conflict_graph ;
struct TYPE_6__ {TYPE_1__** neighbor_heads; int arc_obstack; int arc_hash_table; } ;
struct TYPE_5__ {int smaller; int larger; struct TYPE_5__* larger_next; struct TYPE_5__* smaller_next; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 void** FUNC_3 (int ,void*,int ) ;
 TYPE_1__* FUNC_4 (int *,int) ;

int
FUNC_5 (conflict_graph VAR_1, int VAR_2, int VAR_3)
{
  int VAR_4 = FUNC_1 (VAR_2, VAR_3);
  int VAR_5 = FUNC_0 (VAR_2, VAR_3);
  struct conflict_graph_arc_def VAR_6;
  conflict_graph_arc VAR_7;
  void **VAR_8;


  FUNC_2 (VAR_2 != VAR_3);

  VAR_6.smaller = VAR_4;
  VAR_6.larger = VAR_5;
  VAR_8 = FUNC_3 (VAR_1->arc_hash_table, (void *) &VAR_6, VAR_0);


  if (*VAR_8 != ((void*)0))
    return 0;


  VAR_7
    = FUNC_4 (&VAR_1->arc_obstack,
       sizeof (struct conflict_graph_arc_def));


  VAR_7->smaller = VAR_4;
  VAR_7->larger = VAR_5;


  VAR_7->smaller_next = VAR_1->neighbor_heads[VAR_4];
  VAR_1->neighbor_heads[VAR_4] = VAR_7;
  VAR_7->larger_next = VAR_1->neighbor_heads[VAR_5];
  VAR_1->neighbor_heads[VAR_5] = VAR_7;


  *VAR_8 = (void *) VAR_7;

  return 1;
}
