
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ AmlOpcode; TYPE_2__* Parent; } ;
struct TYPE_6__ {TYPE_1__ Asl; } ;
typedef TYPE_2__ ACPI_PARSE_OBJECT ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static ACPI_PARSE_OBJECT *
FUNC_0 (
    ACPI_PARSE_OBJECT *VAR_1)
{
    ACPI_PARSE_OBJECT *VAR_2;


    VAR_2 = VAR_1->Asl.Parent;
    while (VAR_2)
    {
        if (VAR_2->Asl.AmlOpcode == VAR_0)
        {
            return (VAR_2);
        }

        VAR_2 = VAR_2->Asl.Parent;
    }

    return (((void*)0));
}
