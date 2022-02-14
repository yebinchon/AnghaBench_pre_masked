
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* Next; } ;
typedef TYPE_1__ ACPI_PCI_DEVICE ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1 (
    ACPI_PCI_DEVICE *VAR_0)
{
    ACPI_PCI_DEVICE *VAR_1;
    ACPI_PCI_DEVICE *VAR_2;


    VAR_1 = VAR_0;
    while (VAR_1)
    {
        VAR_2 = VAR_1;
        VAR_1 = VAR_2->Next;
        FUNC_0 (VAR_2);
    }
}
