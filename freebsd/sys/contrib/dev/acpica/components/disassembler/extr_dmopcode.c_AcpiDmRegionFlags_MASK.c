
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int UINT8 ;
struct TYPE_7__ {scalar_t__ Integer; } ;
struct TYPE_8__ {TYPE_1__ Value; int DisasmFlags; } ;
struct TYPE_9__ {TYPE_2__ Common; } ;
typedef TYPE_3__ ACPI_PARSE_OBJECT ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 TYPE_3__* FUNC_2 (int *,TYPE_3__*) ;

void
FUNC_3 (
    ACPI_PARSE_OBJECT *VAR_1)
{



    VAR_1 = FUNC_2 (((void*)0), VAR_1);



    VAR_1->Common.DisasmFlags |= VAR_0;

    FUNC_1 (", ");
    FUNC_0 ((UINT8) VAR_1->Common.Value.Integer);
}
