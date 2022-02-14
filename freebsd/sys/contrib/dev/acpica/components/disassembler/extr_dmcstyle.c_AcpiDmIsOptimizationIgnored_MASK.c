
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_3__* Arg; } ;
struct TYPE_8__ {int AmlOpcode; int DisasmFlags; TYPE_3__* Next; TYPE_1__ Value; } ;
struct TYPE_9__ {TYPE_2__ Common; } ;
typedef int BOOLEAN ;
typedef TYPE_3__ ACPI_PARSE_OBJECT ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static BOOLEAN
FUNC_1 (
    ACPI_PARSE_OBJECT *VAR_4,
    ACPI_PARSE_OBJECT *VAR_5)
{
    ACPI_PARSE_OBJECT *VAR_6;
    ACPI_PARSE_OBJECT *VAR_7;
    ACPI_PARSE_OBJECT *VAR_8;




    if (VAR_1)
    {
        return (VAR_2);
    }







    switch (VAR_5->Common.AmlOpcode)
    {
    case 139:
    case 128:
    case 131:
    case 132:
    case 130:
    case 129:
    case 138:
    case 136:
    case 135:
    case 133:



        VAR_6 = VAR_5->Common.Value.Arg;
        VAR_7 = VAR_6->Common.Next;
        VAR_8 = VAR_7->Common.Next;

        if (!FUNC_0 (VAR_8))
        {
            VAR_4->Common.DisasmFlags |= VAR_0;
            return (VAR_3);
        }
        break;

    case 134:



        VAR_6 = VAR_5->Common.Value.Arg;
        VAR_7 = VAR_6->Common.Next;
        VAR_8 = VAR_7->Common.Next;

        if (!FUNC_0 (VAR_8) ||
            !FUNC_0 (VAR_8->Common.Next))
        {
            VAR_4->Common.DisasmFlags |= VAR_0;
            return (VAR_3);
        }
        break;

    case 137:



        VAR_6 = VAR_5->Common.Value.Arg;
        VAR_8 = VAR_6->Common.Next;

        if (!FUNC_0 (VAR_8))
        {
            VAR_4->Common.DisasmFlags |= VAR_0;
            return (VAR_3);
        }
        break;

    default:
        break;
    }

    return (VAR_2);
}
