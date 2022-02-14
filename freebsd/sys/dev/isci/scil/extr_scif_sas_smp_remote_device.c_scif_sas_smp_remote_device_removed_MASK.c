
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int * list_head; } ;
struct TYPE_10__ {void* is_able_to_config_others; void* is_externally_configurable; void* is_table_to_table_supported; scalar_t__ expander_route_indexes; scalar_t__ number_of_phys; TYPE_1__ smp_phy_list; } ;
struct TYPE_9__ {TYPE_3__ smp_device; } ;
struct TYPE_11__ {TYPE_2__ protocol_device; } ;
typedef int SCI_FAST_LIST_ELEMENT_T ;
typedef TYPE_3__ SCIF_SAS_SMP_REMOTE_DEVICE_T ;
typedef int SCIF_SAS_SMP_PHY_T ;
typedef TYPE_4__ SCIF_SAS_REMOTE_DEVICE_T ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*) ;
 int * FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_4__*) ;

void FUNC_6(
   SCIF_SAS_REMOTE_DEVICE_T * VAR_3
)
{
   SCIF_SAS_SMP_REMOTE_DEVICE_T * VAR_4 =
      &VAR_3->protocol_device.smp_device;

   SCI_FAST_LIST_ELEMENT_T * VAR_5 = VAR_4->smp_phy_list.list_head;
   SCIF_SAS_SMP_PHY_T * VAR_6 = ((void*)0);

   FUNC_0((
      FUNC_1(VAR_3),
      VAR_2 | VAR_1,
      "scif_sas_smp_remote_device_removed(0x%x) enter\n",
      VAR_3
   ));



   while (VAR_5 != ((void*)0))
   {
      VAR_6 = (SCIF_SAS_SMP_PHY_T*) FUNC_3(VAR_5);
      VAR_5 = FUNC_2(VAR_5);

      FUNC_4(VAR_6);
   }

   VAR_3->protocol_device.smp_device.number_of_phys = 0;
   VAR_3->protocol_device.smp_device.expander_route_indexes = 0;
   VAR_3->protocol_device.smp_device.is_table_to_table_supported = VAR_0;
   VAR_3->protocol_device.smp_device.is_externally_configurable = VAR_0;
   VAR_3->protocol_device.smp_device.is_able_to_config_others = VAR_0;

   FUNC_5(VAR_3);
}
