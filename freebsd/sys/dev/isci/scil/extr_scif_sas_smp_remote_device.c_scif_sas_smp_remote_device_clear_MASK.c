
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * smp_activity_timer; int * curr_clear_affiliation_phy; scalar_t__ io_retry_count; void* scheduled_activity; int * curr_config_route_destination_smp_phy; int is_route_table_cleaned; int * config_route_smp_phy_anchor; scalar_t__ curr_config_route_index; scalar_t__ current_activity_phy_index; int current_smp_request; void* current_activity; } ;
struct TYPE_8__ {TYPE_2__ smp_device; } ;
struct TYPE_9__ {TYPE_3__ protocol_device; TYPE_1__* domain; } ;
struct TYPE_6__ {int controller; } ;
typedef TYPE_4__ SCIF_SAS_REMOTE_DEVICE_T ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;

void FUNC_2(
   SCIF_SAS_REMOTE_DEVICE_T * VAR_3
)
{


   VAR_3->protocol_device.smp_device.current_activity =
      VAR_2;

   VAR_3->protocol_device.smp_device.current_smp_request =
      VAR_1;

   VAR_3->protocol_device.smp_device.current_activity_phy_index = 0;

   VAR_3->protocol_device.smp_device.curr_config_route_index = 0;

   VAR_3->protocol_device.smp_device.config_route_smp_phy_anchor = ((void*)0);

   VAR_3->protocol_device.smp_device.is_route_table_cleaned = VAR_0;

   VAR_3->protocol_device.smp_device.curr_config_route_destination_smp_phy = ((void*)0);

   VAR_3->protocol_device.smp_device.scheduled_activity =
      VAR_2;

   VAR_3->protocol_device.smp_device.io_retry_count = 0;

   VAR_3->protocol_device.smp_device.curr_clear_affiliation_phy = ((void*)0);

   if (VAR_3->protocol_device.smp_device.smp_activity_timer != ((void*)0))
   {

      FUNC_1(
         VAR_3->domain->controller,
         VAR_3->protocol_device.smp_device.smp_activity_timer
      );


      FUNC_0(
         VAR_3->domain->controller,
         VAR_3->protocol_device.smp_device.smp_activity_timer
      );

      VAR_3->protocol_device.smp_device.smp_activity_timer = ((void*)0);
   }
}
