
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int curr_config_route_index; int current_activity_phy_index; } ;
struct TYPE_11__ {TYPE_4__ smp_device; } ;
struct TYPE_14__ {TYPE_1__* domain; TYPE_2__ protocol_device; } ;
struct TYPE_12__ {scalar_t__ low; scalar_t__ high; } ;
struct TYPE_10__ {int controller; } ;
typedef TYPE_3__ SCI_SAS_ADDRESS_T ;
typedef TYPE_4__ SCIF_SAS_SMP_REMOTE_DEVICE_T ;
typedef TYPE_5__ SCIF_SAS_REMOTE_DEVICE_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_3 (int ,TYPE_5__*,int ,int ,TYPE_3__,int ) ;

void FUNC_4(
   SCIF_SAS_REMOTE_DEVICE_T * VAR_4
)
{
   SCI_SAS_ADDRESS_T VAR_5;
   SCIF_SAS_SMP_REMOTE_DEVICE_T * VAR_6 =
      &(VAR_4->protocol_device.smp_device);

   FUNC_0((
      FUNC_1(VAR_4),
      VAR_1 | VAR_0,
      "scif_sas_smp_remote_device_clean_route_table(0x%x) enter\n",
      VAR_4
   ));

   VAR_5.high = 0;
   VAR_5.low = 0;

   FUNC_3(
      VAR_4->domain->controller,
      VAR_4,
      VAR_6->current_activity_phy_index,
      VAR_6->curr_config_route_index,
      VAR_5,
      VAR_2
   );


   FUNC_2(
      VAR_4->domain->controller,
      VAR_3,
      VAR_4->domain->controller
   );
}
