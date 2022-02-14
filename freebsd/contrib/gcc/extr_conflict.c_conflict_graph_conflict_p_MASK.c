
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct conflict_graph_arc_def {int larger; int smaller; } ;
typedef TYPE_1__* conflict_graph ;
struct TYPE_3__ {int arc_hash_table; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int * FUNC_2 (int ,void*) ;

int
FUNC_3 (conflict_graph VAR_0, int VAR_1, int VAR_2)
{

  struct conflict_graph_arc_def VAR_3;
  VAR_3.smaller = FUNC_1 (VAR_1, VAR_2);
  VAR_3.larger = FUNC_0 (VAR_1, VAR_2);

  return FUNC_2 (VAR_0->arc_hash_table, (void *) &VAR_3) != ((void*)0);
}
