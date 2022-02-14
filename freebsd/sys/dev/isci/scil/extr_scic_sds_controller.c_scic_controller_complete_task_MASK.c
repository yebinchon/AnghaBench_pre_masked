
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int parent; TYPE_1__* state_handlers; } ;
struct TYPE_5__ {int (* complete_task_handler ) (int *,int *,int *) ;} ;
struct TYPE_4__ {TYPE_2__ parent; } ;
typedef scalar_t__ SCI_TASK_REQUEST_HANDLE_T ;
typedef int SCI_STATUS ;
typedef scalar_t__ SCI_REMOTE_DEVICE_HANDLE_T ;
typedef scalar_t__ SCI_CONTROLLER_HANDLE_T ;
typedef int SCI_BASE_REQUEST_T ;
typedef int SCI_BASE_REMOTE_DEVICE_T ;
typedef TYPE_3__ SCIC_SDS_CONTROLLER_T ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,int *,int *) ;

SCI_STATUS FUNC_4(
   SCI_CONTROLLER_HANDLE_T VAR_2,
   SCI_REMOTE_DEVICE_HANDLE_T VAR_3,
   SCI_TASK_REQUEST_HANDLE_T VAR_4
)
{
   SCI_STATUS VAR_5 = VAR_1;
   SCIC_SDS_CONTROLLER_T *VAR_6;
   VAR_6 = (SCIC_SDS_CONTROLLER_T *)VAR_2;

   FUNC_1((
      FUNC_2(VAR_2),
      VAR_0,
      "scic_controller_complete_task(0x%x, 0x%x, 0x%x) enter\n",
      VAR_2, VAR_3, VAR_4
   ));

   if (VAR_6->state_handlers->parent.complete_task_handler != ((void*)0))
   {
      VAR_5 = VAR_6->state_handlers->parent.complete_task_handler(
                  &VAR_6->parent,
                  (SCI_BASE_REMOTE_DEVICE_T *)VAR_3,
                  (SCI_BASE_REQUEST_T *)VAR_4
               );
   }
   else
   {
      FUNC_0((
         FUNC_2(VAR_2),
         VAR_0,
         "SCIC Controller completing task from invalid state\n"
      ));
   }

   return VAR_5;
}
