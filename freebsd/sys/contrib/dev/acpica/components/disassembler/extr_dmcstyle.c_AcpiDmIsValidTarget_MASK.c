
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * Arg; } ;
struct TYPE_6__ {scalar_t__ AmlOpcode; TYPE_1__ Value; } ;
struct TYPE_7__ {TYPE_2__ Common; } ;
typedef int BOOLEAN ;
typedef TYPE_3__ ACPI_PARSE_OBJECT ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static BOOLEAN
FUNC_0 (
    ACPI_PARSE_OBJECT *VAR_3)
{

    if (!VAR_3)
    {
        return (VAR_1);
    }

    if ((VAR_3->Common.AmlOpcode == VAR_0) &&
        (VAR_3->Common.Value.Arg == ((void*)0)))
    {
        return (VAR_1);
    }

    return (VAR_2);
}
