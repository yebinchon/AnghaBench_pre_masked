
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct edge_list {int num_blocks; int num_edges; } ;
struct TYPE_6__ {int index; } ;
struct TYPE_5__ {int index; } ;
typedef int FILE ;


 TYPE_2__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 TYPE_2__* FUNC_0 (struct edge_list*,int) ;
 TYPE_1__* FUNC_1 (struct edge_list*,int) ;
 int FUNC_2 (int *,char*,...) ;

void
FUNC_3 (FILE *VAR_2, struct edge_list *VAR_3)
{
  int VAR_4;

  FUNC_2 (VAR_2, "Compressed edge list, %d BBs + entry & exit, and %d edges\n",
    VAR_3->num_blocks, VAR_3->num_edges);

  for (VAR_4 = 0; VAR_4 < VAR_3->num_edges; VAR_4++)
    {
      FUNC_2 (VAR_2, " %-4d - edge(", VAR_4);
      if (FUNC_0 (VAR_3, VAR_4) == VAR_0)
 FUNC_2 (VAR_2, "entry,");
      else
 FUNC_2 (VAR_2, "%d,", FUNC_0 (VAR_3, VAR_4)->index);

      if (FUNC_1 (VAR_3, VAR_4) == VAR_1)
 FUNC_2 (VAR_2, "exit)\n");
      else
 FUNC_2 (VAR_2, "%d)\n", FUNC_1 (VAR_3, VAR_4)->index);
    }
}
