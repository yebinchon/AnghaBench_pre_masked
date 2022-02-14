
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int UINT8 ;
typedef scalar_t__ UINT32 ;
struct TYPE_7__ {scalar_t__ Integer; TYPE_4__* Arg; } ;
struct TYPE_8__ {int DisasmFlags; TYPE_2__ Value; TYPE_4__* Next; } ;
struct TYPE_6__ {int* Data; } ;
struct TYPE_9__ {TYPE_3__ Common; TYPE_1__ Named; } ;
typedef int BOOLEAN ;
typedef TYPE_4__ ACPI_PARSE_OBJECT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

BOOLEAN
FUNC_0 (
    ACPI_PARSE_OBJECT *VAR_4)
{
    UINT8 *VAR_5;
    UINT32 VAR_6;
    ACPI_PARSE_OBJECT *VAR_7;
    ACPI_PARSE_OBJECT *VAR_8;




    VAR_7 = VAR_4->Common.Value.Arg;



    VAR_8 = VAR_7->Common.Next;
    if (!VAR_8)
    {
        return (VAR_1);
    }



    VAR_5 = VAR_8->Named.Data;
    VAR_6 = (UINT32) VAR_8->Common.Value.Integer;



    if (VAR_6 != VAR_3)
    {
        return (VAR_1);
    }



    if (((VAR_5[7] & 0xF0) == 0x00) ||
        ((VAR_5[7] & 0xF0) > 0x50) ||
        ((VAR_5[8] & 0xF0) < 0x80) ||
        ((VAR_5[8] & 0xF0) > 0xB0))
    {
        return (VAR_1);
    }



    VAR_7->Common.DisasmFlags |= VAR_0;
    return (VAR_2);
}
