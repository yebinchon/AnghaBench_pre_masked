
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* state_handlers; } ;
struct TYPE_3__ {int (* complete_task_handler ) (int *,int *,int *) ;} ;
typedef scalar_t__ SCI_TASK_REQUEST_HANDLE_T ;
typedef int SCI_STATUS ;
typedef scalar_t__ SCI_REMOTE_DEVICE_HANDLE_T ;
typedef scalar_t__ SCI_CONTROLLER_HANDLE_T ;
typedef int SCI_BASE_REQUEST_T ;
typedef int SCI_BASE_REMOTE_DEVICE_T ;
typedef int SCI_BASE_CONTROLLER_T ;
typedef TYPE_2__ SCIF_SAS_CONTROLLER_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,int *,int *) ;

SCI_STATUS FUNC_3(
   SCI_CONTROLLER_HANDLE_T VAR_4,
   SCI_REMOTE_DEVICE_HANDLE_T VAR_5,
   SCI_TASK_REQUEST_HANDLE_T VAR_6
)
{
   SCIF_SAS_CONTROLLER_T * VAR_7 = (SCIF_SAS_CONTROLLER_T*) VAR_4;


   if ( (VAR_4 == VAR_3)
      || (VAR_5 == VAR_3)
      || (VAR_6 == VAR_3) )
   {
      return VAR_2;
   }

   FUNC_0((
      FUNC_1(VAR_4),
      VAR_0 | VAR_1,
      "scif_controller_complete_task(0x%x, 0x%x, 0x%x) enter\n",
      VAR_4, VAR_5, VAR_6
   ));

   return VAR_7->state_handlers->complete_task_handler(
             (SCI_BASE_CONTROLLER_T*) VAR_4,
             (SCI_BASE_REMOTE_DEVICE_T*) VAR_5,
             (SCI_BASE_REQUEST_T*) VAR_6
          );
}
