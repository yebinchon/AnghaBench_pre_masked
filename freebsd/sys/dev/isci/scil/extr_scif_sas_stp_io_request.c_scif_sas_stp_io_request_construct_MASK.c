
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_19__ {int do_translate_sgl; } ;
struct TYPE_13__ {int sequence; } ;
struct TYPE_16__ {void* protocol_complete_handler; int * state_handlers; int core_object; TYPE_1__ stp; TYPE_5__* device; } ;
struct TYPE_18__ {TYPE_4__ parent; } ;
struct TYPE_14__ {int sati_device; } ;
struct TYPE_15__ {TYPE_2__ stp_device; } ;
struct TYPE_17__ {TYPE_3__ protocol_device; } ;
typedef int SCI_STATUS ;
typedef TYPE_5__ SCIF_SAS_REMOTE_DEVICE_T ;
typedef TYPE_6__ SCIF_SAS_IO_REQUEST_T ;
typedef TYPE_7__ SCIC_IO_SATA_PARAMETERS_T ;
typedef scalar_t__ SATI_STATUS ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (int *,int *,TYPE_6__*,TYPE_6__*) ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (int ,TYPE_7__*) ;
 int FUNC_5 (int ) ;
 void* VAR_10 ;
 int VAR_11 ;

SCI_STATUS FUNC_6(
   SCIF_SAS_IO_REQUEST_T * VAR_12
)
{
   SATI_STATUS VAR_13;
   SCI_STATUS VAR_14 = VAR_6;
   SCIF_SAS_REMOTE_DEVICE_T * VAR_15 = VAR_12->parent.device;

   FUNC_1((
      FUNC_3(VAR_12),
      VAR_5,
      "scif_sas_stp_io_request_construct(0x%x) enter\n",
      VAR_12
   ));



   VAR_13 = FUNC_2(
                    &VAR_12->parent.stp.sequence,
                    &VAR_15->protocol_device.stp_device.sati_device,
                    VAR_12,
                    VAR_12
                 );

   if (VAR_13 == VAR_3)
   {

      VAR_14 = FUNC_5(VAR_12->parent.core_object);
      VAR_12->parent.state_handlers = &VAR_11;
      VAR_12->parent.protocol_complete_handler
         = VAR_10;
   }
   else if (VAR_13 == VAR_4)
   {
      SCIC_IO_SATA_PARAMETERS_T VAR_16;
      VAR_16.do_translate_sgl = VAR_0;




      FUNC_4(
                      VAR_12->parent.core_object, &VAR_16
                   );
      VAR_12->parent.state_handlers = &VAR_11;
      VAR_12->parent.protocol_complete_handler
         = VAR_10;

      VAR_14 = VAR_8;
   }
   else if (VAR_13 == VAR_1)
      VAR_14 = VAR_9;
   else if (VAR_13 == VAR_2)
      VAR_14 = VAR_7;
   else
   {
      FUNC_0((
         FUNC_3(VAR_12),
         VAR_5,
         "Unexpected SAT translation failure 0x%x\n",
         VAR_12
      ));
   }

   return VAR_14;
}
