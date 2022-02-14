
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ AmlOpcode; int ParseOpcode; } ;
struct TYPE_16__ {TYPE_1__ Asl; } ;
typedef TYPE_2__ ACPI_PARSE_OBJECT ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;

void
FUNC_11 (
    ACPI_PARSE_OBJECT *VAR_1)
{


    if (VAR_1->Asl.AmlOpcode == VAR_0)
    {
        return;
    }

    switch (VAR_1->Asl.ParseOpcode)
    {
    case 139:

        FUNC_3 (VAR_1);
        break;

    case 135:

        FUNC_7 (VAR_1);
        break;

    case 133:

        FUNC_8 (VAR_1);
        break;

    case 138:

        FUNC_4 (VAR_1);
        break;

    case 137:

        FUNC_5 (VAR_1);
        break;

    case 141:

        FUNC_1 (VAR_1);
        break;

    case 140:

        FUNC_2 (VAR_1);
        break;

    case 136:

        FUNC_6 (VAR_1);
        break;

    case 130:

        FUNC_9 (VAR_1);
        break;

    case 129:

        FUNC_10 (VAR_1);
        break;

    case 132:
    case 131:
    case 134:
    case 128:
    default:

        break;
    }



    FUNC_0 (VAR_1);
}
