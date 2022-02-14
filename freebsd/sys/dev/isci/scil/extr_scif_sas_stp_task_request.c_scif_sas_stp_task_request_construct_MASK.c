
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int sati_device; } ;
struct TYPE_13__ {TYPE_2__ stp_device; } ;
struct TYPE_16__ {TYPE_3__ protocol_device; } ;
struct TYPE_11__ {int sequence; } ;
struct TYPE_14__ {int protocol_complete_handler; int core_object; TYPE_1__ stp; TYPE_6__* device; } ;
struct TYPE_15__ {TYPE_4__ parent; } ;
typedef int SCI_STATUS ;
typedef TYPE_5__ SCIF_SAS_TASK_REQUEST_T ;
typedef TYPE_6__ SCIF_SAS_REMOTE_DEVICE_T ;
typedef scalar_t__ SATI_STATUS ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int *,int *,TYPE_5__*,TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (int ) ;
 int VAR_3 ;

SCI_STATUS FUNC_5(
   SCIF_SAS_TASK_REQUEST_T * VAR_4
)
{
   SCI_STATUS VAR_5 = VAR_2;


   SATI_STATUS VAR_6;
   SCIF_SAS_REMOTE_DEVICE_T * VAR_7 = VAR_4->parent.device;

   FUNC_1((
      FUNC_3(VAR_4),
      VAR_1,
      "scif_sas_stp_task_request_construct(0x%x) enter\n",
      VAR_4
   ));



   VAR_6 = FUNC_2(
                    &VAR_4->parent.stp.sequence,
                    &VAR_7->protocol_device.stp_device.sati_device,
                    VAR_4,
                    VAR_4
                 );

   if (VAR_6 == VAR_0)
   {
      VAR_5 = FUNC_4(VAR_4->parent.core_object);

      VAR_4->parent.protocol_complete_handler =
         VAR_3;
   }
   else
   {
      FUNC_0((
         FUNC_3(VAR_4),
         VAR_1,
         "Task 0x%x received unexpected SAT translation failure 0x%x\n",
         VAR_4, VAR_6
      ));
   }


   return VAR_5;
}
