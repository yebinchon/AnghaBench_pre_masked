
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int DisasmFlags; int AmlOpcode; } ;
struct TYPE_6__ {TYPE_1__ Common; } ;
typedef TYPE_2__ ACPI_PARSE_OBJECT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;





 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,int ,int *,int ) ;
 int VAR_5 ;
 int FUNC_1 (char*) ;

void
FUNC_2 (
    ACPI_PARSE_OBJECT *VAR_6)
{



    if (!VAR_5)
    {
        FUNC_1 (")");
        FUNC_0 (VAR_6, VAR_4, ((void*)0), 0);
        return;
    }

    if (VAR_6->Common.DisasmFlags & VAR_3)
    {
        FUNC_1 (")");
        FUNC_0 (VAR_6, VAR_4, ((void*)0), 0);
        return;
    }



    switch (VAR_6->Common.AmlOpcode)
    {
    case 148:
    case 128:
    case 132:
    case 142:
    case 133:
    case 131:
    case 130:
    case 147:
    case 145:
    case 144:
    case 139:
    case 138:
    case 137:
    case 136:
    case 134:



        if (VAR_6->Common.DisasmFlags & VAR_2)
        {
            FUNC_0 (VAR_6, VAR_4, ((void*)0), 0);
            return;
        }



        if (VAR_6->Common.DisasmFlags & VAR_0)
        {
            FUNC_1 (")");
        }
        break;

    case 140:



        if (VAR_6->Common.DisasmFlags & VAR_1)
        {
            FUNC_1 (")");
        }
        FUNC_0 (VAR_6, VAR_4, ((void*)0), 0);
        return;



    case 143:
    case 141:
    case 135:
    case 146:
    case 129:
        FUNC_0 (VAR_6, VAR_4, ((void*)0), 0);
        return;

    default:


        break;
    }

    FUNC_1 (")");
    FUNC_0 (VAR_6, VAR_4, ((void*)0), 0);

    return;
}
