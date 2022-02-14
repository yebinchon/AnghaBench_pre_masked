
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int UINT8 ;
typedef int UINT32 ;
struct TYPE_7__ {scalar_t__ Integer; } ;
struct TYPE_8__ {int DisasmFlags; TYPE_1__ Value; } ;
struct TYPE_9__ {TYPE_2__ Common; } ;
typedef TYPE_3__ ACPI_PARSE_OBJECT ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 TYPE_3__* FUNC_1 (int *,TYPE_3__*) ;

void
FUNC_2 (
    ACPI_PARSE_OBJECT *VAR_1)
{
    UINT32 VAR_2;
    UINT32 VAR_3;




    VAR_1 = FUNC_1 (((void*)0), VAR_1);
    VAR_2 = (UINT8) VAR_1->Common.Value.Integer;
    VAR_3 = VAR_2 & 0x07;



    VAR_1->Common.DisasmFlags |= VAR_0;



    FUNC_0 (", %u, ", VAR_3);



    if (!(VAR_2 & 0x08))
    {
        FUNC_0 ("Not");
    }

    FUNC_0 ("Serialized");



    if (VAR_2 & 0xF0)
    {
        FUNC_0 (", %u", VAR_2 >> 4);
    }
}
