
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ curr_config_route_index; scalar_t__ expander_route_indexes; scalar_t__ current_activity_phy_index; scalar_t__ number_of_phys; int current_activity; int is_route_table_cleaned; TYPE_1__* config_route_smp_phy_anchor; } ;
struct TYPE_11__ {TYPE_6__ smp_device; } ;
struct TYPE_13__ {int domain; TYPE_2__ protocol_device; } ;
struct TYPE_12__ {scalar_t__ routing_attribute; scalar_t__ phy_identifier; scalar_t__ config_route_table_index_anchor; } ;
struct TYPE_10__ {scalar_t__ phy_identifier; } ;
typedef TYPE_3__ SCIF_SAS_SMP_PHY_T ;
typedef TYPE_4__ SCIF_SAS_REMOTE_DEVICE_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_4__*) ;
 TYPE_3__* FUNC_4 (scalar_t__,TYPE_6__*) ;

void FUNC_5(
   SCIF_SAS_REMOTE_DEVICE_T * VAR_5
)
{
   SCIF_SAS_SMP_PHY_T * VAR_6;

   FUNC_0((
      FUNC_1(VAR_5),
      VAR_1 | VAR_0,
      "scif_sas_smp_remote_device_clean_route_table(0x%x) enter\n",
      VAR_5
   ));


   VAR_5->protocol_device.smp_device.curr_config_route_index++;

   if ( VAR_5->protocol_device.smp_device.curr_config_route_index >=
           VAR_5->protocol_device.smp_device.expander_route_indexes )
   {
      VAR_5->protocol_device.smp_device.curr_config_route_index = 0;

      do
      {
         VAR_5->protocol_device.smp_device.current_activity_phy_index++;
         if (VAR_5->protocol_device.smp_device.current_activity_phy_index ==
                VAR_5->protocol_device.smp_device.number_of_phys)
            VAR_5->protocol_device.smp_device.current_activity_phy_index=0;


         VAR_6 =
            FUNC_4(
               VAR_5->protocol_device.smp_device.current_activity_phy_index,
               &(VAR_5->protocol_device.smp_device)
            );
      } while( VAR_6->routing_attribute != VAR_3 );

      if ( VAR_6->phy_identifier !=
              VAR_5->protocol_device.smp_device.config_route_smp_phy_anchor->phy_identifier)
      {
         if (VAR_6->config_route_table_index_anchor != 0)
            VAR_5->protocol_device.smp_device.curr_config_route_index =
               VAR_6->config_route_table_index_anchor + 1;
         else
            VAR_5->protocol_device.smp_device.curr_config_route_index = 0;
      }
   }

   if ( !(VAR_5->protocol_device.smp_device.current_activity_phy_index ==
             VAR_5->protocol_device.smp_device.config_route_smp_phy_anchor->phy_identifier
          && VAR_5->protocol_device.smp_device.curr_config_route_index == 0)
      )
   {

      FUNC_3(VAR_5);
   }
   else
   {
      VAR_5->protocol_device.smp_device.is_route_table_cleaned = VAR_4;


      VAR_5->protocol_device.smp_device.current_activity =
         VAR_2;



      FUNC_2(VAR_5->domain);
   }
}
