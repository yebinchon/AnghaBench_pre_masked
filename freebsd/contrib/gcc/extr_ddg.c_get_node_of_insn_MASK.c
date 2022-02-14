
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ rtx ;
typedef TYPE_1__* ddg_ptr ;
typedef TYPE_2__* ddg_node_ptr ;
struct TYPE_6__ {scalar_t__ insn; } ;
struct TYPE_5__ {int num_nodes; TYPE_2__* nodes; } ;



ddg_node_ptr
FUNC_0 (ddg_ptr VAR_0, rtx VAR_1)
{
  int VAR_2;

  for (VAR_2 = 0; VAR_2 < VAR_0->num_nodes; VAR_2++)
    if (VAR_1 == VAR_0->nodes[VAR_2].insn)
      return &VAR_0->nodes[VAR_2];
  return ((void*)0);
}
