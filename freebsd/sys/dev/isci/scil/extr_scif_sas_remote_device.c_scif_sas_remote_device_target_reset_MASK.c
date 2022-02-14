
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ current_activity; } ;
struct TYPE_9__ {TYPE_1__ smp_device; } ;
struct TYPE_11__ {TYPE_2__ protocol_device; } ;
struct TYPE_10__ {int core_object; TYPE_4__* containing_device; int * ea_target_reset_request_scheduled; int domain; } ;
typedef int SCI_PORT_HANDLE_T ;
typedef int SCIF_SAS_REQUEST_T ;
typedef TYPE_3__ SCIF_SAS_REMOTE_DEVICE_T ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_4__*,TYPE_3__*,int *) ;

void FUNC_7(
   SCIF_SAS_REMOTE_DEVICE_T * VAR_2,
   SCIF_SAS_REQUEST_T * VAR_3
)
{
   FUNC_0(*(
      FUNC_1(VAR_2),
      VAR_0,
      "scif_sas_remote_device_target_reset! fw_device:0x%x fw_request:0x%x\n",
      VAR_2, VAR_3
   ));

   if (VAR_2->containing_device == ((void*)0))
   {
      SCI_PORT_HANDLE_T VAR_4;

      VAR_4 = FUNC_5(VAR_2->domain);



      FUNC_2(
         VAR_4,
         FUNC_3(VAR_2->core_object)
      );
   }
   else
   {

      if ( VAR_2->containing_device->protocol_device.smp_device.current_activity
              == VAR_1 )
      {


         FUNC_0(*(
            FUNC_1(VAR_2),
            VAR_0,
            "scif_sas_remote_device_target_reset DELAYED! fw_device:0x%x fw_request:0x%x\n",
            VAR_2, VAR_3
         ));

         VAR_2->ea_target_reset_request_scheduled = VAR_3;
         return;
      }


      FUNC_6(
         VAR_2->containing_device, VAR_2, VAR_3);
   }

   FUNC_4(VAR_2->core_object);
}
