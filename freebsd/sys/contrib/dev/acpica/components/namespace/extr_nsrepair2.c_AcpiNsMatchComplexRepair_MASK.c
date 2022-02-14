
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int Ascii; } ;
struct TYPE_9__ {TYPE_1__ Name; } ;
struct TYPE_8__ {int Name; scalar_t__ RepairFunction; } ;
typedef TYPE_2__ ACPI_REPAIR_INFO ;
typedef TYPE_3__ ACPI_NAMESPACE_NODE ;


 scalar_t__ FUNC_0 (int ,int ) ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static const ACPI_REPAIR_INFO *
FUNC_1 (
    ACPI_NAMESPACE_NODE *VAR_1)
{
    const ACPI_REPAIR_INFO *VAR_2;




    VAR_2 = VAR_0;
    while (VAR_2->RepairFunction)
    {
        if (FUNC_0 (VAR_1->Name.Ascii, VAR_2->Name))
        {
            return (VAR_2);
        }

        VAR_2++;
    }

    return (((void*)0));
}
