
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int current_activity_phy_index; } ;
struct TYPE_10__ {TYPE_1__ smp_device; } ;
struct TYPE_11__ {TYPE_2__ protocol_device; int domain; } ;
typedef int SCIF_SAS_REQUEST_T ;
typedef TYPE_3__ SCIF_SAS_REMOTE_DEVICE_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*) ;
 TYPE_3__* FUNC_2 (int ,TYPE_3__*,int ) ;
 int FUNC_3 (TYPE_3__*,int *,int ) ;

void FUNC_4(
   SCIF_SAS_REMOTE_DEVICE_T * VAR_3,
   SCIF_SAS_REQUEST_T * VAR_4
)
{
   SCIF_SAS_REMOTE_DEVICE_T * VAR_5 =
      FUNC_2(
         VAR_3->domain,
         VAR_3,
         VAR_3->protocol_device.smp_device.current_activity_phy_index
      );

   FUNC_0(*(
      FUNC_1(VAR_3),
      VAR_1 | VAR_0,
      "scif_sas_smp_remote_device_fail_target_reset(0x%x, 0x%x, 0x%x) enter\n",
      VAR_3, VAR_5, VAR_4
   ));


   FUNC_3(
      VAR_5, VAR_4, VAR_2);
}
