
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_6__ {int parent; int current_state_id; int previous_state_id; } ;
typedef TYPE_1__ SCI_BASE_STATE_MACHINE_T ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int *) ;

void FUNC_4(
   SCI_BASE_STATE_MACHINE_T *VAR_0,
   U32 VAR_1
)
{
   FUNC_1(VAR_0);

   VAR_0->previous_state_id = VAR_0->current_state_id;
   FUNC_2(VAR_0, VAR_1);






   FUNC_0(VAR_0);
}
