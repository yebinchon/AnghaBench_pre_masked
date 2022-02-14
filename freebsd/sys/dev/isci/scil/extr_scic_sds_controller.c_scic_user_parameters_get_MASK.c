
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int user_parameters; } ;
typedef scalar_t__ SCI_CONTROLLER_HANDLE_T ;
typedef int SCIC_USER_PARAMETERS_T ;
typedef TYPE_1__ SCIC_SDS_CONTROLLER_T ;


 int FUNC_0 (int *,int *,int) ;

void FUNC_1(
   SCI_CONTROLLER_HANDLE_T VAR_0,
   SCIC_USER_PARAMETERS_T * VAR_1
)
{
   SCIC_SDS_CONTROLLER_T * VAR_2 = (SCIC_SDS_CONTROLLER_T*)VAR_0;

   FUNC_0(VAR_1, (&VAR_2->user_parameters), sizeof(*VAR_1));
}
