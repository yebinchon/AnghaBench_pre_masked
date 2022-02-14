
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ddg_edge {int dummy; } ;
typedef int dep_type ;
typedef int dep_data_type ;
typedef void* ddg_node_ptr ;
typedef TYPE_2__* ddg_edge_ptr ;
struct TYPE_4__ {scalar_t__ info; } ;
struct TYPE_5__ {int latency; int distance; TYPE_1__ aux; int * next_out; int next_in; int data_type; int type; void* dest; void* src; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static ddg_edge_ptr
FUNC_1 (ddg_node_ptr VAR_0, ddg_node_ptr VAR_1,
   dep_type VAR_2, dep_data_type VAR_3, int VAR_4, int VAR_5)
{
  ddg_edge_ptr VAR_6 = (ddg_edge_ptr) FUNC_0 (sizeof (struct ddg_edge));

  VAR_6->src = VAR_0;
  VAR_6->dest = VAR_1;
  VAR_6->type = VAR_2;
  VAR_6->data_type = VAR_3;
  VAR_6->latency = VAR_4;
  VAR_6->distance = VAR_5;
  VAR_6->next_in = *(VAR_6->next_out = ((void*)0));
  VAR_6->aux.info = 0;
  return VAR_6;
}
