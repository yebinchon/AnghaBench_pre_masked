
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int AmlOpcode; } ;
struct TYPE_9__ {TYPE_1__ Asl; } ;
typedef TYPE_2__ ACPI_PARSE_OBJECT ;
 int FUNC_0 (TYPE_2__*,TYPE_2__*) ;
 TYPE_2__* FUNC_1 (TYPE_2__*,int) ;

__attribute__((used)) static void
FUNC_2 (
    ACPI_PARSE_OBJECT *VAR_0)
{
    ACPI_PARSE_OBJECT *VAR_1 = ((void*)0);


    switch (VAR_0->Asl.AmlOpcode)
    {
    case 141:
    case 140:
    case 139:
    case 138:
    case 135:
    case 134:
    case 130:
    case 132:
    case 131:
    case 128:
    case 133:
    case 129:

        VAR_1 = FUNC_1 (VAR_0, 0);
        break;

    case 149:

        VAR_1 = FUNC_1 (VAR_0, 1);
        break;

    case 147:
    case 146:
    case 142:
    case 145:
    case 143:

        VAR_1 = FUNC_1 (VAR_0, 2);
        break;

    case 144:

        VAR_1 = FUNC_1 (VAR_0, 3);
        break;

    case 148:
    case 136:
    case 137:

        return;

    default:

        return;
    }

    if (VAR_1)
    {
        FUNC_0 (VAR_0, VAR_1);
    }
}
