
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_3__* ddg_ptr ;
typedef TYPE_4__* ddg_edge_ptr ;
struct TYPE_9__ {int distance; int latency; TYPE_2__* dest; struct TYPE_9__* next_out; } ;
struct TYPE_8__ {int num_nodes; TYPE_1__* nodes; } ;
struct TYPE_7__ {int cuid; int insn; } ;
struct TYPE_6__ {TYPE_4__* out; int insn; } ;
typedef int FILE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,int ) ;

void
FUNC_3 (FILE *VAR_0, ddg_ptr VAR_1)
{
  int VAR_2;

  FUNC_1 (VAR_0, "graph: {\n");
  for (VAR_2 = 0; VAR_2 < VAR_1->num_nodes; VAR_2++)
    {
      ddg_edge_ptr VAR_3;
      int VAR_4 = FUNC_0 (VAR_1->nodes[VAR_2].insn);

      FUNC_1 (VAR_0, "node: {title: \"%d_%d\" info1: \"", VAR_2, VAR_4);
      FUNC_2 (VAR_0, VAR_1->nodes[VAR_2].insn);
      FUNC_1 (VAR_0, "\"}\n");
      for (VAR_3 = VAR_1->nodes[VAR_2].out; VAR_3; VAR_3 = VAR_3->next_out)
 {
   int VAR_5 = FUNC_0 (VAR_3->dest->insn);
   int VAR_6 = VAR_3->dest->cuid;


   if (VAR_3->distance > 0)
     FUNC_1 (VAR_0, "backedge: {color: red ");
   else
     FUNC_1 (VAR_0, "edge: { ");

   FUNC_1 (VAR_0, "sourcename: \"%d_%d\" ", VAR_2, VAR_4);
   FUNC_1 (VAR_0, "targetname: \"%d_%d\" ", VAR_6, VAR_5);
   FUNC_1 (VAR_0, "label: \"%d_%d\"}\n", VAR_3->latency, VAR_3->distance);
 }
    }
  FUNC_1 (VAR_0, "}\n");
}
