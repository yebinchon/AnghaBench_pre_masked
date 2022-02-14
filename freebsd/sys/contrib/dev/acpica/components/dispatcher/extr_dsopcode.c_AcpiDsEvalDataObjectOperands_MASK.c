
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_8__ ;
typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef scalar_t__ UINT32 ;
struct TYPE_24__ {scalar_t__ Value; } ;
struct TYPE_30__ {TYPE_2__ Integer; } ;
struct TYPE_23__ {int Arg; } ;
struct TYPE_27__ {int AmlOpcode; TYPE_4__* Parent; TYPE_1__ Value; } ;
struct TYPE_29__ {TYPE_5__ Common; } ;
struct TYPE_28__ {int OperandIndex; int NumOperands; TYPE_8__* ResultObj; TYPE_8__** Operands; int Opcode; } ;
struct TYPE_25__ {int const AmlOpcode; } ;
struct TYPE_26__ {TYPE_3__ Common; } ;
typedef TYPE_6__ ACPI_WALK_STATE ;
typedef int ACPI_STATUS ;
typedef TYPE_7__ ACPI_PARSE_OBJECT ;
typedef TYPE_8__ ACPI_OPERAND_OBJECT ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 scalar_t__ VAR_3 ;


 int FUNC_4 (TYPE_6__*,TYPE_7__*,scalar_t__,TYPE_8__**) ;
 int FUNC_5 (TYPE_6__*,TYPE_7__*,scalar_t__,TYPE_8__**) ;
 int FUNC_6 (TYPE_6__*,int ,int) ;
 int FUNC_7 (int,TYPE_6__*) ;
 int FUNC_8 (int ,TYPE_8__**,TYPE_6__*) ;
 int FUNC_9 (TYPE_8__*) ;
 int VAR_4 ;
 int FUNC_10 (int ) ;

ACPI_STATUS
FUNC_11 (
    ACPI_WALK_STATE *VAR_5,
    ACPI_PARSE_OBJECT *VAR_6,
    ACPI_OPERAND_OBJECT *VAR_7)
{
    ACPI_STATUS VAR_8;
    ACPI_OPERAND_OBJECT *VAR_9;
    UINT32 VAR_10;


    FUNC_2 (VAR_4);
    VAR_5->OperandIndex = VAR_5->NumOperands;



    if (!VAR_6->Common.Value.Arg)
    {
        FUNC_0 ((VAR_1,
            "Missing child while evaluating opcode %4.4X, Op %p",
            VAR_6->Common.AmlOpcode, VAR_6));
        FUNC_10 (VAR_2);
    }

    VAR_8 = FUNC_6 (VAR_5, VAR_6->Common.Value.Arg, 1);
    if (FUNC_1 (VAR_8))
    {
        FUNC_10 (VAR_8);
    }

    VAR_8 = FUNC_8 (VAR_5->Opcode,
        &(VAR_5->Operands [VAR_5->NumOperands -1]),
        VAR_5);
    if (FUNC_1 (VAR_8))
    {
        FUNC_10 (VAR_8);
    }



    VAR_9 = VAR_5->Operands [VAR_5->NumOperands - 1];
    VAR_10 = (UINT32) VAR_9->Integer.Value;



    VAR_8 = FUNC_7 (1, VAR_5);
    if (FUNC_1 (VAR_8))
    {
        FUNC_10 (VAR_8);
    }

    FUNC_9 (VAR_9);




    switch (VAR_6->Common.AmlOpcode)
    {
    case 130:

        VAR_8 = FUNC_4 (
            VAR_5, VAR_6, VAR_10, &VAR_7);
        break;

    case 129:
    case 128:

        VAR_8 = FUNC_5 (
            VAR_5, VAR_6, VAR_10, &VAR_7);
        break;

    default:

        FUNC_10 (VAR_0);
    }

    if (FUNC_3 (VAR_8))
    {





        if ((!VAR_6->Common.Parent) ||
            ((VAR_6->Common.Parent->Common.AmlOpcode != 129) &&
             (VAR_6->Common.Parent->Common.AmlOpcode != 128) &&
             (VAR_6->Common.Parent->Common.AmlOpcode != VAR_3)))
        {
            VAR_5->ResultObj = VAR_7;
        }
    }

    FUNC_10 (VAR_8);
}
