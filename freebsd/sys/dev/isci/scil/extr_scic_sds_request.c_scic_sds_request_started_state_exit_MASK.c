
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ has_started_substate_machine; int started_substate_machine; } ;
typedef int SCI_BASE_OBJECT_T ;
typedef TYPE_1__ SCIC_SDS_REQUEST_T ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static
void FUNC_1(
   SCI_BASE_OBJECT_T *VAR_1
)
{
   SCIC_SDS_REQUEST_T *VAR_2 = (SCIC_SDS_REQUEST_T *)VAR_1;

   if (VAR_2->has_started_substate_machine == VAR_0)
      FUNC_0(&VAR_2->started_substate_machine);
}
