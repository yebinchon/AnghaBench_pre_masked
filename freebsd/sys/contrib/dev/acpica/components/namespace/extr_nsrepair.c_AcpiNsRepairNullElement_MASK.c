
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int UINT64 ;
typedef int UINT32 ;
struct TYPE_16__ {int ReturnFlags; int FullPathname; TYPE_3__* ParentPackage; } ;
struct TYPE_12__ {int ReferenceCount; } ;
struct TYPE_15__ {TYPE_1__ Common; } ;
struct TYPE_13__ {int ReferenceCount; } ;
struct TYPE_14__ {TYPE_2__ Common; } ;
typedef int ACPI_STATUS ;
typedef TYPE_4__ ACPI_OPERAND_OBJECT ;
typedef TYPE_5__ ACPI_EVALUATE_INFO ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_4__* FUNC_2 (int ) ;
 TYPE_4__* FUNC_3 (int ) ;
 TYPE_4__* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_4__*) ;
 int VAR_8 ;

ACPI_STATUS
FUNC_6 (
    ACPI_EVALUATE_INFO *VAR_9,
    UINT32 VAR_10,
    UINT32 VAR_11,
    ACPI_OPERAND_OBJECT **VAR_12)
{
    ACPI_OPERAND_OBJECT *VAR_13 = *VAR_12;
    ACPI_OPERAND_OBJECT *VAR_14;


    FUNC_1 (VAR_8);




    if (VAR_13)
    {
        return (VAR_7);
    }







    if (VAR_10 & VAR_3)
    {


        VAR_14 = FUNC_3 ((UINT64) 0);
    }
    else if (VAR_10 & VAR_4)
    {


        VAR_14 = FUNC_4 (0);
    }
    else if (VAR_10 & VAR_2)
    {


        VAR_14 = FUNC_2 (0);
    }
    else
    {


        return (VAR_5);
    }

    if (!VAR_14)
    {
        return (VAR_6);
    }



    VAR_14->Common.ReferenceCount =
        VAR_9->ParentPackage->Common.ReferenceCount;

    FUNC_0 ((VAR_0,
        "%s: Converted NULL package element to expected %s at index %u\n",
        VAR_9->FullPathname, FUNC_5 (VAR_14),
        VAR_11));

    *VAR_12 = VAR_14;
    VAR_9->ReturnFlags |= VAR_1;
    return (VAR_7);
}
