
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ ParseOpcode; int Next; } ;
struct TYPE_9__ {TYPE_1__ Asl; } ;
typedef int BOOLEAN ;
typedef TYPE_2__ ACPI_PARSE_OBJECT ;


 TYPE_2__* FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

BOOLEAN
FUNC_2 (
    ACPI_PARSE_OBJECT *VAR_3)
{
    ACPI_PARSE_OBJECT *VAR_4;




    VAR_4 = FUNC_0 (VAR_3);
    while (VAR_4)
    {
        if ((!VAR_4->Asl.Next) &&
            (VAR_4->Asl.ParseOpcode == VAR_1))
        {
            return (VAR_2);
        }

        VAR_4 = FUNC_1 (VAR_4);
    }

    return (VAR_0);
}
