
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ current_state_id; } ;
struct TYPE_9__ {TYPE_1__ state_machine; } ;
struct TYPE_10__ {TYPE_2__ parent; } ;
typedef int SCI_STATUS ;
typedef TYPE_3__ SCIC_SDS_CONTROLLER_T ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static
void FUNC_5(
   SCIC_SDS_CONTROLLER_T *VAR_3,
   SCI_STATUS VAR_4
)
{
   FUNC_0((
      FUNC_1(VAR_3),
      VAR_0,
      "scic_sds_controller_transition_to_ready(0x%x, 0x%x) enter\n",
      VAR_3, VAR_4
   ));

   if (VAR_3->parent.state_machine.current_state_id
       == VAR_2)
   {


      FUNC_2(
         FUNC_4(VAR_3),
         VAR_1
      );

      FUNC_3(VAR_3, VAR_4);
   }
}
