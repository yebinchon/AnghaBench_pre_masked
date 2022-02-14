
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_7__ {int parent; TYPE_2__* state_handlers; } ;
struct TYPE_5__ {int (* reset_handler ) (int *,int ) ;} ;
struct TYPE_6__ {TYPE_1__ parent; } ;
typedef int SCI_STATUS ;
typedef scalar_t__ SCI_PORT_HANDLE_T ;
typedef TYPE_3__ SCIC_SDS_PORT_T ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *,int ) ;

SCI_STATUS FUNC_3(
   SCI_PORT_HANDLE_T VAR_1,
   U32 VAR_2
)
{
   SCIC_SDS_PORT_T * VAR_3 = (SCIC_SDS_PORT_T *)VAR_1;

   FUNC_0((
      FUNC_1(VAR_3),
      VAR_0,
      "scic_port_hard_reset(0x%x, 0x%x) enter\n",
      VAR_1, VAR_2
   ));

   return VAR_3->state_handlers->parent.reset_handler(
                                       &VAR_3->parent,
                                       VAR_2
                                     );
}
