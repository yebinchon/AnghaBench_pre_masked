
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ACPI_WALK_STATE ;
typedef int ACPI_STATUS ;
typedef int ACPI_OPERAND_OBJECT ;


 int FUNC_0 (int ,int **) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int **) ;
 scalar_t__ FUNC_5 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int **,int *) ;
 int VAR_7 ;
 int FUNC_8 (int ) ;

ACPI_STATUS
FUNC_9 (
    ACPI_OPERAND_OBJECT **VAR_8,
    ACPI_WALK_STATE *VAR_9)
{
    ACPI_STATUS VAR_10;


    FUNC_4 (VAR_7, VAR_8);


    if (!VAR_8 || !*VAR_8)
    {
        FUNC_2 ((VAR_5, "Internal - null pointer"));
        FUNC_8 (VAR_4);
    }






    if (FUNC_5 (*VAR_8) == VAR_2)
    {
        VAR_10 = FUNC_7 (VAR_8, VAR_9);
        if (FUNC_3 (VAR_10))
        {
            FUNC_8 (VAR_10);
        }

        if (!*VAR_8)
        {
            FUNC_2 ((VAR_5, "Internal - null pointer"));
            FUNC_8 (VAR_4);
        }
    }





    if (FUNC_5 (*VAR_8) == VAR_1)
    {
        VAR_10 = FUNC_6 (
            FUNC_0 (VAR_3, VAR_8),
            VAR_9);
        if (FUNC_3 (VAR_10))
        {
            FUNC_8 (VAR_10);
        }
    }

    FUNC_1 (*(VAR_0, "Resolved object %p\n", *VAR_8));
    FUNC_8 (VAR_6);
}
