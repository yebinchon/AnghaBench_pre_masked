
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int state_machine; } ;
struct TYPE_8__ {TYPE_2__* domain; TYPE_1__ parent; int starting_substate_machine; } ;
struct TYPE_7__ {int controller; } ;
typedef scalar_t__ SCI_STATUS ;
typedef TYPE_3__ SCIF_SAS_REMOTE_DEVICE_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static
void FUNC_4(
   SCIF_SAS_REMOTE_DEVICE_T * VAR_6,
   SCI_STATUS VAR_7
)
{
   if (VAR_7 == VAR_5)
   {





      FUNC_2(
         &VAR_6->starting_substate_machine,
         VAR_2
      );
   }
   else
   {
      FUNC_0((
         FUNC_1(VAR_6),
         VAR_0 | VAR_1,
         "Device:0x%x Status:0x%x failed to start core device\n",
         VAR_6
      ));

      FUNC_2(
         &VAR_6->parent.state_machine,
         VAR_3
      );



      FUNC_3(VAR_6->domain->controller,
              VAR_4);
   }
}
