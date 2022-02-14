
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ current_state_id; } ;
struct TYPE_4__ {int task_request_count; int request_count; TYPE_3__ ready_substate_machine; } ;
typedef int SCI_STATUS ;
typedef int SCIF_SAS_TASK_REQUEST_T ;
typedef TYPE_1__ SCIF_SAS_REMOTE_DEVICE_T ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,scalar_t__) ;

__attribute__((used)) static
SCI_STATUS FUNC_1(
   SCIF_SAS_REMOTE_DEVICE_T * VAR_2,
   SCIF_SAS_TASK_REQUEST_T * VAR_3
)
{

   if (VAR_2->ready_substate_machine.current_state_id
       != VAR_0)
   {
      FUNC_0(
         &VAR_2->ready_substate_machine,
         VAR_0
      );
   }

   VAR_2->request_count++;
   VAR_2->task_request_count++;

   return VAR_1;
}
