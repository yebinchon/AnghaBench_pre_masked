
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* ddg_ptr ;
typedef TYPE_3__* ddg_edge_ptr ;
struct TYPE_8__ {struct TYPE_8__* next_in; struct TYPE_8__* next_out; } ;
struct TYPE_7__ {int num_nodes; TYPE_1__* nodes; } ;
struct TYPE_6__ {TYPE_3__* in; TYPE_3__* out; int insn; } ;
typedef int FILE ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,TYPE_3__*) ;
 int FUNC_2 (int *,int ) ;

void
FUNC_3 (FILE *VAR_0, ddg_ptr VAR_1)
{
  int VAR_2;

  for (VAR_2 = 0; VAR_2 < VAR_1->num_nodes; VAR_2++)
    {
      ddg_edge_ptr VAR_3;

      FUNC_2 (VAR_0, VAR_1->nodes[VAR_2].insn);
      FUNC_0 (VAR_0, "OUT ARCS: ");
      for (VAR_3 = VAR_1->nodes[VAR_2].out; VAR_3; VAR_3 = VAR_3->next_out)
 FUNC_1 (VAR_0, VAR_3);

      FUNC_0 (VAR_0, "\nIN ARCS: ");
      for (VAR_3 = VAR_1->nodes[VAR_2].in; VAR_3; VAR_3 = VAR_3->next_in)
 FUNC_1 (VAR_0, VAR_3);

      FUNC_0 (VAR_0, "\n");
    }
}
