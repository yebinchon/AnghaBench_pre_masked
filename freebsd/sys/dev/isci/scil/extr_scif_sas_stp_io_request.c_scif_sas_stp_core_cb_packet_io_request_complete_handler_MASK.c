
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {int sequence; } ;
struct TYPE_15__ {TYPE_3__ stp; } ;
struct TYPE_17__ {TYPE_4__ parent; } ;
struct TYPE_12__ {scalar_t__ state; } ;
struct TYPE_13__ {TYPE_1__ sequence; } ;
struct TYPE_16__ {TYPE_2__ stp; } ;
typedef scalar_t__ SCI_STATUS ;
typedef TYPE_5__ SCIF_SAS_REQUEST_T ;
typedef int SCIF_SAS_REMOTE_DEVICE_T ;
typedef TYPE_6__ SCIF_SAS_IO_REQUEST_T ;
typedef int SCIF_SAS_CONTROLLER_T ;
typedef scalar_t__ SATI_STATUS ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_1 (int *,TYPE_6__*,TYPE_6__*) ;
 int FUNC_2 (int *,TYPE_6__*,TYPE_6__*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static
SCI_STATUS FUNC_4(
   SCIF_SAS_CONTROLLER_T * VAR_9,
   SCIF_SAS_REMOTE_DEVICE_T * VAR_10,
   SCIF_SAS_REQUEST_T * VAR_11,
   SCI_STATUS * VAR_12
)
{
   SCIF_SAS_IO_REQUEST_T * VAR_13 = (SCIF_SAS_IO_REQUEST_T *) VAR_11;
   SATI_STATUS VAR_14;

   FUNC_0((
      FUNC_3(VAR_9),
      VAR_4,
      "scif_sas_stp_packet_core_cb_io_request_complete_handler(0x%x, 0x%x, 0x%x, 0x%x) enter\n",
      VAR_9, VAR_10, VAR_11, *VAR_12
   ));

   if (*VAR_12 == VAR_6)
   {
      VAR_14 = FUNC_1(
                       &VAR_13->parent.stp.sequence, VAR_13, VAR_13
                    );

      if (VAR_14 == VAR_0)
         *VAR_12 = VAR_7;
      else if (VAR_14 == VAR_1)
         *VAR_12 = VAR_6;
      else if (VAR_14 == VAR_2)
      {



         return VAR_8;
      }
      else
      {


         *VAR_12 = VAR_5;
      }
   }
   else if (*VAR_12 == VAR_7 &&
        VAR_11->stp.sequence.state == VAR_3)
   {

      FUNC_2(
         &VAR_13->parent.stp.sequence, VAR_13, VAR_13
      );

      *VAR_12 = VAR_6;
   }

   return VAR_7;
}
