
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* owning_controller; } ;
struct TYPE_4__ {scalar_t__ logical_port_entries; scalar_t__ task_context_entries; scalar_t__ remote_node_entries; } ;
typedef TYPE_2__ SCIC_SDS_PORT_T ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static
BOOL FUNC_0(
   SCIC_SDS_PORT_T * VAR_2
)
{
   if (
         (
           VAR_2->owning_controller->logical_port_entries
         < VAR_2->owning_controller->task_context_entries
         )
      && (
           VAR_2->owning_controller->logical_port_entries
         < VAR_2->owning_controller->remote_node_entries
         )
      )
   {
      return VAR_1;
   }

   return VAR_0;
}
