
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_41__ TYPE_9__ ;
typedef struct TYPE_40__ TYPE_8__ ;
typedef struct TYPE_39__ TYPE_7__ ;
typedef struct TYPE_38__ TYPE_6__ ;
typedef struct TYPE_37__ TYPE_5__ ;
typedef struct TYPE_36__ TYPE_4__ ;
typedef struct TYPE_35__ TYPE_3__ ;
typedef struct TYPE_34__ TYPE_2__ ;
typedef struct TYPE_33__ TYPE_1__ ;
typedef struct TYPE_32__ TYPE_15__ ;
typedef struct TYPE_31__ TYPE_14__ ;
typedef struct TYPE_30__ TYPE_13__ ;
typedef struct TYPE_29__ TYPE_12__ ;
typedef struct TYPE_28__ TYPE_11__ ;
typedef struct TYPE_27__ TYPE_10__ ;


typedef int UINT8 ;
typedef int UINT32 ;
typedef int UINT16 ;
struct TYPE_35__ {char* String; TYPE_11__* Arg; } ;
struct TYPE_41__ {scalar_t__ AmlOpcode; TYPE_15__* Node; TYPE_3__ Value; } ;
struct TYPE_40__ {int ParamCount; } ;
struct TYPE_39__ {scalar_t__ Type; } ;
struct TYPE_34__ {char* String; } ;
struct TYPE_38__ {TYPE_5__* Parent; TYPE_2__ Value; int AmlOpcode; } ;
struct TYPE_36__ {scalar_t__ AmlOpcode; } ;
struct TYPE_37__ {TYPE_4__ Asl; } ;
struct TYPE_33__ {char* Path; } ;
struct TYPE_32__ {int Flags; scalar_t__ OwnerId; } ;
struct TYPE_31__ {int Flags; } ;
struct TYPE_30__ {TYPE_8__ Method; TYPE_7__ Common; } ;
struct TYPE_29__ {TYPE_10__* WalkState; } ;
struct TYPE_28__ {TYPE_9__ Common; TYPE_6__ Asl; TYPE_1__ Named; } ;
struct TYPE_27__ {scalar_t__ OwnerId; int ScopeInfo; } ;
typedef TYPE_10__ ACPI_WALK_STATE ;
typedef scalar_t__ ACPI_STATUS ;
typedef TYPE_11__ ACPI_PARSE_OBJECT ;
typedef TYPE_12__ ACPI_OP_WALK_INFO ;
typedef TYPE_13__ ACPI_OPERAND_OBJECT ;
typedef TYPE_14__ ACPI_OPCODE_INFO ;
typedef scalar_t__ ACPI_OBJECT_TYPE ;
typedef TYPE_15__ ACPI_NAMESPACE_NODE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int FUNC_3 (TYPE_15__*,int ,int,int ) ;
 int FUNC_4 (TYPE_11__*,char*,int ,int,int ) ;
 scalar_t__ FUNC_5 (TYPE_15__*,scalar_t__,TYPE_10__*) ;
 TYPE_13__* FUNC_6 (TYPE_15__*) ;
 char* FUNC_7 (TYPE_15__*) ;
 scalar_t__ FUNC_8 (int ,char*,scalar_t__,int ,int,TYPE_10__*,TYPE_15__**) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 TYPE_14__* FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (int ) ;

__attribute__((used)) static ACPI_STATUS
FUNC_12 (
    ACPI_PARSE_OBJECT *VAR_19,
    UINT32 VAR_20,
    void *VAR_21)
{
    ACPI_OP_WALK_INFO *VAR_22 = VAR_21;
    const ACPI_OPCODE_INFO *VAR_23;
    ACPI_WALK_STATE *VAR_24;
    ACPI_OBJECT_TYPE VAR_25;
    ACPI_OBJECT_TYPE VAR_26;
    ACPI_STATUS VAR_27;
    char *VAR_28 = ((void*)0);
    ACPI_PARSE_OBJECT *VAR_29;
    ACPI_NAMESPACE_NODE *VAR_30;
    ACPI_OPERAND_OBJECT *VAR_31;
    UINT32 VAR_32 = 0;
    char *VAR_33;
    UINT16 VAR_34 = 0;


    VAR_24 = VAR_22->WalkState;
    VAR_23 = FUNC_10 (VAR_19->Common.AmlOpcode);
    VAR_25 = FUNC_11 (VAR_19->Asl.AmlOpcode);

    if ((!(VAR_23->Flags & VAR_15)) &&
        (!(VAR_23->Flags & VAR_12)) &&
        (VAR_19->Common.AmlOpcode != VAR_14) &&
        (VAR_19->Common.AmlOpcode != VAR_16))
    {
        goto Exit;
    }



    if (VAR_23->Flags & VAR_15)
    {




        if (VAR_19->Common.AmlOpcode == VAR_10)
        {
            VAR_25 = VAR_4;

            VAR_29 = VAR_19->Common.Value.Arg;
            VAR_29 = VAR_29->Common.Value.Arg;
            if (VAR_29->Common.AmlOpcode == VAR_14)
            {
                VAR_28 = VAR_29->Common.Value.String;
            }
        }
        else if (VAR_19->Common.AmlOpcode == VAR_17 ||
                 VAR_19->Common.AmlOpcode == VAR_13)
        {
            VAR_28 = VAR_19->Named.Path;
        }
    }
    else if (VAR_23->Flags & VAR_12)
    {


        VAR_25 = VAR_5;

        VAR_29 = VAR_19->Common.Value.Arg;
        if (VAR_29->Common.AmlOpcode == VAR_14)
        {
            VAR_28 = VAR_29->Common.Value.String;
        }
    }
    else if (VAR_19->Common.AmlOpcode == VAR_16)
    {
        VAR_28 = VAR_19->Common.Value.Arg->Asl.Value.String;
    }
    else
    {
        VAR_28 = VAR_19->Common.Value.String;
    }

    if (!VAR_28)
    {
        goto Exit;
    }
    VAR_30 = ((void*)0);
    VAR_27 = FUNC_8 (VAR_24->ScopeInfo, VAR_28, VAR_4,
        VAR_1, VAR_3 | VAR_2,
        VAR_24, &VAR_30);

    if (FUNC_2 (VAR_27) && (VAR_30->Flags & VAR_18))
    {


        VAR_27 = VAR_7;
    }

    if (FUNC_0 (VAR_27))
    {
        if (VAR_27 == VAR_7)
        {







            if (!(VAR_19->Asl.Parent &&
                (VAR_19->Asl.Parent->Asl.AmlOpcode == VAR_11)))
            {
                if (VAR_30)
                {
                    FUNC_3 (VAR_30,
                        (UINT8) VAR_25, 7, VAR_34);
                }
                else
                {
                    FUNC_4 (VAR_19, VAR_28,
                        (UINT8) VAR_25, 7, VAR_34);
                }
            }
        }
    }







    else if (VAR_30->OwnerId &&
            (VAR_24->OwnerId != VAR_30->OwnerId))
    {
        VAR_26 = VAR_25;

        VAR_31 = FUNC_6 (VAR_30);
        if (VAR_31)
        {
            VAR_26 = VAR_31->Common.Type;
            if (VAR_26 == VAR_6)
            {
                VAR_32 = VAR_31->Method.ParamCount;
            }
        }

        VAR_33 = FUNC_7 (VAR_30);
        if (!VAR_33)
        {
            return (VAR_8);
        }

        FUNC_3 (VAR_30, (UINT8) VAR_26,
            VAR_32, VAR_0);

        FUNC_1 (VAR_33);
        VAR_19->Common.Node = VAR_30;
    }
    else
    {
        VAR_19->Common.Node = VAR_30;
    }


Exit:


    if (FUNC_9 (VAR_25))
    {
        if (VAR_19->Common.Node)
        {
            VAR_27 = FUNC_5 (VAR_19->Common.Node, VAR_25,
                VAR_24);
            if (FUNC_0 (VAR_27))
            {
                return (VAR_27);
            }
        }
    }

    return (VAR_9);
}
