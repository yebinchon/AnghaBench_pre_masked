
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ NumOperands; size_t OperandIndex; void** Operands; } ;
typedef TYPE_1__ ACPI_WALK_STATE ;
typedef int ACPI_STATUS ;
typedef int ACPI_OPERAND_OBJECT ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int VAR_5 ;

ACPI_STATUS
FUNC_4 (
    void *VAR_6,
    ACPI_WALK_STATE *VAR_7)
{
    FUNC_2 (VAR_5);




    if (VAR_7->NumOperands >= VAR_1)
    {
        FUNC_1 ((VAR_2,
            "Object stack overflow! Obj=%p State=%p #Ops=%u",
            VAR_6, VAR_7, VAR_7->NumOperands));
        return (VAR_4);
    }



    VAR_7->Operands [VAR_7->OperandIndex] = VAR_6;
    VAR_7->NumOperands++;



    VAR_7->OperandIndex++;

    FUNC_0 ((VAR_0, "Obj=%p [%s] State=%p #Ops=%X\n",
        VAR_6, FUNC_3 ((ACPI_OPERAND_OBJECT *) VAR_6),
        VAR_7, VAR_7->NumOperands));

    return (VAR_3);
}
