
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef scalar_t__ UINT32 ;
struct TYPE_24__ {scalar_t__ Type; } ;
struct TYPE_23__ {scalar_t__ Type; scalar_t__ ObjectType; } ;
struct TYPE_19__ {int String; scalar_t__ Integer; } ;
struct TYPE_20__ {scalar_t__ AmlOpcode; TYPE_1__ Value; int * Node; TYPE_4__* Next; } ;
struct TYPE_22__ {TYPE_2__ Common; } ;
struct TYPE_21__ {int ScopeInfo; } ;
typedef TYPE_3__ ACPI_WALK_STATE ;
typedef int ACPI_STATUS ;
typedef TYPE_4__ ACPI_PARSE_OBJECT ;
typedef TYPE_5__ ACPI_OPCODE_INFO ;
typedef TYPE_6__ ACPI_NAMESPACE_NODE ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_6__* FUNC_2 (TYPE_6__*,scalar_t__) ;
 int FUNC_3 (TYPE_4__*,TYPE_6__*,TYPE_6__*,scalar_t__) ;
 int FUNC_4 (int ,int ,scalar_t__,int ,int ,TYPE_3__*,TYPE_6__**) ;
 TYPE_4__* FUNC_5 (int *,TYPE_4__*) ;
 TYPE_5__* FUNC_6 (scalar_t__) ;

void
FUNC_7 (
    ACPI_PARSE_OBJECT *VAR_8,
    ACPI_WALK_STATE *VAR_9)
{
    ACPI_STATUS VAR_10;
    ACPI_PARSE_OBJECT *VAR_11;
    ACPI_PARSE_OBJECT *VAR_12;
    ACPI_NAMESPACE_NODE *VAR_13;
    ACPI_NAMESPACE_NODE *VAR_14;
    const ACPI_OPCODE_INFO *VAR_15;
    UINT32 VAR_16;




    VAR_15 = FUNC_6 (VAR_8->Common.AmlOpcode);
    if (VAR_15->Type != VAR_7)
    {
        return;
    }



    VAR_11 = FUNC_5 (((void*)0), VAR_8);



    if (VAR_11->Common.AmlOpcode != VAR_6)
    {
        return;
    }



    VAR_12 = VAR_11->Common.Next;



    VAR_12->Common.Node = ((void*)0);

    VAR_15 = FUNC_6 (VAR_12->Common.AmlOpcode);
    if (VAR_15->ObjectType != VAR_3)
    {
        return;
    }



    if ((VAR_8->Common.AmlOpcode == VAR_4) ||
        (VAR_8->Common.AmlOpcode == VAR_5))
    {


        VAR_16 = (UINT32) VAR_12->Common.Value.Integer;
    }
    else
    {


        VAR_16 = (UINT32) FUNC_1 (VAR_12->Common.Value.Integer);
    }



    VAR_10 = FUNC_4 (VAR_9->ScopeInfo,
        VAR_11->Common.Value.String, VAR_2,
        VAR_0, VAR_1, VAR_9,
        &VAR_13);
    if (FUNC_0 (VAR_10))
    {
        return;
    }



    if (VAR_13->Type != VAR_2)
    {
        return;
    }



    VAR_14 = FUNC_2 (VAR_13, VAR_16);
    if (!VAR_14)
    {
        return;
    }



    FUNC_3 (VAR_12, VAR_13, VAR_14, VAR_16);
}
