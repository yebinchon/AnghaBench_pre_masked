
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef scalar_t__ UINT8 ;
struct TYPE_23__ {scalar_t__ Type; } ;
struct TYPE_27__ {TYPE_3__ Common; } ;
struct TYPE_24__ {int Flags; TYPE_2__* Parent; } ;
struct TYPE_26__ {TYPE_4__ Common; } ;
struct TYPE_25__ {TYPE_7__* ResultObj; TYPE_7__** Operands; TYPE_6__* Op; } ;
struct TYPE_21__ {scalar_t__ AmlOpcode; } ;
struct TYPE_22__ {TYPE_1__ Common; } ;
typedef TYPE_5__ ACPI_WALK_STATE ;
typedef int ACPI_STATUS ;
typedef TYPE_6__ ACPI_PARSE_OBJECT ;
typedef TYPE_7__ ACPI_OPERAND_OBJECT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_5__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (TYPE_5__*,TYPE_6__*,int ) ;
 int FUNC_4 (int,TYPE_5__*) ;
 int FUNC_5 (TYPE_7__*,TYPE_5__*) ;
 int FUNC_6 (TYPE_7__**,TYPE_5__*) ;
 int FUNC_7 (TYPE_7__*,TYPE_7__**,TYPE_5__*) ;
 int FUNC_8 (TYPE_7__*) ;
 int VAR_7 ;
 int FUNC_9 (int ) ;

ACPI_STATUS
FUNC_10 (
    ACPI_WALK_STATE *VAR_8)
{
    ACPI_STATUS VAR_9 = VAR_3;
    ACPI_PARSE_OBJECT *VAR_10 = VAR_8->Op;
    ACPI_OPERAND_OBJECT **VAR_11 = &VAR_8->Operands[0];
    ACPI_OPERAND_OBJECT *VAR_12;
    UINT8 VAR_13;


    FUNC_1 (VAR_7, VAR_8);


    if (!VAR_10->Common.Parent)
    {


        goto Exit;
    }

    if ((VAR_10->Common.Parent->Common.AmlOpcode == VAR_4) ||
        (VAR_10->Common.Parent->Common.AmlOpcode == VAR_6) ||
        (VAR_10->Common.Parent->Common.AmlOpcode == VAR_5))
    {


        goto Exit;
    }

    VAR_9 = FUNC_3 (VAR_8, VAR_10, 0);
    if (FUNC_0 (VAR_9))
    {
        goto Exit;
    }

    if (VAR_10->Common.Flags & VAR_1)
    {
        VAR_12 = *VAR_11;
        goto PushResult;
    }

    VAR_13 = (*VAR_11)->Common.Type;

    VAR_9 = FUNC_6 (VAR_11, VAR_8);
    if (FUNC_0 (VAR_9))
    {
        goto Exit;
    }

    if (VAR_13 == VAR_2)
    {


        FUNC_8 (*VAR_11);

        VAR_9 = FUNC_7 (
            *VAR_11, &VAR_12, VAR_8);
        if (FUNC_0 (VAR_9))
        {
            goto Exit;
        }
    }
    else
    {




        VAR_12 = *VAR_11;
    }



    VAR_9 = FUNC_4 (1, VAR_8);
    if (FUNC_0 (VAR_9))
    {
        VAR_8->ResultObj = VAR_12;
        goto Exit;
    }

PushResult:

    VAR_8->ResultObj = VAR_12;

    VAR_9 = FUNC_5 (VAR_8->ResultObj, VAR_8);
    if (FUNC_2 (VAR_9))
    {


        VAR_10->Common.Flags |= VAR_0;
    }

Exit:

    FUNC_9 (VAR_9);
}
