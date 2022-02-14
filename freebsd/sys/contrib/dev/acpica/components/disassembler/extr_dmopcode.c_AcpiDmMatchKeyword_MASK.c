
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ UINT32 ;
struct TYPE_5__ {scalar_t__ Integer; } ;
struct TYPE_6__ {TYPE_1__ Value; } ;
struct TYPE_7__ {TYPE_2__ Common; } ;
typedef size_t ACPI_SIZE ;
typedef TYPE_3__ ACPI_PARSE_OBJECT ;


 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1 (
    ACPI_PARSE_OBJECT *VAR_2)
{

    if (((UINT32) VAR_2->Common.Value.Integer) > VAR_0)
    {
        FUNC_0 ("/* Unknown Match Keyword encoding */");
    }
    else
    {
        FUNC_0 ("%s",
            VAR_1[(ACPI_SIZE) VAR_2->Common.Value.Integer]);
    }
}
