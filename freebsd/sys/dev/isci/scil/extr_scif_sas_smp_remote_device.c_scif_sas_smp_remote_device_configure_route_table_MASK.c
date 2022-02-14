
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int curr_config_route_index; int current_activity_phy_index; TYPE_4__* curr_config_route_destination_smp_phy; int current_activity; } ;
struct TYPE_11__ {TYPE_3__ smp_device; } ;
struct TYPE_15__ {TYPE_2__* domain; TYPE_1__ protocol_device; } ;
struct TYPE_14__ {int attached_sas_address; int list_element; } ;
struct TYPE_12__ {int controller; } ;
typedef int SCI_FAST_LIST_ELEMENT_T ;
typedef TYPE_3__ SCIF_SAS_SMP_REMOTE_DEVICE_T ;
typedef TYPE_4__ SCIF_SAS_SMP_PHY_T ;
typedef TYPE_5__ SCIF_SAS_REMOTE_DEVICE_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (TYPE_5__*) ;
 int * FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_6 (int ,TYPE_5__*,int ,int ,int ,int ) ;

void FUNC_7(
   SCIF_SAS_REMOTE_DEVICE_T * VAR_6
)
{

   SCI_FAST_LIST_ELEMENT_T * VAR_7 =
      &(VAR_6->protocol_device.smp_device.curr_config_route_destination_smp_phy->list_element);
   SCIF_SAS_SMP_PHY_T * VAR_8 = ((void*)0);

   FUNC_0((
      FUNC_1(VAR_6),
      VAR_2 | VAR_1,
      "scif_sas_smp_remote_device_configure_route_table(0x%x) enter\n",
      VAR_6
   ));

   VAR_6->protocol_device.smp_device.current_activity =
      VAR_3;

   while (VAR_7 != ((void*)0))
   {
      VAR_8 = (SCIF_SAS_SMP_PHY_T*) FUNC_3(VAR_7);
      VAR_7 = FUNC_2(VAR_7);


      if (FUNC_5(
             VAR_6, VAR_8) == VAR_4 )
      {
         SCIF_SAS_SMP_REMOTE_DEVICE_T * VAR_9 =
            &VAR_6->protocol_device.smp_device;

         VAR_9->curr_config_route_destination_smp_phy =
            VAR_8;



         FUNC_6(
            VAR_6->domain->controller,
            VAR_6,
            VAR_9->current_activity_phy_index,
            VAR_9->curr_config_route_index,
            VAR_8->attached_sas_address,
            VAR_0
         );


         FUNC_4(
            VAR_6->domain->controller,
            VAR_5,
            VAR_6->domain->controller
         );



         break;
      }
   }
}
