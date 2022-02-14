
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


struct TYPE_24__ {scalar_t__ Value; } ;
struct TYPE_23__ {scalar_t__ Type; } ;
struct TYPE_28__ {TYPE_2__ Integer; TYPE_1__ Common; } ;
struct TYPE_27__ {TYPE_4__* ControlState; int Op; TYPE_6__** Operands; } ;
struct TYPE_25__ {scalar_t__ State; int Value; } ;
struct TYPE_26__ {TYPE_3__ Common; } ;
typedef TYPE_5__ ACPI_WALK_STATE ;
typedef int ACPI_STATUS ;
typedef TYPE_6__ ACPI_OPERAND_OBJECT ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,TYPE_5__*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (TYPE_6__*,TYPE_5__*) ;
 int FUNC_6 (TYPE_5__*,int ,int ) ;
 int FUNC_7 (TYPE_6__*,TYPE_5__*,int ) ;
 int FUNC_8 (TYPE_6__**,TYPE_5__*) ;
 int FUNC_9 (TYPE_6__*,TYPE_6__**,int ) ;
 int FUNC_10 (TYPE_6__**,TYPE_5__*) ;
 int FUNC_11 (TYPE_6__*) ;
 int FUNC_12 (TYPE_6__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_13 (int ) ;

ACPI_STATUS
FUNC_14 (
    ACPI_WALK_STATE *VAR_12,
    ACPI_OPERAND_OBJECT *VAR_13)
{
    ACPI_STATUS VAR_14 = VAR_8;
    ACPI_OPERAND_OBJECT *VAR_15;
    ACPI_OPERAND_OBJECT *VAR_16 = ((void*)0);


    FUNC_4 (VAR_9, VAR_12);


    VAR_12->ControlState->Common.State = 0;

    if (VAR_13)
    {
        VAR_14 = FUNC_8 (&VAR_15, VAR_12);
        if (FUNC_3 (VAR_14))
        {
            FUNC_2 ((VAR_7, VAR_14,
                "Could not get result from predicate evaluation"));

            FUNC_13 (VAR_14);
        }
    }
    else
    {
        VAR_14 = FUNC_6 (VAR_12, VAR_12->Op, 0);
        if (FUNC_3 (VAR_14))
        {
            FUNC_13 (VAR_14);
        }

        VAR_14 = FUNC_10 (&VAR_12->Operands [0], VAR_12);
        if (FUNC_3 (VAR_14))
        {
            FUNC_13 (VAR_14);
        }

        VAR_15 = VAR_12->Operands [0];
    }

    if (!VAR_15)
    {
        FUNC_1 ((VAR_7,
            "No predicate ObjDesc=%p State=%p",
            VAR_15, VAR_12));

        FUNC_13 (VAR_4);
    }





    VAR_14 = FUNC_9 (VAR_15, &VAR_16,
        VAR_2);
    if (FUNC_3 (VAR_14))
    {
        goto Cleanup;
    }

    if (VAR_16->Common.Type != VAR_3)
    {
        FUNC_1 ((VAR_7,
            "Bad predicate (not an integer) ObjDesc=%p State=%p Type=0x%X",
            VAR_15, VAR_12, VAR_15->Common.Type));

        VAR_14 = VAR_5;
        goto Cleanup;
    }



    (void) FUNC_11 (VAR_16);





    if (VAR_16->Integer.Value)
    {
        VAR_12->ControlState->Common.Value = VAR_11;
    }
    else
    {




        VAR_12->ControlState->Common.Value = VAR_10;
        VAR_14 = VAR_6;
    }



    (void) FUNC_7 (VAR_16, VAR_12, VAR_11);


Cleanup:

    FUNC_0 ((VAR_1,
        "Completed a predicate eval=%X Op=%p\n",
        VAR_12->ControlState->Common.Value, VAR_12->Op));



    FUNC_5 (VAR_16, VAR_12);





    if (VAR_16 != VAR_15)
    {
        FUNC_12 (VAR_16);
    }
    FUNC_12 (VAR_15);

    VAR_12->ControlState->Common.State = VAR_0;
    FUNC_13 (VAR_14);
}
