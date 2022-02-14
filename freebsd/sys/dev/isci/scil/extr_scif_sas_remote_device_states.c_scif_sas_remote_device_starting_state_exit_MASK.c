
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int starting_substate_machine; int destination_state; } ;
typedef int SCI_BASE_OBJECT_T ;
typedef TYPE_1__ SCIF_SAS_REMOTE_DEVICE_T ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static
void FUNC_1(
   SCI_BASE_OBJECT_T *VAR_1
)
{
   SCIF_SAS_REMOTE_DEVICE_T * VAR_2 = (SCIF_SAS_REMOTE_DEVICE_T *)VAR_1;

   VAR_2->destination_state =
      VAR_0;


   FUNC_0(&VAR_2->starting_substate_machine);
}
