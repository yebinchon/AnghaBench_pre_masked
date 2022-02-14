
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


struct TYPE_11__ {int sequence; } ;
struct TYPE_14__ {int protocol_complete_handler; int core_object; TYPE_1__ stp; TYPE_5__* device; } ;
struct TYPE_16__ {TYPE_4__ parent; } ;
struct TYPE_12__ {int sati_device; } ;
struct TYPE_13__ {TYPE_2__ stp_device; } ;
struct TYPE_15__ {TYPE_3__ protocol_device; } ;
typedef int SCI_STATUS ;
typedef TYPE_5__ SCIF_SAS_REMOTE_DEVICE_T ;
typedef TYPE_6__ SCIF_SAS_IO_REQUEST_T ;
typedef scalar_t__ SATI_STATUS ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int *,int *,TYPE_6__*,TYPE_6__*) ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (int ) ;
 int VAR_7 ;

SCI_STATUS FUNC_5(
   SCIF_SAS_IO_REQUEST_T * VAR_8
)
{
   SATI_STATUS VAR_9;
   SCI_STATUS VAR_10 = VAR_4;
   SCIF_SAS_REMOTE_DEVICE_T * VAR_11 = VAR_8->parent.device;

   FUNC_1((
      FUNC_3(VAR_8),
      VAR_3,
      "scif_sas_stp_packet_io_request_construct(0x%x) enter\n",
      VAR_8
   ));

   VAR_9 = FUNC_2(
                    &VAR_8->parent.stp.sequence,
                    &VAR_11->protocol_device.stp_device.sati_device,
                    VAR_8,
                    VAR_8
                 );

   if (VAR_9 == VAR_2)
   {

      VAR_10 = FUNC_4(VAR_8->parent.core_object);

      VAR_8->parent.protocol_complete_handler
         = VAR_7;
   }
   else if (VAR_9 == VAR_0)
      VAR_10 = VAR_6;
   else if (VAR_9 == VAR_1)
      VAR_10 = VAR_5;
   else
   {
      FUNC_0((
         FUNC_3(VAR_8),
         VAR_3,
         "Unexpected SAT ATAPI translation failure 0x%x\n",
         VAR_8
      ));
   }

   return VAR_10;
}
