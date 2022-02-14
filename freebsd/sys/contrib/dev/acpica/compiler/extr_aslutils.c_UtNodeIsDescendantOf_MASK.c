
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* Parent; } ;
typedef int BOOLEAN ;
typedef TYPE_1__ ACPI_NAMESPACE_NODE ;


 int VAR_0 ;
 int VAR_1 ;

BOOLEAN
FUNC_0 (
    ACPI_NAMESPACE_NODE *VAR_2,
    ACPI_NAMESPACE_NODE *VAR_3)
{

    if (VAR_2 == VAR_3)
    {
        return (VAR_0);
    }

    if (!VAR_3)
    {
        return (VAR_1);
    }



    while (VAR_2)
    {
        if (VAR_2 == VAR_3)
        {
            return (VAR_1);
        }

        VAR_2 = VAR_2->Parent;
    }

    return (VAR_0);
}
