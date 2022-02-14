
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int smp_phy_list; void* is_able_to_config_others; void* is_externally_configurable; void* is_table_to_table_supported; scalar_t__ expander_route_indexes; scalar_t__ number_of_phys; } ;
struct TYPE_8__ {TYPE_1__ smp_device; } ;
struct TYPE_9__ {TYPE_2__ protocol_device; } ;
typedef TYPE_3__ SCIF_SAS_REMOTE_DEVICE_T ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_3__*) ;

void FUNC_4(
   SCIF_SAS_REMOTE_DEVICE_T * VAR_2
)
{
   FUNC_0((
      FUNC_1(VAR_2),
      VAR_1,
      "scif_sas_smp_remote_device_construct(0x%x) enter\n",
      VAR_2
   ));

   VAR_2->protocol_device.smp_device.number_of_phys = 0;
   VAR_2->protocol_device.smp_device.expander_route_indexes = 0;
   VAR_2->protocol_device.smp_device.is_table_to_table_supported = VAR_0;
   VAR_2->protocol_device.smp_device.is_externally_configurable = VAR_0;
   VAR_2->protocol_device.smp_device.is_able_to_config_others = VAR_0;

   FUNC_2(&VAR_2->protocol_device.smp_device.smp_phy_list);

   FUNC_3(VAR_2);
}
