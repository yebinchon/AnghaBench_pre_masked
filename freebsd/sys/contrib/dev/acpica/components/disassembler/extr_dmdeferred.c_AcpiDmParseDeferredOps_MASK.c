
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {int Flags; } ;
struct TYPE_12__ {int AmlOpcode; } ;
struct TYPE_11__ {int Length; int Data; } ;
struct TYPE_13__ {TYPE_2__ Common; TYPE_1__ Named; } ;
typedef int ACPI_STATUS ;
typedef TYPE_3__ ACPI_PARSE_OBJECT ;
typedef TYPE_4__ ACPI_OPCODE_INFO ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int FUNC_3 (TYPE_3__*,int ,int ) ;
 TYPE_3__* FUNC_4 (TYPE_3__*,TYPE_3__*) ;
 TYPE_4__* FUNC_5 (int) ;
 int VAR_3 ;
 int FUNC_6 (int ) ;

ACPI_STATUS
FUNC_7 (
    ACPI_PARSE_OBJECT *VAR_4)
{
    const ACPI_OPCODE_INFO *VAR_5;
    ACPI_PARSE_OBJECT *VAR_6 = VAR_4;
    ACPI_STATUS VAR_7;


    FUNC_2 (VAR_3);




    while (VAR_6)
    {
        VAR_5 = FUNC_5 (VAR_6->Common.AmlOpcode);
        if (!(VAR_5->Flags & VAR_2))
        {
            VAR_6 = FUNC_4 (VAR_4, VAR_6);
            continue;
        }



        switch (VAR_6->Common.AmlOpcode)
        {
        case 131:
        case 139:
        case 130:
        case 128:

            VAR_7 = FUNC_3 (
                VAR_6, VAR_6->Named.Data, VAR_6->Named.Length);
            if (FUNC_1 (VAR_7))
            {
                FUNC_6 (VAR_7);
            }
            break;



        case 129:
        case 132:
        case 134:
        case 136:
        case 133:
        case 137:
        case 138:
        case 135:
        case 140:

            break;

        default:

            FUNC_0 ((VAR_0, "Unhandled deferred AML opcode [0x%.4X]",
                 VAR_6->Common.AmlOpcode));
            break;
        }

        VAR_6 = FUNC_4 (VAR_4, VAR_6);
    }

    FUNC_6 (VAR_1);
}
