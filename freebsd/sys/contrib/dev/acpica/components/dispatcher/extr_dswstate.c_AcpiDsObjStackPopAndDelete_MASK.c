
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UINT32 ;
struct TYPE_3__ {scalar_t__ NumOperands; int ** Operands; } ;
typedef size_t INT32 ;
typedef TYPE_1__ ACPI_WALK_STATE ;
typedef int ACPI_OPERAND_OBJECT ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;

void
FUNC_3 (
    UINT32 VAR_2,
    ACPI_WALK_STATE *VAR_3)
{
    INT32 VAR_4;
    ACPI_OPERAND_OBJECT *VAR_5;


    FUNC_1 (VAR_1);


    if (VAR_2 == 0)
    {
        return;
    }

    for (VAR_4 = (INT32) VAR_2 - 1; VAR_4 >= 0; VAR_4--)
    {
        if (VAR_3->NumOperands == 0)
        {
            return;
        }



        VAR_3->NumOperands--;
        VAR_5 = VAR_3->Operands [VAR_4];
        if (VAR_5)
        {
            FUNC_2 (VAR_3->Operands [VAR_4]);
            VAR_3->Operands [VAR_4] = ((void*)0);
        }
    }

    FUNC_0 ((VAR_0, "Count=%X State=%p #Ops=%X\n",
        VAR_2, VAR_3, VAR_3->NumOperands));
}
