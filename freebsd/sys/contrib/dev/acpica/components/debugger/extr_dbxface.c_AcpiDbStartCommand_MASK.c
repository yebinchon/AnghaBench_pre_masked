
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ACPI_WALK_STATE ;
typedef scalar_t__ ACPI_STATUS ;
typedef int ACPI_PARSE_OBJECT ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ,int *,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 int VAR_5 ;

__attribute__((used)) static ACPI_STATUS
FUNC_5 (
    ACPI_WALK_STATE *VAR_6,
    ACPI_PARSE_OBJECT *VAR_7)
{
    ACPI_STATUS VAR_8;
    VAR_4 = VAR_5;
    VAR_8 = VAR_1;

    while (VAR_8 == VAR_1)
    {


        VAR_8 = FUNC_3 ();
        if (FUNC_1 (VAR_8))
        {
            goto ErrorExit;
        }



        VAR_8 = FUNC_4 ();
        if (FUNC_1 (VAR_8))
        {
            goto ErrorExit;
        }

        VAR_8 = FUNC_2 (VAR_3, VAR_6, VAR_7);
    }



ErrorExit:
    if (FUNC_1 (VAR_8) && VAR_8 != VAR_0)
    {
        FUNC_0 ((VAR_2, VAR_8,
            "While parsing/handling command line"));
    }
    return (VAR_8);
}
