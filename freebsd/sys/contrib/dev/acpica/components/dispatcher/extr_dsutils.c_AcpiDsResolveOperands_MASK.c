
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t UINT32 ;
struct TYPE_5__ {size_t NumOperands; int * Operands; } ;
typedef TYPE_1__ ACPI_WALK_STATE ;
typedef int ACPI_STATUS ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;

ACPI_STATUS
FUNC_4 (
    ACPI_WALK_STATE *VAR_2)
{
    UINT32 VAR_3;
    ACPI_STATUS VAR_4 = VAR_0;


    FUNC_1 (VAR_1, VAR_2);







    for (VAR_3 = 0; VAR_3 < VAR_2->NumOperands; VAR_3++)
    {
        VAR_4 = FUNC_2 (&VAR_2->Operands[VAR_3], VAR_2);
        if (FUNC_0 (VAR_4))
        {
            break;
        }
    }

    FUNC_3 (VAR_4);
}
