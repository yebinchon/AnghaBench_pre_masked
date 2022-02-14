
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ previous_state_id; } ;
struct TYPE_6__ {TYPE_1__ ready_substate_machine; } ;
typedef TYPE_2__ SCIC_SDS_REMOTE_DEVICE_T ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static
void FUNC_2(
   void * VAR_1
)
{
   SCIC_SDS_REMOTE_DEVICE_T * VAR_2;
   VAR_2 = (SCIC_SDS_REMOTE_DEVICE_T *)VAR_1;




   if (VAR_2->ready_substate_machine.previous_state_id
       != VAR_0)
   {
      FUNC_0(
         FUNC_1(VAR_2), VAR_2
      );
   }
}
