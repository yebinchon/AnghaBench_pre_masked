
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* ddg_ptr ;
typedef TYPE_1__* ddg_edge_ptr ;
struct TYPE_5__ {int num_nodes; scalar_t__ num_backarcs; struct TYPE_5__* nodes; struct TYPE_5__* backarcs; int predecessors; int successors; struct TYPE_5__* next_out; struct TYPE_5__* out; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

void
FUNC_2 (ddg_ptr VAR_0)
{
  int VAR_1;

  if (!VAR_0)
    return;

  for (VAR_1 = 0; VAR_1 < VAR_0->num_nodes; VAR_1++)
    {
      ddg_edge_ptr VAR_2 = VAR_0->nodes[VAR_1].out;

      while (VAR_2)
 {
   ddg_edge_ptr VAR_3 = VAR_2->next_out;

   FUNC_0 (VAR_2);
   VAR_2 = VAR_3;
 }
      FUNC_1 (VAR_0->nodes[VAR_1].successors);
      FUNC_1 (VAR_0->nodes[VAR_1].predecessors);
    }
  if (VAR_0->num_backarcs > 0)
    FUNC_0 (VAR_0->backarcs);
  FUNC_0 (VAR_0->nodes);
  FUNC_0 (VAR_0);
}
