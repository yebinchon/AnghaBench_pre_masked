
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int U16 ;
struct TYPE_4__ {int pool; } ;
struct TYPE_6__ {TYPE_2__* state_handlers; TYPE_1__ hprq; } ;
struct TYPE_5__ {int (* start_io_handler ) (int *,int *,int *,int ) ;} ;
typedef int SCI_STATUS ;
typedef scalar_t__ SCI_REMOTE_DEVICE_HANDLE_T ;
typedef int SCI_IO_STATUS ;
typedef scalar_t__ SCI_IO_REQUEST_HANDLE_T ;
typedef scalar_t__ SCI_CONTROLLER_HANDLE_T ;
typedef int SCI_BASE_REQUEST_T ;
typedef int SCI_BASE_REMOTE_DEVICE_T ;
typedef int SCI_BASE_CONTROLLER_T ;
typedef TYPE_3__ SCIF_SAS_CONTROLLER_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,int *,int *,int ) ;

SCI_IO_STATUS FUNC_5(
   SCI_CONTROLLER_HANDLE_T VAR_3,
   SCI_REMOTE_DEVICE_HANDLE_T VAR_4,
   SCI_IO_REQUEST_HANDLE_T VAR_5,
   U16 VAR_6
)
{
   SCIF_SAS_CONTROLLER_T * VAR_7 = (SCIF_SAS_CONTROLLER_T*) VAR_3;
   SCI_STATUS VAR_8;

   FUNC_0((
      FUNC_1(VAR_3),
      VAR_0 | VAR_1,
      "scif_controller_start_io(0x%x, 0x%x, 0x%x, 0x%x) enter\n",
      VAR_3, VAR_4, VAR_5, VAR_6
   ));

   if (
         FUNC_2(VAR_7->hprq.pool)
      || FUNC_3(VAR_3)
      )
   {
      VAR_8 = VAR_7->state_handlers->start_io_handler(
                (SCI_BASE_CONTROLLER_T*) VAR_3,
                (SCI_BASE_REMOTE_DEVICE_T*) VAR_4,
                (SCI_BASE_REQUEST_T*) VAR_5,
                VAR_6
             );
   }
   else
      VAR_8 = VAR_2;

   return (SCI_IO_STATUS)VAR_8;
}
