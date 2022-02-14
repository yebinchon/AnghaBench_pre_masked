
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* state_handlers; } ;
struct TYPE_8__ {TYPE_3__* owning_port; } ;
struct TYPE_7__ {int (* complete_io_handler ) (TYPE_3__*,TYPE_2__*,int *) ;} ;
typedef scalar_t__ SCI_STATUS ;
typedef int SCIC_SDS_REQUEST_T ;
typedef TYPE_2__ SCIC_SDS_REMOTE_DEVICE_T ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*,int *) ;

void FUNC_2(
   SCIC_SDS_REMOTE_DEVICE_T * VAR_1,
   SCIC_SDS_REQUEST_T * VAR_2,
   SCI_STATUS VAR_3
)
{

   if (VAR_3 == VAR_0)
      FUNC_0(VAR_1);
   else
   {
      VAR_1->owning_port->state_handlers->complete_io_handler(
         VAR_1->owning_port, VAR_1, VAR_2
      );
   }
}
