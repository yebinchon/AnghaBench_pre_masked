
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int sequence; } ;
struct TYPE_9__ {TYPE_1__ stp; } ;
struct TYPE_10__ {TYPE_2__ parent; } ;
typedef scalar_t__ SCI_STATUS ;
typedef TYPE_3__ SCIF_SAS_TASK_REQUEST_T ;
typedef int SCIF_SAS_REQUEST_T ;
typedef int SCIF_SAS_REMOTE_DEVICE_T ;
typedef int SCIF_SAS_CONTROLLER_T ;
typedef scalar_t__ SATI_STATUS ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_1 (int *,TYPE_3__*,TYPE_3__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static
SCI_STATUS FUNC_5(
   SCIF_SAS_CONTROLLER_T * VAR_8,
   SCIF_SAS_REMOTE_DEVICE_T * VAR_9,
   SCIF_SAS_REQUEST_T * VAR_10,
   SCI_STATUS * VAR_11
)
{

   SCIF_SAS_TASK_REQUEST_T * VAR_12 = (SCIF_SAS_TASK_REQUEST_T *) VAR_10;

   FUNC_0((
      FUNC_2(VAR_8),
      VAR_3,
      "scif_sas_stp_core_cb_task_request_complete_handler(0x%x, 0x%x, 0x%x, 0x%x) enter\n",
      VAR_8, VAR_9, VAR_10, *VAR_11
   ));




   if ( (*VAR_11 == VAR_7)
      || (*VAR_11 == VAR_5) )
   {
      SATI_STATUS VAR_13 = FUNC_1(
                                   &VAR_12->parent.stp.sequence,
                                   VAR_12,
                                   VAR_12
                                );

      if (VAR_13 == VAR_0)
         *VAR_11 = VAR_7;
      else if (VAR_13 == VAR_1)
         *VAR_11 = VAR_5;
      else if (VAR_13 == VAR_2)
      {





         return VAR_4;
      }
      else
      {


         *VAR_11 = VAR_4;
      }
   }
   else
   {
      if (FUNC_4(VAR_12) == VAR_6)
      {
         FUNC_3(
            VAR_9, VAR_12);
      }
   }

   return VAR_7;



}
