
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* state_handlers; } ;
struct TYPE_3__ {int (* continue_io_handler ) (int *,int *,int *) ;} ;
typedef int SCI_STATUS ;
typedef scalar_t__ SCI_REMOTE_DEVICE_HANDLE_T ;
typedef scalar_t__ SCI_IO_REQUEST_HANDLE_T ;
typedef scalar_t__ SCI_CONTROLLER_HANDLE_T ;
typedef int SCI_BASE_REQUEST_T ;
typedef int SCI_BASE_REMOTE_DEVICE_T ;
typedef int SCI_BASE_CONTROLLER_T ;
typedef TYPE_2__ SCIF_SAS_CONTROLLER_T ;


 int FUNC_0 (int *,int *,int *) ;

SCI_STATUS FUNC_1(
   SCI_CONTROLLER_HANDLE_T VAR_0,
   SCI_REMOTE_DEVICE_HANDLE_T VAR_1,
   SCI_IO_REQUEST_HANDLE_T VAR_2
)
{
   SCIF_SAS_CONTROLLER_T * VAR_3 = (SCIF_SAS_CONTROLLER_T*) VAR_0;

   return VAR_3->state_handlers->continue_io_handler(
             (SCI_BASE_CONTROLLER_T*) VAR_0,
             (SCI_BASE_REMOTE_DEVICE_T*) VAR_1,
             (SCI_BASE_REQUEST_T*) VAR_2
          );
}
