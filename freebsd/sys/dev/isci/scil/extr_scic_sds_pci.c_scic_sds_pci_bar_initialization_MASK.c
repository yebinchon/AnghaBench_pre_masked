
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* lex_registers; int controller_index; scalar_t__ pci_revision; int * scu_registers; int * smu_registers; } ;
typedef int SMU_REGISTERS_T ;
typedef int SCU_REGISTERS_T ;
typedef TYPE_1__ SCIC_SDS_CONTROLLER_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;

void FUNC_1(
   SCIC_SDS_CONTROLLER_T* VAR_9
)
{
   VAR_9->smu_registers =
      (SMU_REGISTERS_T *)(
         (char *)FUNC_0(VAR_9, VAR_7)
                +(0x4000 * VAR_9->controller_index));
   VAR_9->scu_registers =
      (SCU_REGISTERS_T *)(
         (char *)FUNC_0(VAR_9, VAR_6)
                +(0x400000 * VAR_9->controller_index));
}
