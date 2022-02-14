
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {size_t Class; } ;
struct TYPE_6__ {scalar_t__ Type; } ;
struct TYPE_8__ {TYPE_2__ Reference; TYPE_1__ Common; } ;
typedef TYPE_3__ ACPI_OPERAND_OBJECT ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 char const** VAR_3 ;

const char *
FUNC_1 (
    ACPI_OPERAND_OBJECT *VAR_4)
{

    if (!VAR_4)
    {
        return ("NULL Object");
    }

    if (FUNC_0 (VAR_4) != VAR_0)
    {
        return ("Not an Operand object");
    }

    if (VAR_4->Common.Type != VAR_2)
    {
        return ("Not a Reference object");
    }

    if (VAR_4->Reference.Class > VAR_1)
    {
        return ("Unknown Reference class");
    }

    return (VAR_3[VAR_4->Reference.Class]);
}
