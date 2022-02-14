
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_12__ {int Flags; } ;
struct TYPE_10__ {int AmlOpcode; TYPE_2__* Parent; int DisasmOpcode; } ;
struct TYPE_11__ {TYPE_3__ Common; } ;
struct TYPE_8__ {int const AmlOpcode; } ;
struct TYPE_9__ {TYPE_1__ Common; } ;
typedef TYPE_4__ ACPI_PARSE_OBJECT ;
typedef TYPE_5__ ACPI_OPCODE_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;






 int VAR_3 ;
 TYPE_5__* FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

UINT32
FUNC_1 (
    ACPI_PARSE_OBJECT *VAR_7)
{
    const ACPI_OPCODE_INFO *VAR_8;


    if (!VAR_7)
    {
        return (VAR_5);
    }

    switch (VAR_7->Common.AmlOpcode)
    {
    case 141:

        return (VAR_4);

    case 135:
    case 142:
    case 131:
    case 132:
    case 133:
    case 130:
    case 138:
    case 128:
    case 139:
    case 137:
    case 144:

        return (VAR_6 | VAR_4);

    case 143:

        if ((VAR_7->Common.DisasmOpcode == VAR_1) ||
            (VAR_7->Common.DisasmOpcode == VAR_2) ||
            (VAR_7->Common.DisasmOpcode == VAR_0))
        {
            return (VAR_5);
        }



    case 134:
    case 129:

        return (VAR_6 | VAR_4);

    case 140:

        return (VAR_6);

    case 136:

        if (VAR_7->Common.Parent &&
            ((VAR_7->Common.Parent->Common.AmlOpcode == 134) ||
             (VAR_7->Common.Parent->Common.AmlOpcode == 129)))
        {


            return (VAR_5);
        }



    default:

        VAR_8 = FUNC_0 (VAR_7->Common.AmlOpcode);
        if (VAR_8->Flags & VAR_3)
        {
            return (VAR_6);
        }

        return (VAR_5);
    }
}
