
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* U32 ;
struct TYPE_3__ {int * state_table; void* current_state_id; void* previous_state_id; void* initial_state_id; int * state_machine_owner; int parent; } ;
typedef int SCI_BASE_STATE_T ;
typedef TYPE_1__ SCI_BASE_STATE_MACHINE_T ;
typedef int SCI_BASE_OBJECT_T ;


 int FUNC_0 (int *) ;

void FUNC_1(
   SCI_BASE_STATE_MACHINE_T * VAR_0,
   SCI_BASE_OBJECT_T * VAR_1,
   SCI_BASE_STATE_T * VAR_2,
   U32 VAR_3
)
{




   VAR_0->state_machine_owner = VAR_1;
   VAR_0->initial_state_id = VAR_3;
   VAR_0->previous_state_id = VAR_3;
   VAR_0->current_state_id = VAR_3;
   VAR_0->state_table = VAR_2;
}
