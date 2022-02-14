
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_12__ ;


typedef scalar_t__ UINT8 ;
struct TYPE_30__ {int Flags; int Type; } ;
struct TYPE_27__ {scalar_t__ AmlOpcode; scalar_t__ ArgListLength; int Flags; } ;
struct TYPE_26__ {scalar_t__* Data; scalar_t__ Length; } ;
struct TYPE_29__ {TYPE_3__ Common; TYPE_2__ Named; } ;
struct TYPE_24__ {scalar_t__ Aml; } ;
struct TYPE_28__ {scalar_t__ Opcode; scalar_t__ (* DescendingCallback ) (TYPE_4__*,TYPE_5__**) ;TYPE_5__* Op; TYPE_12__ ParserState; TYPE_1__* OpInfo; scalar_t__ Aml; } ;
struct TYPE_25__ {int Flags; } ;
typedef TYPE_4__ ACPI_WALK_STATE ;
typedef scalar_t__ ACPI_STATUS ;
typedef TYPE_5__ ACPI_PARSE_OBJECT ;
typedef TYPE_6__ ACPI_OPCODE_INFO ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,TYPE_4__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 TYPE_5__* FUNC_2 (scalar_t__,scalar_t__*) ;
 int FUNC_3 (TYPE_5__*,TYPE_5__*) ;
 scalar_t__ FUNC_4 (TYPE_4__*,scalar_t__*,TYPE_5__*,TYPE_5__**) ;
 int FUNC_5 (TYPE_5__*) ;
 scalar_t__ FUNC_6 (TYPE_4__*) ;
 scalar_t__ FUNC_7 (int ) ;
 void* FUNC_8 (scalar_t__) ;
 TYPE_5__* FUNC_9 (TYPE_12__*) ;
 scalar_t__ FUNC_10 (TYPE_4__*,TYPE_5__*,scalar_t__) ;
 int VAR_15 ;
 int FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (TYPE_4__*,TYPE_5__**) ;

ACPI_STATUS
FUNC_13 (
    ACPI_WALK_STATE *VAR_16,
    UINT8 *VAR_17,
    ACPI_PARSE_OBJECT **VAR_18)
{
    ACPI_STATUS VAR_19 = VAR_6;
    ACPI_PARSE_OBJECT *VAR_20;
    ACPI_PARSE_OBJECT *VAR_21 = ((void*)0);
    ACPI_PARSE_OBJECT *VAR_22;
    UINT8 VAR_23;
    const ACPI_OPCODE_INFO *VAR_24;


    FUNC_1 (VAR_15, VAR_16);


    VAR_19 = FUNC_6 (VAR_16);
    if (VAR_19 == VAR_1)
    {
        FUNC_11 (VAR_1);
    }
    if (FUNC_0 (VAR_19))
    {
        FUNC_11 (VAR_19);
    }



    VAR_16->OpInfo = FUNC_8 (VAR_16->Opcode);
    VAR_20 = FUNC_2 (VAR_16->Opcode, VAR_17);
    if (!VAR_20)
    {
        FUNC_11 (VAR_5);
    }

    if (VAR_16->OpInfo->Flags & VAR_13)
    {
        VAR_19 = FUNC_4 (VAR_16, VAR_17, VAR_20, &VAR_21);
        FUNC_5 (VAR_20);
        if (FUNC_0 (VAR_19))
        {
            FUNC_11 (VAR_19);
        }

        *VAR_18 = VAR_21;
        FUNC_11 (VAR_6);
    }



    if (VAR_16->OpInfo->Flags & VAR_8)
    {




        VAR_20->Named.Data = VAR_17;
        VAR_20->Named.Length = 0;
    }

    if (VAR_16->Opcode == VAR_7)
    {




        VAR_20->Named.Data = VAR_17;
        VAR_20->Named.Length = 0;
    }

    VAR_22 = FUNC_9 (&(VAR_16->ParserState));
    FUNC_3 (VAR_22, VAR_20);

    if (VAR_22)
    {
        VAR_24 = FUNC_8 (VAR_22->Common.AmlOpcode);
        if (VAR_24->Flags & VAR_11)
        {
            VAR_23 = FUNC_7 (VAR_24->Type);
            if (VAR_22->Common.ArgListLength > VAR_23)
            {
                VAR_20->Common.Flags |= VAR_0;
            }
        }





        else if ((VAR_22->Common.AmlOpcode == VAR_12) ||
                (VAR_22->Common.AmlOpcode == VAR_9))
        {
            VAR_20->Common.Flags |= VAR_0;
        }
    }

    if (VAR_16->DescendingCallback != ((void*)0))
    {




        VAR_16->Op = *VAR_18 = VAR_20;

        VAR_19 = VAR_16->DescendingCallback (VAR_16, &VAR_20);
        VAR_19 = FUNC_10 (VAR_16, VAR_20, VAR_19);
        if (VAR_19 == VAR_3)
        {
            VAR_19 = VAR_2;
        }
    }

    FUNC_11 (VAR_19);
}
