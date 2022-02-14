
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* state_handlers; } ;
struct TYPE_5__ {int (* start_complete_handler ) (TYPE_2__*,int ) ;} ;
typedef int SCI_STATUS ;
typedef int SCI_REMOTE_DEVICE_HANDLE_T ;
typedef int SCI_CONTROLLER_HANDLE_T ;
typedef TYPE_2__ SCIF_SAS_REMOTE_DEVICE_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,int ) ;

void FUNC_4(
   SCI_CONTROLLER_HANDLE_T VAR_2,
   SCI_REMOTE_DEVICE_HANDLE_T VAR_3,
   SCI_STATUS VAR_4
)
{
   SCIF_SAS_REMOTE_DEVICE_T * VAR_5 = (SCIF_SAS_REMOTE_DEVICE_T*)
                                      FUNC_2(VAR_3);

   FUNC_0((
      FUNC_1(VAR_5),
      VAR_0 | VAR_1,
      "scic_cb_remote_device_start_complete(0x%x, 0x%x, 0x%x) enter\n",
      VAR_2, VAR_3, VAR_4
   ));

   VAR_5->state_handlers->start_complete_handler(
      VAR_5, VAR_4
   );
}
