
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_26__ {int ReturnBtype; int ReturnFlags; int FullPathname; int Node; } ;
struct TYPE_23__ {int ReferenceCount; } ;
struct TYPE_25__ {TYPE_1__ Common; } ;
struct TYPE_24__ {int (* ObjectConverter ) (int ,TYPE_3__*,TYPE_3__**) ;} ;
typedef int ACPI_STATUS ;
typedef TYPE_2__ ACPI_SIMPLE_REPAIR_INFO ;
typedef TYPE_3__ ACPI_OPERAND_OBJECT ;
typedef TYPE_4__ ACPI_EVALUATE_INFO ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_9 ;
 int FUNC_5 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_6 (TYPE_3__*,TYPE_3__**) ;
 int FUNC_7 (TYPE_3__*,TYPE_3__**) ;
 int FUNC_8 (TYPE_3__*,TYPE_3__**) ;
 TYPE_2__* FUNC_9 (int ,int,int) ;
 int FUNC_10 (TYPE_4__*,int,int,TYPE_3__**) ;
 int FUNC_11 (TYPE_4__*,TYPE_3__*,TYPE_3__**) ;
 int FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (TYPE_3__*) ;
 int VAR_14 ;
 int FUNC_14 (int ,TYPE_3__*,TYPE_3__**) ;

ACPI_STATUS
FUNC_15 (
    ACPI_EVALUATE_INFO *VAR_15,
    UINT32 VAR_16,
    UINT32 VAR_17,
    ACPI_OPERAND_OBJECT **VAR_18)
{
    ACPI_OPERAND_OBJECT *VAR_19 = *VAR_18;
    ACPI_OPERAND_OBJECT *VAR_20 = ((void*)0);
    ACPI_STATUS VAR_21;
    const ACPI_SIMPLE_REPAIR_INFO *VAR_22;


    FUNC_3 (VAR_14);






    VAR_22 = FUNC_9 (VAR_15->Node,
        VAR_15->ReturnBtype, VAR_17);
    if (VAR_22)
    {
        if (!VAR_19)
        {
            FUNC_5 ((VAR_12, VAR_15->FullPathname,
                VAR_9, "Missing expected return value"));
        }

        VAR_21 = VAR_22->ObjectConverter (VAR_15->Node, VAR_19,
            &VAR_20);
        if (FUNC_2 (VAR_21))
        {


            FUNC_1 ((VAR_12, VAR_21,
                "During return object analysis"));
            return (VAR_21);
        }
        if (VAR_20)
        {
            goto ObjectRepaired;
        }
    }





    if (VAR_15->ReturnBtype & VAR_16)
    {
        return (VAR_13);
    }
    if (!VAR_19)
    {
        if (VAR_16 && (!(VAR_16 & VAR_6)))
        {
            if (VAR_17 != VAR_1)
            {
                FUNC_5 ((VAR_12, VAR_15->FullPathname,
                    VAR_9, "Found unexpected NULL package element"));

                VAR_21 = FUNC_10 (VAR_15, VAR_16,
                    VAR_17, VAR_18);
                if (FUNC_4 (VAR_21))
                {
                    return (VAR_13);
                }
            }
            else
            {
                FUNC_5 ((VAR_12, VAR_15->FullPathname,
                    VAR_9, "Missing expected return value"));
            }

            return (VAR_10);
        }
    }

    if (VAR_16 & VAR_5)
    {
        VAR_21 = FUNC_7 (VAR_19, &VAR_20);
        if (FUNC_4 (VAR_21))
        {
            goto ObjectRepaired;
        }
    }
    if (VAR_16 & VAR_8)
    {
        VAR_21 = FUNC_8 (VAR_19, &VAR_20);
        if (FUNC_4 (VAR_21))
        {
            goto ObjectRepaired;
        }
    }
    if (VAR_16 & VAR_4)
    {
        VAR_21 = FUNC_6 (VAR_19, &VAR_20);
        if (FUNC_4 (VAR_21))
        {
            goto ObjectRepaired;
        }
    }
    if (VAR_16 & VAR_7)
    {
        VAR_21 = FUNC_11 (VAR_15, VAR_19, &VAR_20);
        if (FUNC_4 (VAR_21))
        {




            *VAR_18 = VAR_20;
            VAR_15->ReturnFlags |= VAR_2;
            return (VAR_13);
        }
    }



    return (VAR_11);


ObjectRepaired:



    if (VAR_17 != VAR_1)
    {


        if (!(VAR_15->ReturnFlags & VAR_3))
        {
            VAR_20->Common.ReferenceCount =
                VAR_19->Common.ReferenceCount;
        }

        FUNC_0 ((VAR_0,
            "%s: Converted %s to expected %s at Package index %u\n",
            VAR_15->FullPathname, FUNC_12 (VAR_19),
            FUNC_12 (VAR_20), VAR_17));
    }
    else
    {
        FUNC_0 ((VAR_0,
            "%s: Converted %s to expected %s\n",
            VAR_15->FullPathname, FUNC_12 (VAR_19),
            FUNC_12 (VAR_20)));
    }



    FUNC_13 (VAR_19);
    *VAR_18 = VAR_20;
    VAR_15->ReturnFlags |= VAR_2;
    return (VAR_13);
}
