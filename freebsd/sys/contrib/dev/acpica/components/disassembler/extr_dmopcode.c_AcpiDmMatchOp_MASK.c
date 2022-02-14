
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {void* DisasmOpcode; TYPE_2__* Next; } ;
struct TYPE_7__ {TYPE_1__ Common; } ;
typedef TYPE_2__ ACPI_PARSE_OBJECT ;


 void* VAR_0 ;
 TYPE_2__* FUNC_0 (int *,TYPE_2__*) ;

void
FUNC_1 (
    ACPI_PARSE_OBJECT *VAR_1)
{
    ACPI_PARSE_OBJECT *VAR_2;


    VAR_2 = FUNC_0 (((void*)0), VAR_1);
    VAR_2 = VAR_2->Common.Next;

    if (!VAR_2)
    {


        return;
    }



    VAR_2->Common.DisasmOpcode = VAR_0;

    VAR_2 = VAR_2->Common.Next;
    VAR_2 = VAR_2->Common.Next;
    VAR_2->Common.DisasmOpcode = VAR_0;
}
