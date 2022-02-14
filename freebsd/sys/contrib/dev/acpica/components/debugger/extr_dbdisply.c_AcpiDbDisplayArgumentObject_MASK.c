
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ACPI_WALK_STATE ;
typedef int ACPI_OPERAND_OBJECT ;


 int FUNC_0 (int *,int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (char*) ;

void
FUNC_3 (
    ACPI_OPERAND_OBJECT *VAR_2,
    ACPI_WALK_STATE *VAR_3)
{


    if (VAR_1 != FUNC_1())
    {
        return;
    }


    if (!VAR_0)
    {
        return;
    }

    FUNC_2 ("ArgObj:    ");
    FUNC_0 (VAR_2, VAR_3);
}
