
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_40__ TYPE_9__ ;
typedef struct TYPE_39__ TYPE_8__ ;
typedef struct TYPE_38__ TYPE_7__ ;
typedef struct TYPE_37__ TYPE_6__ ;
typedef struct TYPE_36__ TYPE_5__ ;
typedef struct TYPE_35__ TYPE_4__ ;
typedef struct TYPE_34__ TYPE_3__ ;
typedef struct TYPE_33__ TYPE_2__ ;
typedef struct TYPE_32__ TYPE_1__ ;
typedef struct TYPE_31__ TYPE_14__ ;
typedef struct TYPE_30__ TYPE_13__ ;
typedef struct TYPE_29__ TYPE_12__ ;
typedef struct TYPE_28__ TYPE_11__ ;
typedef struct TYPE_27__ TYPE_10__ ;


typedef int UINT8 ;
struct TYPE_39__ {char* Name; } ;
struct TYPE_40__ {TYPE_8__ Value; TYPE_7__* Parent; TYPE_14__* Node; } ;
struct TYPE_37__ {scalar_t__ AmlOpcode; } ;
struct TYPE_38__ {TYPE_6__ Common; } ;
struct TYPE_35__ {scalar_t__ AmlOpcode; } ;
struct TYPE_36__ {TYPE_4__ Common; } ;
struct TYPE_34__ {int ParamCount; } ;
struct TYPE_33__ {int Ascii; } ;
struct TYPE_32__ {int * Aml; } ;
struct TYPE_31__ {scalar_t__ Type; TYPE_2__ Name; } ;
struct TYPE_30__ {TYPE_3__ Method; } ;
struct TYPE_29__ {TYPE_9__ Common; } ;
struct TYPE_28__ {int * Aml; } ;
struct TYPE_27__ {int ArgCount; int ParseFlags; int ScopeInfo; TYPE_5__* Op; TYPE_1__ ParserState; int ArgTypes; } ;
typedef scalar_t__ BOOLEAN ;
typedef TYPE_10__ ACPI_WALK_STATE ;
typedef scalar_t__ ACPI_STATUS ;
typedef TYPE_11__ ACPI_PARSE_STATE ;
typedef TYPE_12__ ACPI_PARSE_OBJECT ;
typedef TYPE_13__ ACPI_OPERAND_OBJECT ;
typedef TYPE_14__ ACPI_NAMESPACE_NODE ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ FUNC_6 (scalar_t__,TYPE_10__*) ;
 TYPE_13__* FUNC_7 (TYPE_14__*) ;
 scalar_t__ FUNC_8 (int ,char*,int ,int ,int,int *,TYPE_14__**) ;
 TYPE_12__* FUNC_9 (int ,int *) ;
 int FUNC_10 (TYPE_12__*,TYPE_12__*) ;
 char* FUNC_11 (TYPE_11__*) ;
 int FUNC_12 (TYPE_12__*,int ) ;
 scalar_t__ FUNC_13 (int ) ;
 int VAR_20 ;
 int FUNC_14 (scalar_t__) ;

ACPI_STATUS
FUNC_15 (
    ACPI_WALK_STATE *VAR_21,
    ACPI_PARSE_STATE *VAR_22,
    ACPI_PARSE_OBJECT *VAR_23,
    BOOLEAN VAR_24)
{
    ACPI_STATUS VAR_25;
    char *VAR_26;
    ACPI_PARSE_OBJECT *VAR_27;
    ACPI_OPERAND_OBJECT *VAR_28;
    ACPI_NAMESPACE_NODE *VAR_29;
    UINT8 *VAR_30 = VAR_22->Aml;


    FUNC_4 (VAR_20);


    VAR_26 = FUNC_11 (VAR_22);
    FUNC_12 (VAR_23, VAR_15);



    if (!VAR_26)
    {
        VAR_23->Common.Value.Name = VAR_26;
        FUNC_14 (VAR_12);
    }
    VAR_25 = FUNC_8 (VAR_21->ScopeInfo, VAR_26,
        VAR_6, VAR_1,
        VAR_3 | VAR_2, ((void*)0), &VAR_29);





    if (FUNC_5 (VAR_25) &&
        VAR_24 &&
        (VAR_29->Type == VAR_7))
    {
        if ((FUNC_13 (VAR_21->ArgTypes) == VAR_18) ||
            (FUNC_13 (VAR_21->ArgTypes) == VAR_19))
        {






            VAR_21->ParserState.Aml = VAR_30;
            VAR_21->ArgCount = 1;
            FUNC_12 (VAR_23, VAR_14);
        }



        VAR_28 = FUNC_7 (VAR_29);
        FUNC_0 ((VAR_0,
            "Control Method invocation %4.4s - %p Desc %p Path=%p\n",
            VAR_29->Name.Ascii, VAR_29, VAR_28, VAR_26));

        VAR_27 = FUNC_9 (VAR_15, VAR_30);
        if (!VAR_27)
        {
            FUNC_14 (VAR_11);
        }



        FUNC_12 (VAR_23, VAR_14);
        VAR_27->Common.Value.Name = VAR_26;



        VAR_27->Common.Node = VAR_29;
        FUNC_10 (VAR_23, VAR_27);

        if (!VAR_28)
        {
            FUNC_1 ((VAR_9,
                "Control Method %p has no attached object",
                VAR_29));
            FUNC_14 (VAR_8);
        }

        FUNC_0 ((VAR_0,
            "Control Method - %p Args %X\n",
            VAR_29, VAR_28->Method.ParamCount));



        VAR_21->ArgCount = VAR_28->Method.ParamCount;
        FUNC_14 (VAR_12);
    }





    if (VAR_25 == VAR_10)
    {


        if ((VAR_21->ParseFlags & VAR_5) !=
            VAR_4)
        {
            VAR_25 = VAR_12;
        }



        else if (VAR_21->Op->Common.AmlOpcode == VAR_13)
        {
            VAR_25 = VAR_12;
        }






        else if ((VAR_23->Common.Parent) &&
            ((VAR_23->Common.Parent->Common.AmlOpcode == VAR_16) ||
             (VAR_23->Common.Parent->Common.AmlOpcode == VAR_17)))
        {
            VAR_25 = VAR_12;
        }
    }



    if (FUNC_3 (VAR_25))
    {
        FUNC_2 (VAR_21->ScopeInfo, VAR_26, VAR_25);

        if ((VAR_21->ParseFlags & VAR_5) ==
            VAR_4)
        {


            VAR_25 = FUNC_6 (VAR_25, VAR_21);
        }
    }



    VAR_23->Common.Value.Name = VAR_26;
    FUNC_14 (VAR_25);
}
