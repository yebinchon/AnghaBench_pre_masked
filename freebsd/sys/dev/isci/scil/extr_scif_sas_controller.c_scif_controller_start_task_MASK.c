
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int U16 ;
struct TYPE_4__ {TYPE_1__* state_handlers; } ;
struct TYPE_3__ {int (* start_task_handler ) (int *,int *,int *,int ) ;} ;
typedef int SCI_TASK_STATUS ;
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
 int VAR_4 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,int *,int *,int ) ;

SCI_TASK_STATUS FUNC_4(
   SCI_CONTROLLER_HANDLE_T VAR_5,
   SCI_REMOTE_DEVICE_HANDLE_T VAR_6,
   SCI_TASK_REQUEST_HANDLE_T VAR_7,
   U16 VAR_8
)
{
   SCIF_SAS_CONTROLLER_T * VAR_9 = (SCIF_SAS_CONTROLLER_T*) VAR_5;
   SCI_STATUS VAR_10;


   if ( (VAR_5 == VAR_3)
      || (VAR_6 == VAR_3)
      || (VAR_7 == VAR_3) )
   {
      return VAR_4;
   }

   FUNC_0((
      FUNC_1(VAR_5),
      VAR_0 | VAR_1,
      "scif_controller_start_task(0x%x, 0x%x, 0x%x, 0x%x) enter\n",
      VAR_5, VAR_6, VAR_7, VAR_8
   ));

   if (FUNC_2(VAR_5))
   {
      VAR_10 = VAR_9->state_handlers->start_task_handler(
             (SCI_BASE_CONTROLLER_T*) VAR_5,
             (SCI_BASE_REMOTE_DEVICE_T*) VAR_6,
             (SCI_BASE_REQUEST_T*) VAR_7,
             VAR_8
          );
   }
   else
      VAR_10 = VAR_2;

   return (SCI_TASK_STATUS)VAR_10;
}
