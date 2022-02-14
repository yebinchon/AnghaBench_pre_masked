
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ Next; } ;
struct TYPE_5__ {TYPE_1__ Common; } ;
typedef TYPE_2__ ACPI_PARSE_OBJECT ;


 int FUNC_0 (char*) ;

void
FUNC_1 (
    ACPI_PARSE_OBJECT *VAR_0)
{

    if (VAR_0->Common.Next)
    {
        FUNC_0 (", ");
    }
}
