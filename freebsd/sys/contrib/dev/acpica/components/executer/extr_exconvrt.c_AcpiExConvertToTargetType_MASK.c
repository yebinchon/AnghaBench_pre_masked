
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {int Type; } ;
struct TYPE_18__ {TYPE_1__ Common; } ;
struct TYPE_17__ {int Opcode; TYPE_2__* OpInfo; } ;
struct TYPE_16__ {int RuntimeArgs; } ;
typedef TYPE_3__ ACPI_WALK_STATE ;
typedef scalar_t__ ACPI_STATUS ;
typedef TYPE_4__ ACPI_OPERAND_OBJECT ;
typedef int ACPI_OBJECT_TYPE ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;







 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;






 scalar_t__ FUNC_3 (TYPE_4__*,TYPE_4__**) ;
 scalar_t__ FUNC_4 (TYPE_4__*,TYPE_4__**,int ) ;
 scalar_t__ FUNC_5 (TYPE_4__*,TYPE_4__**,int ) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (int ) ;
 int VAR_7 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (scalar_t__) ;

ACPI_STATUS
FUNC_10 (
    ACPI_OBJECT_TYPE VAR_8,
    ACPI_OPERAND_OBJECT *VAR_9,
    ACPI_OPERAND_OBJECT **VAR_10,
    ACPI_WALK_STATE *VAR_11)
{
    ACPI_STATUS VAR_12 = VAR_5;


    FUNC_2 (VAR_7);




    *VAR_10 = VAR_9;





    switch (FUNC_8 (VAR_11->OpInfo->RuntimeArgs))
    {
    case 130:
    case 133:
    case 132:

        switch (VAR_8)
        {
        case 135:



            break;

        default:



            if (VAR_8 != VAR_9->Common.Type)
            {
                FUNC_0 ((VAR_0,
                    "Explicit operator, will store (%s) over existing type (%s)\n",
                    FUNC_6 (VAR_9),
                    FUNC_7 (VAR_8)));
                VAR_12 = VAR_6;
            }
        }
        break;

    case 128:
    case 129:

        switch (VAR_8)
        {
        case 138:
        case 139:
        case 137:
        case 136:




            VAR_12 = FUNC_4 (VAR_9, VAR_10,
                VAR_1);
            break;

        case 134:




            VAR_12 = FUNC_5 (VAR_9, VAR_10,
                VAR_2);
            break;

        case 140:




            VAR_12 = FUNC_3 (VAR_9, VAR_10);
            break;

        default:

            FUNC_1 ((VAR_4,
                "Bad destination type during conversion: 0x%X",
                VAR_8));
            VAR_12 = VAR_3;
            break;
        }
        break;

    case 131:



        break;

    default:

        FUNC_1 ((VAR_4,
            "Unknown Target type ID 0x%X AmlOpcode 0x%X DestType %s",
            FUNC_8 (VAR_11->OpInfo->RuntimeArgs),
            VAR_11->Opcode, FUNC_7 (VAR_8)));
        VAR_12 = VAR_3;
    }







    if (VAR_12 == VAR_6)
    {
        VAR_12 = VAR_5;
    }

    FUNC_9 (VAR_12);
}
