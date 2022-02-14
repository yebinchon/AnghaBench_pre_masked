
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int list_head; } ;
struct TYPE_14__ {scalar_t__ scheduled_activity; scalar_t__ is_able_to_config_others; int curr_config_route_index; TYPE_4__* config_route_smp_phy_anchor; scalar_t__ is_externally_configurable; TYPE_1__ smp_phy_list; TYPE_4__* curr_config_route_destination_smp_phy; } ;
struct TYPE_15__ {TYPE_2__ smp_device; } ;
struct TYPE_17__ {TYPE_3__ protocol_device; } ;
struct TYPE_16__ {int config_route_table_index_anchor; } ;
typedef TYPE_4__ SCIF_SAS_SMP_PHY_T ;
typedef TYPE_5__ SCIF_SAS_REMOTE_DEVICE_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_5__*) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_5__* FUNC_3 (TYPE_5__*) ;
 TYPE_5__* FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_5__*) ;

void FUNC_6(
   SCIF_SAS_REMOTE_DEVICE_T * VAR_4
)
{
   SCIF_SAS_REMOTE_DEVICE_T * VAR_5 = VAR_4;
   SCIF_SAS_REMOTE_DEVICE_T * VAR_6 =
      FUNC_4(VAR_4);

   SCIF_SAS_REMOTE_DEVICE_T * VAR_7 = ((void*)0);

   FUNC_0((
      FUNC_1(VAR_4),
      VAR_1 | VAR_0,
      "scif_sas_smp_remote_device_configure_upstream_expander_route_info(0x%x) enter\n",
      VAR_4
   ));


   while(VAR_6 != ((void*)0) )
   {


      VAR_6->protocol_device.smp_device.curr_config_route_destination_smp_phy =
         (SCIF_SAS_SMP_PHY_T*)FUNC_2(
             VAR_4->protocol_device.smp_device.smp_phy_list.list_head);

      VAR_5 = VAR_6;
      VAR_6 = FUNC_4(VAR_5);
   }



   VAR_7 = VAR_5;

   while ( VAR_7 != ((void*)0)
          && VAR_7 != VAR_4
          && VAR_7->protocol_device.smp_device.scheduled_activity
                == VAR_3
         )
   {
      if (VAR_7->protocol_device.smp_device.is_externally_configurable)
      {
         SCIF_SAS_SMP_PHY_T * VAR_8 =
            VAR_7->protocol_device.smp_device.config_route_smp_phy_anchor;

         VAR_7->protocol_device.smp_device.curr_config_route_index =
            VAR_8->config_route_table_index_anchor;

         if (VAR_7->protocol_device.smp_device.curr_config_route_index != 0)
            VAR_7->protocol_device.smp_device.curr_config_route_index++;

         VAR_7->protocol_device.smp_device.scheduled_activity =
            VAR_2;



         VAR_7 = FUNC_3(
            VAR_7);
      }
      else if (VAR_7->protocol_device.smp_device.is_able_to_config_others)
      {


         SCIF_SAS_REMOTE_DEVICE_T * VAR_9 =
            FUNC_3(
               VAR_7);

         FUNC_5(VAR_7);

         while ( VAR_9 != ((void*)0)
                && VAR_9 != VAR_4 )
         {
            FUNC_5(VAR_9);
            VAR_9 =
               FUNC_3(
                  VAR_7);
         }

         break;
      }
      else
      {


         VAR_7 = FUNC_3(
            VAR_7);
      }
   }
}
