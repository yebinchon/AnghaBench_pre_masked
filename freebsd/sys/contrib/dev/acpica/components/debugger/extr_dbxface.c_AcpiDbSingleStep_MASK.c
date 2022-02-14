
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ UINT32 ;
struct TYPE_17__ {scalar_t__ AmlOpcode; TYPE_6__* Next; int Aml; } ;
struct TYPE_19__ {TYPE_4__ Common; } ;
struct TYPE_14__ {int AmlStart; } ;
struct TYPE_18__ {scalar_t__ MethodBreakpoint; scalar_t__ UserBreakpoint; TYPE_3__* ControlState; TYPE_1__ ParserState; } ;
struct TYPE_15__ {scalar_t__ Value; } ;
struct TYPE_16__ {TYPE_2__ Common; } ;
typedef TYPE_5__ ACPI_WALK_STATE ;
typedef int ACPI_STATUS ;
typedef TYPE_6__ ACPI_PARSE_OBJECT ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (TYPE_5__*,TYPE_6__*) ;
 int FUNC_3 (TYPE_5__*,TYPE_6__*) ;
 scalar_t__ VAR_10 ;
 int FUNC_4 (TYPE_5__*,int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 void* VAR_11 ;
 void* VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 void* VAR_15 ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (scalar_t__) ;
 void* VAR_16 ;
 void* VAR_17 ;

ACPI_STATUS
FUNC_10 (
    ACPI_WALK_STATE *VAR_18,
    ACPI_PARSE_OBJECT *VAR_19,
    UINT32 VAR_20)
{
    ACPI_PARSE_OBJECT *VAR_21;
    ACPI_STATUS VAR_22 = VAR_4;
    UINT32 VAR_23;
    UINT32 VAR_24;


    FUNC_0 ();



    if (VAR_14 != FUNC_7 ())
    {
        return (VAR_4);
    }




    if (VAR_11)
    {
        VAR_11 = VAR_16;
        return (VAR_3);
    }

    VAR_24 = (UINT32) FUNC_1 (VAR_19->Common.Aml,
        VAR_18->ParserState.AmlStart);



    if (VAR_18->MethodBreakpoint &&
       (VAR_18->MethodBreakpoint <= VAR_24))
    {



        FUNC_8 ("***Break*** at AML offset %X\n", VAR_24);
        VAR_12 = VAR_17;
        VAR_15 = VAR_16;
        VAR_18->MethodBreakpoint = 0;
    }



    else if (VAR_18->UserBreakpoint &&
            (VAR_18->UserBreakpoint == VAR_24))
    {
        FUNC_8 ("***UserBreakpoint*** at AML offset %X\n",
            VAR_24);
        VAR_12 = VAR_17;
        VAR_15 = VAR_16;
        VAR_18->MethodBreakpoint = 0;
    }





    if (VAR_19->Common.AmlOpcode == VAR_8)
    {
        return (VAR_4);
    }

    switch (VAR_20)
    {
    case 128:
    case 129:

        return (VAR_4);

    default:


        break;
    }




    if ((VAR_13) ||
        (VAR_12) ||
        (VAR_10 & VAR_1))
    {
        if ((VAR_13) ||
            (VAR_10 & VAR_1))
        {
            FUNC_8 ("\nAML Debug: Next AML Opcode to execute:\n");
        }






        VAR_23 = VAR_10;
        VAR_10 &= ~(VAR_1 | VAR_0);
        VAR_21 = VAR_19->Common.Next;
        VAR_19->Common.Next = ((void*)0);
        FUNC_8 ("AML Opcode: %4.4X  %s\n", VAR_19->Common.AmlOpcode,
            FUNC_9 (VAR_19->Common.AmlOpcode));


        if ((VAR_19->Common.AmlOpcode == VAR_6) ||
            (VAR_19->Common.AmlOpcode == VAR_9))
        {
            if (VAR_18->ControlState->Common.Value)
            {
                FUNC_8 ("Predicate = [True], IF block was executed\n");
            }
            else
            {
                FUNC_8 ("Predicate = [False], Skipping IF block\n");
            }
        }
        else if (VAR_19->Common.AmlOpcode == VAR_5)
        {
            FUNC_8 ("Predicate = [False], ELSE block was executed\n");
        }



        VAR_19->Common.Next = VAR_21;
        FUNC_8 ("\n");
        if ((VAR_13) ||
            (VAR_10 & VAR_1))
        {
            FUNC_8 ("\n");
        }
        VAR_10 = VAR_23;
    }



    if (!VAR_12)
    {
        return (VAR_4);
    }





    if (VAR_15)
    {
        if (VAR_19->Common.AmlOpcode != VAR_7)
        {


            return (VAR_4);
        }



        VAR_15 = VAR_16;
    }





    if (VAR_19->Common.AmlOpcode == VAR_7)
    {


        VAR_12 = VAR_16;





        VAR_18->MethodBreakpoint = 1;
    }


    FUNC_6 ();
    VAR_22 = FUNC_3 (VAR_18, VAR_19);
    FUNC_5 ();



    return (VAR_22);
}
