
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int Flags; } ;
struct TYPE_8__ {TYPE_3__* Arg; } ;
struct TYPE_9__ {scalar_t__ AmlOpcode; scalar_t__ Node; int DisasmFlags; TYPE_3__* Next; TYPE_1__ Value; } ;
struct TYPE_10__ {TYPE_2__ Common; } ;
typedef scalar_t__ BOOLEAN ;
typedef TYPE_3__ ACPI_PARSE_OBJECT ;
typedef TYPE_4__ ACPI_OPCODE_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static BOOLEAN
FUNC_1 (
    ACPI_PARSE_OBJECT *VAR_4,
    ACPI_PARSE_OBJECT *VAR_5,
    BOOLEAN VAR_6)
{
    const ACPI_OPCODE_INFO *VAR_7;
    BOOLEAN VAR_8;






    if (VAR_4->Common.AmlOpcode != VAR_5->Common.AmlOpcode)
    {
        return (VAR_2);
    }



    if (VAR_4->Common.Node != VAR_5->Common.Node)
    {
        return (VAR_2);
    }



    VAR_7 = FUNC_0 (VAR_5->Common.AmlOpcode);
    if (VAR_7->Flags & VAR_1)
    {
        VAR_8 = FUNC_1 (VAR_4->Common.Value.Arg,
            VAR_5->Common.Value.Arg, VAR_2);
        if (!VAR_8)
        {
            return (VAR_2);
        }
    }



    if ((!VAR_6) &&
         VAR_4->Common.Next)
    {
        VAR_8 = FUNC_1 (VAR_4->Common.Next,
            VAR_5->Common.Next, VAR_2);
        if (!VAR_8)
        {
            return (VAR_2);
        }
    }



    if (VAR_6)
    {
        VAR_5->Common.DisasmFlags |= VAR_0;
    }
    return (VAR_3);
}
