
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_8__ {int Flags; } ;
struct TYPE_6__ {int AmlOpcode; } ;
struct TYPE_7__ {TYPE_1__ Common; } ;
typedef TYPE_2__ ACPI_PARSE_OBJECT ;
typedef TYPE_3__ ACPI_OPCODE_INFO ;







 int VAR_0 ;
 TYPE_3__* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;

UINT32
FUNC_1 (
    ACPI_PARSE_OBJECT *VAR_3)
{
    const ACPI_OPCODE_INFO *VAR_4;


    if (!VAR_3)
    {
        return (VAR_2);
    }

    switch (VAR_3->Common.AmlOpcode)
    {

    case 139:
    case 135:
    case 140:
    case 131:
    case 133:
    case 132:
    case 130:
    case 137:
    case 128:
    case 138:
    case 136:
    case 142:

        return (VAR_2);

    case 141:
    case 134:
    case 129:

        return (VAR_1);

    default:

        VAR_4 = FUNC_0 (VAR_3->Common.AmlOpcode);
        if (VAR_4->Flags & VAR_0)
        {
            return (VAR_1);
        }

        return (VAR_2);
    }
}
