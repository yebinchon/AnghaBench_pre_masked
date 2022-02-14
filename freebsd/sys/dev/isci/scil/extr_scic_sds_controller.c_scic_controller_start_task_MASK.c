
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int U16 ;
struct TYPE_6__ {int parent; TYPE_1__* state_handlers; } ;
struct TYPE_5__ {int (* start_task_handler ) (int *,int *,int *,int ) ;} ;
struct TYPE_4__ {TYPE_2__ parent; } ;
typedef int SCI_TASK_STATUS ;
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
 int FUNC_3 (int *,int *,int *,int ) ;

SCI_TASK_STATUS FUNC_4(
   SCI_CONTROLLER_HANDLE_T VAR_2,
   SCI_REMOTE_DEVICE_HANDLE_T VAR_3,
   SCI_TASK_REQUEST_HANDLE_T VAR_4,
   U16 VAR_5
)
{
   SCI_STATUS VAR_6 = VAR_1;
   SCIC_SDS_CONTROLLER_T *VAR_7;
   VAR_7 = (SCIC_SDS_CONTROLLER_T *)VAR_2;

   FUNC_1((
      FUNC_2(VAR_2),
      VAR_0,
      "scic_controller_start_task(0x%x, 0x%x, 0x%x, 0x%x) enter\n",
      VAR_2, VAR_3, VAR_4, VAR_5
   ));

   if (VAR_7->state_handlers->parent.start_task_handler != ((void*)0))
   {
      VAR_6 = VAR_7->state_handlers->parent.start_task_handler(
                  &VAR_7->parent,
                  (SCI_BASE_REMOTE_DEVICE_T *)VAR_3,
                  (SCI_BASE_REQUEST_T *)VAR_4,
                  VAR_5
               );
   }
   else
   {
      FUNC_0((
         FUNC_2(VAR_2),
         VAR_0,
         "SCIC Controller starting task from invalid state\n"
      ));
   }

   return (SCI_TASK_STATUS)VAR_6;
}
