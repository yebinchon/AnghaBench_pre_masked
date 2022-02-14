
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * ImplicitReturnObj; } ;
typedef scalar_t__ BOOLEAN ;
typedef TYPE_1__ ACPI_WALK_STATE ;
typedef int ACPI_OPERAND_OBJECT ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

BOOLEAN
FUNC_4 (
    ACPI_OPERAND_OBJECT *VAR_5,
    ACPI_WALK_STATE *VAR_6,
    BOOLEAN VAR_7)
{
    FUNC_1 (VAR_2);






    if ((!VAR_1) ||
        (!VAR_5))
    {
        return (VAR_3);
    }

    FUNC_0 (*(VAR_0,
        "Result %p will be implicitly returned; Prev=%p\n",
        VAR_5,
        VAR_6->ImplicitReturnObj));







    if (VAR_6->ImplicitReturnObj)
    {
        if (VAR_6->ImplicitReturnObj == VAR_5)
        {
            return (VAR_4);
        }
        FUNC_2 (VAR_6);
    }



    VAR_6->ImplicitReturnObj = VAR_5;
    if (VAR_7)
    {
        FUNC_3 (VAR_5);
    }

    return (VAR_4);
}
