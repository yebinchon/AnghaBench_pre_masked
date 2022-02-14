
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int current_smp_request; } ;
struct TYPE_9__ {TYPE_1__ smp_device; } ;
struct TYPE_10__ {TYPE_2__ protocol_device; } ;
typedef TYPE_3__ SCIF_SAS_REMOTE_DEVICE_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;




 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;

void FUNC_4(
   SCIF_SAS_REMOTE_DEVICE_T * VAR_2
)
{
   FUNC_0((
      FUNC_1(VAR_2),
      VAR_1 | VAR_0,
      "scif_sas_smp_remote_device_fail_discover(0x%x) enter\n",
      VAR_2
   ));

   switch (VAR_2->protocol_device.smp_device.current_smp_request)
   {
      case 130:
      case 129:
         FUNC_3(VAR_2);
         break;

      case 131:
      case 128:

         VAR_2->protocol_device.smp_device.current_smp_request =
            131;

         FUNC_2(VAR_2);
         break;

      default:
         break;
   }
}
