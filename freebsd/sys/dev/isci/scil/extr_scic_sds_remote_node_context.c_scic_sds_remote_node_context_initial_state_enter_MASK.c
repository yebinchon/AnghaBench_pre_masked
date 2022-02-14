
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ previous_state_id; } ;
struct TYPE_7__ {int destination_state; TYPE_1__ state_machine; } ;
typedef int SCI_BASE_OBJECT_T ;
typedef TYPE_2__ SCIC_SDS_REMOTE_NODE_CONTEXT_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_3 ;

__attribute__((used)) static
void FUNC_3(
   SCI_BASE_OBJECT_T * VAR_4
)
{
   SCIC_SDS_REMOTE_NODE_CONTEXT_T * VAR_5;
   VAR_5 = (SCIC_SDS_REMOTE_NODE_CONTEXT_T *)VAR_4;

   FUNC_0(
      VAR_5,
      VAR_3,
      VAR_0
         );



   if (
      VAR_5->state_machine.previous_state_id
         == VAR_1
         )
   {
      VAR_5->destination_state = VAR_2;

      FUNC_2(VAR_5);




      FUNC_1(VAR_5);
   }
}
