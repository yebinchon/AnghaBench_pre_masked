
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_23__ {int Class; } ;
struct TYPE_20__ {scalar_t__ AmlOpcode; TYPE_5__* Parent; } ;
struct TYPE_22__ {TYPE_6__ Common; } ;
struct TYPE_21__ {TYPE_3__* ControlState; int ResultObj; } ;
struct TYPE_18__ {scalar_t__ AmlOpcode; } ;
struct TYPE_19__ {TYPE_4__ Common; } ;
struct TYPE_16__ {TYPE_8__* PredicateOp; } ;
struct TYPE_15__ {int State; } ;
struct TYPE_17__ {TYPE_2__ Control; TYPE_1__ Common; } ;
typedef int BOOLEAN ;
typedef TYPE_7__ ACPI_WALK_STATE ;
typedef TYPE_8__ ACPI_PARSE_OBJECT ;
typedef TYPE_9__ ACPI_OPCODE_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_8__*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;



 int VAR_5 ;
 scalar_t__ VAR_6 ;

 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;

 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;

 int FUNC_3 (int ,TYPE_7__*,int ) ;
 TYPE_9__* FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_6 (int ) ;

BOOLEAN
FUNC_7 (
    ACPI_PARSE_OBJECT *VAR_15,
    ACPI_WALK_STATE *VAR_16)
{
    const ACPI_OPCODE_INFO *VAR_17;

    FUNC_2 (VAR_12, VAR_15);




    if (!VAR_15)
    {
        FUNC_1 ((VAR_2, "Null Op"));
        FUNC_6 (VAR_14);
    }
    (void) FUNC_3 (VAR_16->ResultObj, VAR_16, VAR_14);
    if ((!VAR_15->Common.Parent) ||
        (VAR_15->Common.Parent->Common.AmlOpcode == VAR_10))
    {


        FUNC_0 ((VAR_1,
            "At Method level, result of [%s] not used\n",
            FUNC_5 (VAR_15->Common.AmlOpcode)));
        FUNC_6 (VAR_13);
    }



    VAR_17 = FUNC_4 (VAR_15->Common.Parent->Common.AmlOpcode);
    if (VAR_17->Class == VAR_5)
    {
        FUNC_1 ((VAR_2,
            "Unknown parent opcode Op=%p", VAR_15));
        FUNC_6 (VAR_13);
    }







    switch (VAR_17->Class)
    {
    case 133:

        switch (VAR_15->Common.Parent->Common.AmlOpcode)
        {
        case 129:



            goto ResultUsed;

        case 130:
        case 128:




            if ((VAR_16->ControlState->Common.State ==
                    VAR_0) &&
                (VAR_16->ControlState->Control.PredicateOp == VAR_15))
            {
                goto ResultUsed;
            }
            break;

        default:



            break;
        }



        goto ResultNotUsed;

    case 132:




        goto ResultUsed;

    case 131:

        if ((VAR_15->Common.Parent->Common.AmlOpcode == VAR_9) ||
            (VAR_15->Common.Parent->Common.AmlOpcode == VAR_6) ||
            (VAR_15->Common.Parent->Common.AmlOpcode == VAR_8) ||
            (VAR_15->Common.Parent->Common.AmlOpcode == VAR_4) ||
            (VAR_15->Common.Parent->Common.AmlOpcode == VAR_11) ||
            (VAR_15->Common.Parent->Common.AmlOpcode == VAR_7) ||
            (VAR_15->Common.Parent->Common.AmlOpcode == VAR_3))
        {




            goto ResultUsed;
        }

        goto ResultNotUsed;

    default:




        goto ResultUsed;
    }


ResultUsed:
    FUNC_0 ((VAR_1,
        "Result of [%s] used by Parent [%s] Op=%p\n",
        FUNC_5 (VAR_15->Common.AmlOpcode),
        FUNC_5 (VAR_15->Common.Parent->Common.AmlOpcode), VAR_15));

    FUNC_6 (VAR_14);


ResultNotUsed:
    FUNC_0 ((VAR_1,
        "Result of [%s] not used by Parent [%s] Op=%p\n",
        FUNC_5 (VAR_15->Common.AmlOpcode),
        FUNC_5 (VAR_15->Common.Parent->Common.AmlOpcode), VAR_15));

    FUNC_6 (VAR_13);
}
