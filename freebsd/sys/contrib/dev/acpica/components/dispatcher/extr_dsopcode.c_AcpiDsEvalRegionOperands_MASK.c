
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef scalar_t__ UINT32 ;
struct TYPE_22__ {int Ascii; } ;
struct TYPE_28__ {TYPE_3__ Name; } ;
struct TYPE_24__ {int Flags; scalar_t__ Length; scalar_t__ Address; int SpaceId; } ;
struct TYPE_23__ {scalar_t__ Value; } ;
struct TYPE_27__ {TYPE_5__ Region; TYPE_4__ Integer; } ;
struct TYPE_20__ {scalar_t__ Integer; TYPE_7__* Arg; } ;
struct TYPE_21__ {int AmlOpcode; TYPE_7__* Next; TYPE_1__ Value; TYPE_9__* Node; } ;
struct TYPE_26__ {TYPE_2__ Common; } ;
struct TYPE_25__ {int NumOperands; TYPE_8__** Operands; } ;
typedef TYPE_6__ ACPI_WALK_STATE ;
typedef int ACPI_STATUS ;
typedef scalar_t__ ACPI_PHYSICAL_ADDRESS ;
typedef TYPE_7__ ACPI_PARSE_OBJECT ;
typedef TYPE_8__ ACPI_OPERAND_OBJECT ;
typedef TYPE_9__ ACPI_NAMESPACE_NODE ;
typedef scalar_t__ ACPI_ADR_SPACE_TYPE ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,TYPE_7__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (TYPE_6__*,TYPE_7__*) ;
 int FUNC_6 (int ,int ,TYPE_6__*) ;
 TYPE_8__* FUNC_7 (TYPE_9__*) ;
 int FUNC_8 (int ,scalar_t__,scalar_t__,TYPE_9__*) ;
 int FUNC_9 (TYPE_8__*) ;
 int VAR_6 ;
 int FUNC_10 (int ) ;

ACPI_STATUS
FUNC_11 (
    ACPI_WALK_STATE *VAR_7,
    ACPI_PARSE_OBJECT *VAR_8)
{
    ACPI_STATUS VAR_9;
    ACPI_OPERAND_OBJECT *VAR_10;
    ACPI_OPERAND_OBJECT *VAR_11;
    ACPI_NAMESPACE_NODE *VAR_12;
    ACPI_PARSE_OBJECT *VAR_13;
    ACPI_ADR_SPACE_TYPE VAR_14;


    FUNC_3 (VAR_6, VAR_8);






    VAR_12 = VAR_8->Common.Node;



    VAR_13 = VAR_8->Common.Value.Arg;
    VAR_14 = (ACPI_ADR_SPACE_TYPE) VAR_13->Common.Value.Integer;



    VAR_13 = VAR_13->Common.Next;



    VAR_9 = FUNC_5 (VAR_7, VAR_13);
    if (FUNC_1 (VAR_9))
    {
        FUNC_10 (VAR_9);
    }



    VAR_9 = FUNC_6 (
        VAR_8->Common.AmlOpcode, VAR_2, VAR_7);
    if (FUNC_1 (VAR_9))
    {
        FUNC_10 (VAR_9);
    }

    VAR_10 = FUNC_7 (VAR_12);
    if (!VAR_10)
    {
        FUNC_10 (VAR_4);
    }





    VAR_11 = VAR_7->Operands[VAR_7->NumOperands - 1];

    VAR_10->Region.Length = (UINT32) VAR_11->Integer.Value;
    FUNC_9 (VAR_11);



    if (!VAR_10->Region.Length && (VAR_14 < VAR_1))
    {
        FUNC_4 ((VAR_3,
            "Operation Region [%4.4s] has zero length (SpaceId %X)",
            VAR_12->Name.Ascii, VAR_14));
    }





    VAR_11 = VAR_7->Operands[VAR_7->NumOperands - 2];

    VAR_10->Region.Address = (ACPI_PHYSICAL_ADDRESS)
        VAR_11->Integer.Value;
    FUNC_9 (VAR_11);

    FUNC_0 ((VAR_0, "RgnObj %p Addr %8.8X%8.8X Len %X\n",
        VAR_10, FUNC_2 (VAR_10->Region.Address),
        VAR_10->Region.Length));

    VAR_9 = FUNC_8 (VAR_10->Region.SpaceId,
        VAR_10->Region.Address, VAR_10->Region.Length, VAR_12);



    VAR_10->Region.Flags |= VAR_5;
    FUNC_10 (VAR_9);
}
