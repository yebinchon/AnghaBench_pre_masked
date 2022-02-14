
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * smu_registers; } ;
typedef scalar_t__ SCI_CONTROLLER_HANDLE_T ;
typedef TYPE_1__ SCIC_SDS_CONTROLLER_T ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int) ;

void FUNC_2(
   SCI_CONTROLLER_HANDLE_T VAR_0
)
{
   SCIC_SDS_CONTROLLER_T *VAR_1;
   VAR_1 = (SCIC_SDS_CONTROLLER_T *)VAR_0;

   FUNC_0(VAR_1->smu_registers != ((void*)0));

   FUNC_1(VAR_1, 0x00000000);
}
