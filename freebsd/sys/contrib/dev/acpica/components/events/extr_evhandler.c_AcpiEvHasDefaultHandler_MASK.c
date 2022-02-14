
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ SpaceId; int HandlerFlags; TYPE_3__* Next; } ;
struct TYPE_5__ {TYPE_3__* Handler; } ;
struct TYPE_7__ {TYPE_2__ AddressSpace; TYPE_1__ CommonNotify; } ;
typedef int BOOLEAN ;
typedef TYPE_3__ ACPI_OPERAND_OBJECT ;
typedef int ACPI_NAMESPACE_NODE ;
typedef scalar_t__ ACPI_ADR_SPACE_TYPE ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;

BOOLEAN
FUNC_1 (
    ACPI_NAMESPACE_NODE *VAR_3,
    ACPI_ADR_SPACE_TYPE VAR_4)
{
    ACPI_OPERAND_OBJECT *VAR_5;
    ACPI_OPERAND_OBJECT *VAR_6;




    VAR_5 = FUNC_0 (VAR_3);
    if (VAR_5)
    {
        VAR_6 = VAR_5->CommonNotify.Handler;



        while (VAR_6)
        {
            if (VAR_6->AddressSpace.SpaceId == VAR_4)
            {
                if (VAR_6->AddressSpace.HandlerFlags &
                    VAR_0)
                {
                    return (VAR_2);
                }
            }

            VAR_6 = VAR_6->AddressSpace.Next;
        }
    }

    return (VAR_1);
}
