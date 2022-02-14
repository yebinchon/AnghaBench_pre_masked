
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef void* UINT8 ;
struct TYPE_23__ {scalar_t__ Type; } ;
struct TYPE_21__ {TYPE_4__* Handler; } ;
struct TYPE_20__ {scalar_t__ Handler; TYPE_4__* Next; int * Setup; void* Context; TYPE_5__* Node; int * RegionList; void* HandlerFlags; void* SpaceId; } ;
struct TYPE_19__ {void* Type; } ;
struct TYPE_22__ {TYPE_3__ CommonNotify; TYPE_2__ AddressSpace; TYPE_1__ Common; } ;
typedef int ACPI_STATUS ;
typedef TYPE_4__ ACPI_OPERAND_OBJECT ;
typedef scalar_t__ ACPI_OBJECT_TYPE ;
typedef TYPE_5__ ACPI_NAMESPACE_NODE ;
typedef int ACPI_ADR_SPACE_TYPE ;
typedef int * ACPI_ADR_SPACE_SETUP ;
typedef scalar_t__ ACPI_ADR_SPACE_HANDLER ;


 void* VAR_0 ;






 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int * VAR_15 ;
 int * VAR_16 ;
 TYPE_4__* FUNC_3 (int,TYPE_4__*) ;
 int VAR_17 ;
 int * VAR_18 ;
 int * VAR_19 ;
 int * VAR_20 ;
 int * VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 TYPE_5__* VAR_28 ;
 int FUNC_4 (TYPE_5__*,TYPE_4__*,scalar_t__) ;
 TYPE_4__* FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (scalar_t__,TYPE_5__*,int ,int ,int ,int *,TYPE_4__*,int *) ;
 TYPE_4__* FUNC_7 (scalar_t__) ;
 int FUNC_8 (TYPE_5__*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (TYPE_4__*) ;
 int VAR_29 ;
 int FUNC_11 (int ) ;

ACPI_STATUS
FUNC_12 (
    ACPI_NAMESPACE_NODE *VAR_30,
    ACPI_ADR_SPACE_TYPE VAR_31,
    ACPI_ADR_SPACE_HANDLER VAR_32,
    ACPI_ADR_SPACE_SETUP VAR_33,
    void *VAR_34)
{
    ACPI_OPERAND_OBJECT *VAR_35;
    ACPI_OPERAND_OBJECT *VAR_36;
    ACPI_STATUS VAR_37 = VAR_13;
    ACPI_OBJECT_TYPE VAR_38;
    UINT8 VAR_39 = 0;


    FUNC_2 (VAR_29);






    if ((VAR_30->Type != VAR_5) &&
        (VAR_30->Type != VAR_7) &&
        (VAR_30->Type != VAR_8) &&
        (VAR_30 != VAR_28))
    {
        VAR_37 = VAR_11;
        goto UnlockAndExit;
    }

    if (VAR_32 == VAR_2)
    {
        VAR_39 = VAR_0;

        switch (VAR_31)
        {
        case 128:

            VAR_32 = VAR_27;
            VAR_33 = VAR_21;
            break;

        case 129:

            VAR_32 = VAR_26;
            VAR_33 = VAR_18;
            break;

        case 130:

            VAR_32 = VAR_25;
            VAR_33 = VAR_20;
            break;

        case 133:

            VAR_32 = VAR_22;
            VAR_33 = VAR_15;
            break;

        case 131:

            VAR_32 = VAR_24;
            VAR_33 = VAR_19;
            break;

        case 132:

            VAR_32 = VAR_23;
            VAR_33 = ((void*)0);
            break;

        default:

            VAR_37 = VAR_11;
            goto UnlockAndExit;
        }
    }



    if (!VAR_33)
    {
        VAR_33 = VAR_16;
    }



    VAR_35 = FUNC_5 (VAR_30);
    if (VAR_35)
    {




        VAR_36 = FUNC_3 (VAR_31,
            VAR_35->CommonNotify.Handler);

        if (VAR_36)
        {
            if (VAR_36->AddressSpace.Handler == VAR_32)
            {





                VAR_37 = VAR_14;
                goto UnlockAndExit;
            }
            else
            {


                VAR_37 = VAR_10;
            }

            goto UnlockAndExit;
        }
    }
    else
    {
        FUNC_0 ((VAR_1,
            "Creating object on Device %p while installing handler\n",
            VAR_30));



        if (VAR_30->Type == VAR_4)
        {
            VAR_38 = VAR_5;
        }
        else
        {
            VAR_38 = VAR_30->Type;
        }

        VAR_35 = FUNC_7 (VAR_38);
        if (!VAR_35)
        {
            VAR_37 = VAR_12;
            goto UnlockAndExit;
        }



        VAR_35->Common.Type = (UINT8) VAR_38;



        VAR_37 = FUNC_4 (VAR_30, VAR_35, VAR_38);



        FUNC_10 (VAR_35);

        if (FUNC_1 (VAR_37))
        {
            goto UnlockAndExit;
        }
    }

    FUNC_0 ((VAR_1,
        "Installing address handler for region %s(%X) "
        "on Device %4.4s %p(%p)\n",
        FUNC_9 (VAR_31), VAR_31,
        FUNC_8 (VAR_30), VAR_30, VAR_35));







    VAR_36 = FUNC_7 (VAR_6);
    if (!VAR_36)
    {
        VAR_37 = VAR_12;
        goto UnlockAndExit;
    }



    VAR_36->AddressSpace.SpaceId = (UINT8) VAR_31;
    VAR_36->AddressSpace.HandlerFlags = VAR_39;
    VAR_36->AddressSpace.RegionList = ((void*)0);
    VAR_36->AddressSpace.Node = VAR_30;
    VAR_36->AddressSpace.Handler = VAR_32;
    VAR_36->AddressSpace.Context = VAR_34;
    VAR_36->AddressSpace.Setup = VAR_33;



    VAR_36->AddressSpace.Next = VAR_35->CommonNotify.Handler;





    VAR_35->CommonNotify.Handler = VAR_36;
    VAR_37 = FUNC_6 (VAR_4, VAR_30,
        VAR_9, VAR_3,
        VAR_17, ((void*)0), VAR_36, ((void*)0));

UnlockAndExit:
    FUNC_11 (VAR_37);
}
