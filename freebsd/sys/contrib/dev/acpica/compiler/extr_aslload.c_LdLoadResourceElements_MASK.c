
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef scalar_t__ UINT32 ;
struct TYPE_22__ {TYPE_5__* Op; int Length; scalar_t__ Value; } ;
struct TYPE_17__ {int BitLength; scalar_t__ BitOffset; } ;
struct TYPE_18__ {TYPE_1__ Tag; scalar_t__ Integer; } ;
struct TYPE_19__ {TYPE_6__* Node; TYPE_2__ Value; scalar_t__ ExternalName; scalar_t__ Namepath; scalar_t__ ParentMethod; } ;
struct TYPE_21__ {TYPE_3__ Asl; } ;
struct TYPE_20__ {int ScopeInfo; } ;
typedef TYPE_4__ ACPI_WALK_STATE ;
typedef scalar_t__ ACPI_STATUS ;
typedef TYPE_5__ ACPI_PARSE_OBJECT ;
typedef TYPE_6__ ACPI_NAMESPACE_NODE ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 TYPE_5__* FUNC_1 (TYPE_5__*) ;
 TYPE_5__* FUNC_2 (TYPE_5__*) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_3 (int ,scalar_t__,int ,int ,int,TYPE_4__*,TYPE_6__**) ;
 int FUNC_4 (int ,int ,TYPE_5__*,scalar_t__,int ,TYPE_5__*,scalar_t__) ;

__attribute__((used)) static ACPI_STATUS
FUNC_5 (
    ACPI_PARSE_OBJECT *VAR_11,
    ACPI_WALK_STATE *VAR_12)
{
    ACPI_PARSE_OBJECT *VAR_13 = ((void*)0);
    ACPI_NAMESPACE_NODE *VAR_14;
    ACPI_STATUS VAR_15;






    VAR_15 = FUNC_3 (VAR_12->ScopeInfo, VAR_11->Asl.Namepath,
        VAR_4, VAR_0,
        VAR_3 | VAR_2,
        VAR_12, &VAR_14);
    if (FUNC_0 (VAR_15))
    {
        if (VAR_15 == VAR_6)
        {


            FUNC_4 (VAR_8, VAR_10,
                (ACPI_PARSE_OBJECT *) VAR_11->Asl.ParentMethod,
                VAR_11->Asl.Namepath, VAR_9, VAR_14->Op,
                VAR_14->Op->Asl.ExternalName);
            return (VAR_7);
        }
        return (VAR_15);
    }

    VAR_14->Value = (UINT32) VAR_11->Asl.Value.Integer;
    VAR_14->Op = VAR_11;
    VAR_11->Asl.Node = VAR_14;





    VAR_13 = FUNC_1 (VAR_11);
    while (VAR_13)
    {
        if (VAR_13->Asl.ExternalName)
        {
            VAR_15 = FUNC_3 (VAR_12->ScopeInfo,
                VAR_13->Asl.ExternalName,
                VAR_5, VAR_0,
                VAR_3 | VAR_1, ((void*)0), &VAR_14);
            if (FUNC_0 (VAR_15))
            {
                return (VAR_15);
            }





            VAR_14->Value = VAR_13->Asl.Value.Tag.BitOffset;
            VAR_14->Length = VAR_13->Asl.Value.Tag.BitLength;
            VAR_13->Asl.Node = VAR_14;
            VAR_14->Op = VAR_13;
        }

        VAR_13 = FUNC_2 (VAR_13);
    }

    return (VAR_7);
}
