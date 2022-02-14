
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_5__ {TYPE_1__* state_handlers; } ;
struct TYPE_4__ {int (* not_ready_handler ) (TYPE_2__*,int ) ;} ;
typedef int SCI_REMOTE_DEVICE_HANDLE_T ;
typedef int SCI_CONTROLLER_HANDLE_T ;
typedef TYPE_2__ SCIF_SAS_REMOTE_DEVICE_T ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;

void FUNC_2(
   SCI_CONTROLLER_HANDLE_T VAR_0,
   SCI_REMOTE_DEVICE_HANDLE_T VAR_1,
   U32 VAR_2
)
{
   SCIF_SAS_REMOTE_DEVICE_T * VAR_3 = (SCIF_SAS_REMOTE_DEVICE_T*)
                                      FUNC_0(VAR_1);

   VAR_3->state_handlers->not_ready_handler(VAR_3,VAR_2);
}
