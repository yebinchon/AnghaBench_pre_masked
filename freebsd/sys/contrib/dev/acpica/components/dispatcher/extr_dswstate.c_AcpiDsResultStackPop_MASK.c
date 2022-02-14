
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ResultSize; int ResultCount; int * Results; } ;
typedef TYPE_1__ ACPI_WALK_STATE ;
typedef int ACPI_STATUS ;
typedef int ACPI_GENERIC_STATE ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int **) ;
 int VAR_6 ;

__attribute__((used)) static ACPI_STATUS
FUNC_5 (
    ACPI_WALK_STATE *VAR_7)
{
    ACPI_GENERIC_STATE *VAR_8;


    FUNC_2 (VAR_6);




    if (VAR_7->Results == ((void*)0))
    {
        FUNC_0 ((VAR_0,
            "Result stack underflow - State=%p\n", VAR_7));
        return (VAR_3);
    }

    if (VAR_7->ResultSize < VAR_1)
    {
        FUNC_1 ((VAR_4, "Insufficient result stack size"));
        return (VAR_2);
    }

    VAR_8 = FUNC_4 (&VAR_7->Results);
    FUNC_3 (VAR_8);



    VAR_7->ResultSize -= VAR_1;

    FUNC_0 ((VAR_0,
        "Result=%p RemainingResults=%X State=%p\n",
        VAR_8, VAR_7->ResultCount, VAR_7));

    return (VAR_5);
}
