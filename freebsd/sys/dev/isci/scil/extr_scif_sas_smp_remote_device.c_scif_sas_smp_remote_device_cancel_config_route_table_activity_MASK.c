
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {TYPE_1__* curr_config_route_destination_smp_phy; } ;
struct TYPE_12__ {TYPE_2__ smp_device; } ;
struct TYPE_14__ {int is_currently_discovered; int domain; TYPE_3__ protocol_device; } ;
struct TYPE_13__ {int attached_sas_address; } ;
struct TYPE_10__ {int list_element; } ;
typedef int SCI_FAST_LIST_ELEMENT_T ;
typedef TYPE_4__ SCIF_SAS_SMP_PHY_T ;
typedef TYPE_5__ SCIF_SAS_REMOTE_DEVICE_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_5__*) ;
 int * FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (TYPE_5__*,TYPE_4__*) ;

void FUNC_6(
   SCIF_SAS_REMOTE_DEVICE_T * VAR_4
)
{

   SCI_FAST_LIST_ELEMENT_T * VAR_5 =
      &(VAR_4->protocol_device.smp_device.curr_config_route_destination_smp_phy->list_element);
   SCIF_SAS_SMP_PHY_T * VAR_6 = ((void*)0);
   SCIF_SAS_REMOTE_DEVICE_T * VAR_7 = ((void*)0);

   FUNC_0((
      FUNC_1(VAR_4),
      VAR_2 | VAR_1,
      "scif_sas_smp_remote_device_cancel_config_route_table_activity(0x%x) enter\n",
      VAR_4
   ));

   while (VAR_5 != ((void*)0))
   {
      VAR_6 = (SCIF_SAS_SMP_PHY_T*) FUNC_3(VAR_5);
      VAR_5 = FUNC_2(VAR_5);



      if (FUNC_5(
             VAR_4, VAR_6) == VAR_3 )
      {


         VAR_7 = (SCIF_SAS_REMOTE_DEVICE_T *)
            FUNC_4(
               VAR_4->domain, &(VAR_6->attached_sas_address));

         if (VAR_7 != ((void*)0))
            VAR_7->is_currently_discovered = VAR_0;
      }
   }
}
