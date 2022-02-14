
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int Path; } ;
struct TYPE_7__ {scalar_t__ Integer; } ;
struct TYPE_8__ {TYPE_1__ Value; } ;
struct TYPE_10__ {TYPE_3__ Named; TYPE_2__ Common; } ;
typedef TYPE_4__ ACPI_PARSE_OBJECT ;
typedef int ACPI_OBJECT_TYPE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,...) ;

void
FUNC_4 (
    ACPI_PARSE_OBJECT *VAR_0,
    ACPI_PARSE_OBJECT *VAR_1)
{
    FUNC_3 ("External (");
    FUNC_2 (VAR_0->Named.Path);
    FUNC_3 ("%s)",
        FUNC_1 ((ACPI_OBJECT_TYPE) VAR_1->Common.Value.Integer));
    FUNC_0 (VAR_0->Named.Path);
    FUNC_3 ("\n");
}
