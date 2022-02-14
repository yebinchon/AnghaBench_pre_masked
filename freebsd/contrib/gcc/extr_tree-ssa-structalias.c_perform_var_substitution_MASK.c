
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct scc_info {unsigned int* node_mapping; int visited; } ;
typedef TYPE_1__* constraint_graph_t ;
struct TYPE_9__ {char* name; } ;
struct TYPE_8__ {int nonpointer_vars; } ;
struct TYPE_7__ {unsigned int size; int* label; int direct_nodes; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,unsigned int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (scalar_t__,char*,char*,...) ;
 TYPE_5__* FUNC_4 (unsigned int) ;
 struct scc_info* FUNC_5 (unsigned int) ;
 int VAR_6 ;
 int FUNC_6 (TYPE_1__*,struct scc_info*,unsigned int) ;
 TYPE_2__ VAR_7 ;

__attribute__((used)) static struct scc_info *
FUNC_7 (constraint_graph_t VAR_8)
{
  unsigned int VAR_9;
  unsigned int VAR_10 = VAR_8->size;
  struct scc_info *VAR_11 = FUNC_5 (VAR_10);

  FUNC_1 (&VAR_6);
  VAR_5 = 0;




  for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++)
    if (!FUNC_0 (VAR_11->visited, VAR_11->node_mapping[VAR_9]))
      FUNC_6 (VAR_8, VAR_11, VAR_11->node_mapping[VAR_9]);

  if (VAR_3 && (VAR_4 & VAR_2))
    for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++)
      {
 bool VAR_12 = FUNC_0 (VAR_8->direct_nodes, VAR_9);
 FUNC_3 (VAR_3,
   "Equivalence class for %s node id %d:%s is %d\n",
   VAR_12 ? "Direct node" : "Indirect node", VAR_9,
   FUNC_4 (VAR_9)->name,
   VAR_8->label[VAR_11->node_mapping[VAR_9]]);
      }



  for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++)
    {
      unsigned int VAR_13 = VAR_11->node_mapping[VAR_9];

      if (VAR_8->label[VAR_13] == 0 && FUNC_0 (VAR_8->direct_nodes, VAR_13))
 {
   if (VAR_3 && (VAR_4 & VAR_2))
     FUNC_3 (VAR_3,
       "%s is a non-pointer variable, eliminating edges.\n",
       FUNC_4 (VAR_13)->name);
   VAR_7.nonpointer_vars++;
   FUNC_2 (VAR_8, VAR_13);
 }
    }
  return VAR_11;
}
