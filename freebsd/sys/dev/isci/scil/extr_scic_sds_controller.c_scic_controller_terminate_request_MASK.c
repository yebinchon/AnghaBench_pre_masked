
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int parent; TYPE_1__* state_handlers; } ;
struct TYPE_3__ {int (* terminate_request_handler ) (int *,int *,int *) ;} ;
typedef int SCI_STATUS ;
typedef scalar_t__ SCI_REMOTE_DEVICE_HANDLE_T ;
typedef scalar_t__ SCI_IO_REQUEST_HANDLE_T ;
typedef scalar_t__ SCI_CONTROLLER_HANDLE_T ;
typedef int SCI_BASE_REQUEST_T ;
typedef int SCI_BASE_REMOTE_DEVICE_T ;
typedef TYPE_2__ SCIC_SDS_CONTROLLER_T ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,int *,int *) ;

SCI_STATUS FUNC_3(
   SCI_CONTROLLER_HANDLE_T VAR_1,
   SCI_REMOTE_DEVICE_HANDLE_T VAR_2,
   SCI_IO_REQUEST_HANDLE_T VAR_3
)
{
   SCI_STATUS VAR_4;
   SCIC_SDS_CONTROLLER_T *VAR_5;
   VAR_5 = (SCIC_SDS_CONTROLLER_T *)VAR_1;

   FUNC_0((
      FUNC_1(VAR_1),
      VAR_0,
      "scic_controller_terminate_request(0x%x, 0x%x, 0x%x) enter\n",
      VAR_1, VAR_2, VAR_3
   ));

   VAR_4 = VAR_5->state_handlers->terminate_request_handler(
      &VAR_5->parent,
      (SCI_BASE_REMOTE_DEVICE_T *)VAR_2,
      (SCI_BASE_REQUEST_T *)VAR_3
   );

   return VAR_4;
}
