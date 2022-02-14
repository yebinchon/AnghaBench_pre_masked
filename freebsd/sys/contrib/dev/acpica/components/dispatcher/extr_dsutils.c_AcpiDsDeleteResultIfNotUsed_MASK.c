
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ACPI_WALK_STATE ;
typedef int ACPI_STATUS ;
typedef int ACPI_PARSE_OBJECT ;
typedef int ACPI_OPERAND_OBJECT ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int **,int *) ;
 int FUNC_5 (int *) ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_6 (
    ACPI_PARSE_OBJECT *VAR_3,
    ACPI_OPERAND_OBJECT *VAR_4,
    ACPI_WALK_STATE *VAR_5)
{
    ACPI_OPERAND_OBJECT *VAR_6;
    ACPI_STATUS VAR_7;


    FUNC_1 (VAR_1, VAR_4);


    if (!VAR_3)
    {
        FUNC_0 ((VAR_0, "Null Op"));
        VAR_2;
    }

    if (!VAR_4)
    {
        VAR_2;
    }

    if (!FUNC_3 (VAR_3, VAR_5))
    {


        VAR_7 = FUNC_4 (&VAR_6, VAR_5);
        if (FUNC_2 (VAR_7))
        {
            FUNC_5 (VAR_4);
        }
    }

    VAR_2;
}
