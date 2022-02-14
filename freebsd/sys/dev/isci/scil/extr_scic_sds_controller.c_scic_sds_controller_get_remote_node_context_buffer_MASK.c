
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t U16 ;
struct TYPE_3__ {size_t remote_node_entries; scalar_t__* device_table; int * remote_node_context_table; } ;
typedef int SCU_REMOTE_NODE_CONTEXT_T ;
typedef TYPE_1__ SCIC_SDS_CONTROLLER_T ;


 scalar_t__ VAR_0 ;

SCU_REMOTE_NODE_CONTEXT_T *FUNC_0(
   SCIC_SDS_CONTROLLER_T *VAR_1,
   U16 VAR_2
)
{
   if (
           (VAR_2 < VAR_1->remote_node_entries)
        && (VAR_1->device_table[VAR_2] != VAR_0)
      )
   {
      return &VAR_1->remote_node_context_table[VAR_2];
   }

   return ((void*)0);
}
