
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


typedef int UINT32 ;
struct TYPE_22__ {int ReturnFlags; TYPE_4__* ParentPackage; TYPE_3__* Predefined; } ;
struct TYPE_21__ {int Flags; } ;
struct TYPE_18__ {scalar_t__ Type; } ;
struct TYPE_20__ {TYPE_2__ Common; } ;
struct TYPE_17__ {scalar_t__ ExpectedBtypes; } ;
struct TYPE_19__ {TYPE_1__ Info; } ;
typedef scalar_t__ ACPI_STATUS ;
typedef TYPE_3__ ACPI_PREDEFINED_INFO ;
typedef TYPE_4__ ACPI_OPERAND_OBJECT ;
typedef TYPE_5__ ACPI_NAMESPACE_NODE ;
typedef TYPE_6__ ACPI_EVALUATE_INFO ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_1 (TYPE_6__*,TYPE_4__**,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (TYPE_6__*,TYPE_4__**) ;
 scalar_t__ FUNC_3 (TYPE_6__*,TYPE_5__*,scalar_t__,TYPE_4__**) ;

ACPI_STATUS
FUNC_4 (
    ACPI_NAMESPACE_NODE *VAR_10,
    ACPI_EVALUATE_INFO *VAR_11,
    UINT32 VAR_12,
    ACPI_STATUS VAR_13,
    ACPI_OPERAND_OBJECT **VAR_14)
{
    ACPI_STATUS VAR_15;
    const ACPI_PREDEFINED_INFO *VAR_16;




    VAR_16 = VAR_11->Predefined;
    if (!VAR_16)
    {
        return (VAR_7);
    }





    if ((VAR_13 != VAR_7) &&
        (VAR_13 != VAR_6))
    {
        return (VAR_7);
    }
    if (VAR_9 ||
        (!VAR_16->Info.ExpectedBtypes) ||
        (VAR_16->Info.ExpectedBtypes == VAR_2))
    {
        return (VAR_7);
    }





    VAR_15 = FUNC_1 (VAR_11, VAR_14,
        VAR_16->Info.ExpectedBtypes, VAR_0);
    if (FUNC_0 (VAR_15))
    {
        goto Exit;
    }






    if (!(*VAR_14))
    {
        goto Exit;
    }





    if ((*VAR_14)->Common.Type == VAR_3)
    {
        VAR_11->ParentPackage = *VAR_14;
        VAR_15 = FUNC_2 (VAR_11, VAR_14);
        if (FUNC_0 (VAR_15))
        {


            if ((VAR_15 != VAR_4) &&
                (VAR_15 != VAR_5))
            {
                goto Exit;
            }
        }
    }
    VAR_15 = FUNC_3 (VAR_11, VAR_10, VAR_15, VAR_14);

Exit:





    if (FUNC_0 (VAR_15) ||
       (VAR_11->ReturnFlags & VAR_1))
    {
        VAR_10->Flags |= VAR_8;
    }

    return (VAR_15);
}
