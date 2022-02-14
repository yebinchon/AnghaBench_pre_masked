
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_25__ {int phy_identifier; } ;
struct TYPE_18__ {int * list_head; } ;
struct TYPE_22__ {TYPE_9__* config_route_smp_phy_anchor; int current_activity_phy_index; int current_smp_request; TYPE_1__ smp_phy_list; } ;
struct TYPE_21__ {TYPE_5__ smp_device; } ;
struct TYPE_24__ {TYPE_4__ protocol_device; } ;
struct TYPE_20__ {TYPE_2__* attached_phy; } ;
struct TYPE_23__ {scalar_t__ routing_attribute; scalar_t__ attached_device_type; TYPE_3__ u; } ;
struct TYPE_19__ {scalar_t__ routing_attribute; TYPE_7__* owning_device; int phy_identifier; } ;
typedef int SCI_FAST_LIST_ELEMENT_T ;
typedef TYPE_5__ SCIF_SAS_SMP_REMOTE_DEVICE_T ;
typedef TYPE_6__ SCIF_SAS_SMP_PHY_T ;
typedef TYPE_7__ SCIF_SAS_REMOTE_DEVICE_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (TYPE_7__*) ;
 int * FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 TYPE_9__* FUNC_4 (TYPE_9__*) ;
 TYPE_9__* FUNC_5 (TYPE_9__*) ;
 TYPE_9__* FUNC_6 (int ,TYPE_5__*) ;
 scalar_t__ FUNC_7 (TYPE_7__*) ;

SCIF_SAS_REMOTE_DEVICE_T * FUNC_8(
   SCIF_SAS_REMOTE_DEVICE_T * VAR_9
)
{
   SCIF_SAS_SMP_REMOTE_DEVICE_T * VAR_10 =
      &VAR_9->protocol_device.smp_device;

   SCIF_SAS_REMOTE_DEVICE_T * VAR_11 = ((void*)0);

   SCI_FAST_LIST_ELEMENT_T * VAR_12 = VAR_10->smp_phy_list.list_head;
   SCIF_SAS_SMP_PHY_T * VAR_13 = ((void*)0);

   FUNC_0((
      FUNC_1(VAR_9),
      VAR_1 | VAR_0,
      "scif_sas_smp_remote_device_configure_upstream_expander_route_info(0x%x) enter\n",
      VAR_9
   ));

   while (VAR_12 != ((void*)0))
   {
      VAR_13 = (SCIF_SAS_SMP_PHY_T*) FUNC_3(VAR_12);
      VAR_12 = FUNC_2(VAR_12);

      if ( VAR_13->routing_attribute == VAR_7
          && ( VAR_13->attached_device_type == VAR_4
              || VAR_13->attached_device_type == VAR_5)
          && VAR_13->u.attached_phy != ((void*)0)
          && VAR_13->u.attached_phy->routing_attribute == VAR_8 )
      {


         VAR_11 = VAR_13->u.attached_phy->owning_device;

         VAR_11->protocol_device.smp_device.current_smp_request =
            VAR_6;



         VAR_11->protocol_device.smp_device.config_route_smp_phy_anchor =
            FUNC_6(
               VAR_13->u.attached_phy->phy_identifier,
               &(VAR_13->u.attached_phy->owning_device->protocol_device.smp_device)
            );



         if ( FUNC_7(VAR_11)
                 == VAR_3 )
         {
            VAR_11->protocol_device.smp_device.config_route_smp_phy_anchor =
               FUNC_5 (
                  VAR_11->protocol_device.smp_device.config_route_smp_phy_anchor
               );
         }
         else if ( FUNC_7(VAR_11)
                      == VAR_2 )
         {
            VAR_11->protocol_device.smp_device.config_route_smp_phy_anchor =
               FUNC_4 (
                  VAR_11->protocol_device.smp_device.config_route_smp_phy_anchor
               );
         }

         VAR_11->protocol_device.smp_device.current_activity_phy_index =
            VAR_11->protocol_device.smp_device.config_route_smp_phy_anchor->phy_identifier;

         return VAR_11;
      }
   }

   return ((void*)0);
}
