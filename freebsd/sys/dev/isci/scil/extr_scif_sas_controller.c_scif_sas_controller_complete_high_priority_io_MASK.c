
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* state_handlers; } ;
struct TYPE_5__ {int (* complete_high_priority_io_handler ) (int *,int *,int *) ;} ;
typedef int SCI_STATUS ;
typedef int SCI_BASE_REQUEST_T ;
typedef int SCI_BASE_REMOTE_DEVICE_T ;
typedef int SCI_BASE_CONTROLLER_T ;
typedef int SCIF_SAS_REQUEST_T ;
typedef int SCIF_SAS_REMOTE_DEVICE_T ;
typedef TYPE_2__ SCIF_SAS_CONTROLLER_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,int *,int *) ;

SCI_STATUS FUNC_3(
   SCIF_SAS_CONTROLLER_T *VAR_2,
   SCIF_SAS_REMOTE_DEVICE_T *VAR_3,
   SCIF_SAS_REQUEST_T *VAR_4
)
{
   FUNC_0(*(
      FUNC_1(VAR_2),
      VAR_0 | VAR_1,
      "scif_sas_controller_complete_high_priority_io(0x%x, 0x%x, 0x%x) enter\n",
      VAR_2, VAR_3, VAR_4
   ));


   return VAR_2->state_handlers->complete_high_priority_io_handler(
             (SCI_BASE_CONTROLLER_T*) VAR_2,
             (SCI_BASE_REMOTE_DEVICE_T*) VAR_3,
             (SCI_BASE_REQUEST_T*) VAR_4
          );
}
