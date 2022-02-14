
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int UINT8 ;
typedef int UINT32 ;
struct TYPE_18__ {int Flags; TYPE_4__* Op; int Type; } ;
struct TYPE_14__ {int String; } ;
struct TYPE_15__ {int AmlOpcode; TYPE_4__* Next; TYPE_5__* Node; int ExternalName; TYPE_1__ Value; int CompileFlags; } ;
struct TYPE_17__ {TYPE_2__ Asl; } ;
struct TYPE_16__ {int ScopeInfo; } ;
typedef TYPE_3__ ACPI_WALK_STATE ;
typedef scalar_t__ ACPI_STATUS ;
typedef TYPE_4__ ACPI_PARSE_OBJECT ;
typedef TYPE_5__ ACPI_NAMESPACE_NODE ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;






 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ,int,int *,TYPE_5__**) ;
 int FUNC_2 (int ,int ,TYPE_4__*,int ,int ,TYPE_4__*,int ) ;
 int FUNC_3 (int ,int ,TYPE_4__*,int ) ;
 int VAR_16 ;
 TYPE_4__* FUNC_4 (TYPE_4__*,int) ;

__attribute__((used)) static ACPI_STATUS
FUNC_5 (
    UINT32 VAR_17,
    ACPI_PARSE_OBJECT *VAR_18,
    ACPI_WALK_STATE *VAR_19)
{
    ACPI_PARSE_OBJECT *VAR_20 = ((void*)0);
    ACPI_PARSE_OBJECT *VAR_21;
    ACPI_NAMESPACE_NODE *VAR_22;
    ACPI_STATUS VAR_23;


    VAR_21 = FUNC_4 (VAR_18, 0);
    if (VAR_21)
    {
        VAR_23 = FUNC_1 (VAR_19->ScopeInfo,
            VAR_21->Asl.Value.String,
            VAR_17, VAR_0,
            VAR_2, ((void*)0), &VAR_22);
        if (VAR_23 == VAR_8)
        {




            VAR_21->Asl.CompileFlags |= VAR_16;
        }
    }



    switch (VAR_18->Asl.AmlOpcode)
    {
    case 133:

        VAR_20 = FUNC_4 (VAR_18, 6);
        break;

    case 131:

        VAR_20 = FUNC_4 (VAR_18, 5);
        break;

    case 132:

        VAR_20 = FUNC_4 (VAR_18, 4);
        break;

    default:



        return (VAR_7);
    }



    while (VAR_20)
    {
        switch (VAR_20->Asl.AmlOpcode)
        {
        case 128:
        case 130:
        case 129:
            break;

        default:

            VAR_23 = FUNC_1 (VAR_19->ScopeInfo,
                VAR_20->Asl.Value.String,
                VAR_5,
                VAR_1,
                VAR_4 | VAR_2 |
                    VAR_3, ((void*)0), &VAR_22);
            if (FUNC_0 (VAR_23))
            {
                if (VAR_23 != VAR_6)
                {
                    FUNC_3 (VAR_11, VAR_12, VAR_20,
                        VAR_20->Asl.Value.String);
                    return (VAR_23);
                }
                else if (VAR_23 == VAR_6 &&
                    (VAR_22->Flags & VAR_10))
                {
                    VAR_22->Type = (UINT8) VAR_5;
                    VAR_22->Flags &= ~VAR_10;
                }
                else
                {




                    FUNC_2 (VAR_15, VAR_14, VAR_20,
                        VAR_20->Asl.Value.String, VAR_13, VAR_22->Op,
                        VAR_22->Op->Asl.ExternalName);
                }
            }
            else
            {
                VAR_20->Asl.Node = VAR_22;
                VAR_22->Op = VAR_20;
            }
            break;
        }

        VAR_20 = VAR_20->Asl.Next;
    }

    return (VAR_9);
}
