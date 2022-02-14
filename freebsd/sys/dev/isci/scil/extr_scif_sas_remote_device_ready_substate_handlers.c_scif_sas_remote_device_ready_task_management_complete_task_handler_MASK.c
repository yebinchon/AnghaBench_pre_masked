
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ task_request_count; int ready_substate_machine; int request_count; } ;
struct TYPE_3__ {scalar_t__ affected_request_count; } ;
typedef int SCI_STATUS ;
typedef int SCI_BASE_REQUEST_T ;
typedef int SCI_BASE_REMOTE_DEVICE_T ;
typedef TYPE_1__ SCIF_SAS_TASK_REQUEST_T ;
typedef TYPE_2__ SCIF_SAS_REMOTE_DEVICE_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;

SCI_STATUS FUNC_1(
   SCI_BASE_REMOTE_DEVICE_T * VAR_2,
   SCI_BASE_REQUEST_T * VAR_3
)
{
   SCIF_SAS_REMOTE_DEVICE_T * VAR_4 = (SCIF_SAS_REMOTE_DEVICE_T*)
                                          VAR_2;

   SCIF_SAS_TASK_REQUEST_T * VAR_5 = (SCIF_SAS_TASK_REQUEST_T *)
                                       VAR_3;

   VAR_4->request_count--;
   VAR_4->task_request_count--;





   if ( (VAR_4->task_request_count == 0)
      && (VAR_5->affected_request_count == 0) )
   {
      FUNC_0(
         &VAR_4->ready_substate_machine,
         VAR_0
      );
   }

   return VAR_1;
}
