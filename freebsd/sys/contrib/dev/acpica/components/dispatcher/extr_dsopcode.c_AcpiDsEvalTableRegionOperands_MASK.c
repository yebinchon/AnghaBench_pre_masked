
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_22__ {int Flags; int Length; int Address; } ;
struct TYPE_21__ {int Pointer; } ;
struct TYPE_26__ {TYPE_4__ Region; TYPE_3__ String; } ;
struct TYPE_19__ {TYPE_7__* Arg; } ;
struct TYPE_20__ {int AmlOpcode; TYPE_1__ Value; int * Node; } ;
struct TYPE_25__ {TYPE_2__ Common; } ;
struct TYPE_24__ {int Length; } ;
struct TYPE_23__ {TYPE_8__** Operands; } ;
typedef TYPE_5__ ACPI_WALK_STATE ;
typedef TYPE_6__ ACPI_TABLE_HEADER ;
typedef scalar_t__ ACPI_STATUS ;
typedef TYPE_7__ ACPI_PARSE_OBJECT ;
typedef TYPE_8__ ACPI_OPERAND_OBJECT ;
typedef int ACPI_NAMESPACE_NODE ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,TYPE_7__*) ;
 int FUNC_5 (TYPE_6__*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_6 (TYPE_5__*,TYPE_7__*) ;
 scalar_t__ FUNC_7 (int ,int ,TYPE_5__*) ;
 scalar_t__ FUNC_8 (int ,TYPE_6__**) ;
 TYPE_8__* FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int ,int ,int ,int *) ;
 int FUNC_11 (TYPE_8__*) ;
 int VAR_6 ;
 int FUNC_12 (scalar_t__) ;

ACPI_STATUS
FUNC_13 (
    ACPI_WALK_STATE *VAR_7,
    ACPI_PARSE_OBJECT *VAR_8)
{
    ACPI_STATUS VAR_9;
    ACPI_OPERAND_OBJECT *VAR_10;
    ACPI_OPERAND_OBJECT **VAR_11;
    ACPI_NAMESPACE_NODE *VAR_12;
    ACPI_PARSE_OBJECT *VAR_13;
    ACPI_TABLE_HEADER *VAR_14;
    UINT32 VAR_15;


    FUNC_4 (VAR_6, VAR_8);






    VAR_12 = VAR_8->Common.Node;



    VAR_13 = VAR_8->Common.Value.Arg;





    VAR_9 = FUNC_6 (VAR_7, VAR_13);
    if (FUNC_2 (VAR_9))
    {
        FUNC_12 (VAR_9);
    }

    VAR_11 = &VAR_7->Operands[0];





    VAR_9 = FUNC_7 (
        VAR_8->Common.AmlOpcode, VAR_1, VAR_7);
    if (FUNC_2 (VAR_9))
    {
        goto Cleanup;
    }



    VAR_9 = FUNC_10 (
        VAR_11[0]->String.Pointer,
        VAR_11[1]->String.Pointer,
        VAR_11[2]->String.Pointer, &VAR_15);
    if (FUNC_2 (VAR_9))
    {
        if (VAR_9 == VAR_4)
        {
            FUNC_1 ((VAR_2,
                "ACPI Table [%4.4s] OEM:(%s, %s) not found in RSDT/XSDT",
                VAR_11[0]->String.Pointer,
                VAR_11[1]->String.Pointer,
                VAR_11[2]->String.Pointer));
        }
        goto Cleanup;
    }

    VAR_9 = FUNC_8 (VAR_15, &VAR_14);
    if (FUNC_2 (VAR_9))
    {
        goto Cleanup;
    }

    VAR_10 = FUNC_9 (VAR_12);
    if (!VAR_10)
    {
        VAR_9 = VAR_3;
        goto Cleanup;
    }

    VAR_10->Region.Address = FUNC_5 (VAR_14);
    VAR_10->Region.Length = VAR_14->Length;

    FUNC_0 ((VAR_0, "RgnObj %p Addr %8.8X%8.8X Len %X\n",
        VAR_10, FUNC_3 (VAR_10->Region.Address),
        VAR_10->Region.Length));



    VAR_10->Region.Flags |= VAR_5;

Cleanup:
    FUNC_11 (VAR_11[0]);
    FUNC_11 (VAR_11[1]);
    FUNC_11 (VAR_11[2]);

    FUNC_12 (VAR_9);
}
