
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* Next; int Name; } ;
typedef int ACPI_STRING ;
typedef TYPE_1__ ACPI_INTERFACE_INFO ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int ,int ) ;

ACPI_INTERFACE_INFO *
FUNC_1 (
    ACPI_STRING VAR_1)
{
    ACPI_INTERFACE_INFO *VAR_2;


    VAR_2 = VAR_0;
    while (VAR_2)
    {
        if (!FUNC_0 (VAR_1, VAR_2->Name))
        {
            return (VAR_2);
        }

        VAR_2 = VAR_2->Next;
    }

    return (((void*)0));
}
