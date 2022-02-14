
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_17__ {scalar_t__ protocol; } ;
struct TYPE_13__ {TYPE_6__ sequence; int ncq_tag; } ;
struct TYPE_14__ {TYPE_1__ stp; } ;
struct TYPE_16__ {TYPE_2__ parent; } ;
struct TYPE_15__ {int device; } ;
typedef scalar_t__ SCI_STATUS ;
typedef TYPE_3__ SCIF_SAS_REQUEST_T ;
typedef int SCIF_SAS_REMOTE_DEVICE_T ;
typedef TYPE_4__ SCIF_SAS_IO_REQUEST_T ;
typedef int SCIF_SAS_CONTROLLER_T ;
typedef scalar_t__ SATI_STATUS ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_6__*,TYPE_4__*,TYPE_4__*) ;
 scalar_t__ FUNC_4 (TYPE_6__*,TYPE_4__*,TYPE_4__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static
SCI_STATUS FUNC_7(
   SCIF_SAS_CONTROLLER_T * VAR_12,
   SCIF_SAS_REMOTE_DEVICE_T * VAR_13,
   SCIF_SAS_REQUEST_T * VAR_14,
   SCI_STATUS * VAR_15
)
{
   SCIF_SAS_IO_REQUEST_T * VAR_16 = (SCIF_SAS_IO_REQUEST_T *) VAR_14;

   FUNC_1((
      FUNC_5(VAR_12),
      VAR_5,
      "scif_sas_stp_core_cb_io_request_complete_handler(0x%x, 0x%x, 0x%x, 0x%x) enter\n",
      VAR_12, VAR_13, VAR_14, *VAR_15
   ));

   if (VAR_16->parent.stp.sequence.protocol == VAR_4)
      FUNC_6(
         VAR_14->device, VAR_16->parent.stp.ncq_tag
      );
   if ((*VAR_15 == VAR_7) ||
       ((FUNC_2(VAR_14)) &&
        (*VAR_15 != VAR_8)))
   {
      SATI_STATUS VAR_17 = FUNC_4(
                                   &VAR_16->parent.stp.sequence, VAR_16, VAR_16
                                );
      if (VAR_17 == VAR_0)
         *VAR_15 = VAR_9;
      else if (VAR_17 == VAR_2)
         *VAR_15 = VAR_7;
      else if (VAR_17 == VAR_3)
      {




         return VAR_11;
      }
      else if (VAR_17 == VAR_1)
         *VAR_15 = VAR_10;
      else
      {


         *VAR_15 = VAR_6;
      }
   }
   else if (*VAR_15 != VAR_9)
   {
      FUNC_0((
         FUNC_5(VAR_12),
         VAR_5,
         "Sequence Terminated(0x%x, 0x%x, 0x%x)\n",
         VAR_12, VAR_13, VAR_14
      ));

      FUNC_3(&VAR_16->parent.stp.sequence, VAR_16, VAR_16);
   }

   return VAR_9;
}
