
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT8 ;
typedef int UINT32 ;
struct TYPE_5__ {scalar_t__ Integer; } ;
struct TYPE_6__ {int DisasmFlags; TYPE_1__ Value; TYPE_3__* Next; } ;
struct TYPE_7__ {TYPE_2__ Common; } ;
typedef TYPE_3__ ACPI_PARSE_OBJECT ;


 int VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 (char*,int ) ;

void
FUNC_1 (
    ACPI_PARSE_OBJECT *VAR_4)
{
    UINT32 VAR_5;


    VAR_4 = VAR_4->Common.Next;
    VAR_5 = (UINT8) VAR_4->Common.Value.Integer;



    VAR_4->Common.DisasmFlags |= VAR_0;

    FUNC_0 ("%s, ", VAR_1 [VAR_5 & 0x07]);
    FUNC_0 ("%s, ", VAR_2 [(VAR_5 & 0x10) >> 4]);
    FUNC_0 ("%s)", VAR_3 [(VAR_5 & 0x60) >> 5]);
}
