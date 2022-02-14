
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* conflict_graph ;
struct TYPE_4__ {struct TYPE_4__* neighbor_heads; int arc_hash_table; int arc_obstack; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;

void
FUNC_3 (conflict_graph VAR_0)
{
  FUNC_2 (&VAR_0->arc_obstack, ((void*)0));
  FUNC_1 (VAR_0->arc_hash_table);
  FUNC_0 (VAR_0->neighbor_heads);
  FUNC_0 (VAR_0);
}
