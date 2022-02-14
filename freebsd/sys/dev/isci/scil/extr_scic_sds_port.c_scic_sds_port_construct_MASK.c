
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int U8 ;
typedef size_t U32 ;
struct TYPE_7__ {int parent; } ;
struct TYPE_6__ {int ** phy_table; int * port_task_scheduler_registers; int timer_handle; void* reserved_tci; void* reserved_rni; scalar_t__ assigned_device_count; scalar_t__ started_request_count; int * owning_controller; scalar_t__ enabled_phy_mask; scalar_t__ active_phy_mask; int physical_port_index; int logical_port_index; TYPE_5__ parent; } ;
typedef TYPE_1__ SCIC_SDS_PORT_T ;
typedef int SCIC_SDS_CONTROLLER_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_5__*,int ,int ) ;
 int FUNC_2 (int ,int *,int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_5 ;
 int VAR_6 ;

void FUNC_5(
   SCIC_SDS_PORT_T *VAR_7,
   U8 VAR_8,
   SCIC_SDS_CONTROLLER_T *VAR_9
)
{
   U32 VAR_10;

   FUNC_1(
      &VAR_7->parent,
      FUNC_0(VAR_9),
      VAR_6
   );

   FUNC_2(
      FUNC_3(VAR_7),
      &VAR_7->parent.parent,
      VAR_5,
      VAR_1
   );

   FUNC_4(VAR_7);

   VAR_7->logical_port_index = VAR_0;
   VAR_7->physical_port_index = VAR_8;
   VAR_7->active_phy_mask = 0;
   VAR_7->enabled_phy_mask = 0;
   VAR_7->owning_controller = VAR_9;

   VAR_7->started_request_count = 0;
   VAR_7->assigned_device_count = 0;

   VAR_7->reserved_rni = VAR_4;
   VAR_7->reserved_tci = VAR_4;

   VAR_7->timer_handle = VAR_2;

   VAR_7->port_task_scheduler_registers = ((void*)0);

   for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++)
   {
      VAR_7->phy_table[VAR_10] = ((void*)0);
   }
}
