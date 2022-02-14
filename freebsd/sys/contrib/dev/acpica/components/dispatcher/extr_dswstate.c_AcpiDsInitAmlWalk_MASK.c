
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int UINT8 ;
typedef int UINT32 ;
struct TYPE_23__ {int ReturnObject; int Parameters; } ;
struct TYPE_22__ {int Type; } ;
struct TYPE_18__ {TYPE_5__* Node; TYPE_4__* Parent; } ;
struct TYPE_21__ {TYPE_1__ Common; } ;
struct TYPE_20__ {TYPE_5__* StartNode; TYPE_4__* StartOp; int * PkgEnd; int * AmlEnd; int * AmlStart; int * Aml; } ;
struct TYPE_19__ {int Params; int MethodDesc; TYPE_5__* MethodNode; int WalkType; TYPE_3__ ParserState; int * CallerReturnDesc; int PassNumber; int * NextOp; } ;
typedef TYPE_2__ ACPI_WALK_STATE ;
typedef int ACPI_STATUS ;
typedef TYPE_3__ ACPI_PARSE_STATE ;
typedef TYPE_4__ ACPI_PARSE_OBJECT ;
typedef TYPE_5__ ACPI_NAMESPACE_NODE ;
typedef TYPE_6__ ACPI_EVALUATE_INFO ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (int ,int ,TYPE_2__*) ;
 int FUNC_4 (TYPE_5__*,int ,TYPE_2__*) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_3__*,TYPE_4__*) ;
 int VAR_3 ;
 int FUNC_7 (int ) ;

ACPI_STATUS
FUNC_8 (
    ACPI_WALK_STATE *VAR_4,
    ACPI_PARSE_OBJECT *VAR_5,
    ACPI_NAMESPACE_NODE *VAR_6,
    UINT8 *VAR_7,
    UINT32 VAR_8,
    ACPI_EVALUATE_INFO *VAR_9,
    UINT8 VAR_10)
{
    ACPI_STATUS VAR_11;
    ACPI_PARSE_STATE *VAR_12 = &VAR_4->ParserState;
    ACPI_PARSE_OBJECT *VAR_13;


    FUNC_1 (VAR_3);


    VAR_4->ParserState.Aml =
    VAR_4->ParserState.AmlStart = VAR_7;
    VAR_4->ParserState.AmlEnd =
    VAR_4->ParserState.PkgEnd = VAR_7 + VAR_8;



    VAR_4->NextOp = ((void*)0);
    VAR_4->PassNumber = VAR_10;

    if (VAR_9)
    {
        VAR_4->Params = VAR_9->Parameters;
        VAR_4->CallerReturnDesc = &VAR_9->ReturnObject;
    }

    VAR_11 = FUNC_6 (&VAR_4->ParserState, VAR_5);
    if (FUNC_0 (VAR_11))
    {
        FUNC_7 (VAR_11);
    }

    if (VAR_6)
    {
        VAR_4->ParserState.StartNode = VAR_6;
        VAR_4->WalkType = VAR_2;
        VAR_4->MethodNode = VAR_6;
        VAR_4->MethodDesc = FUNC_5 (VAR_6);



        VAR_11 = FUNC_4 (
            VAR_6, VAR_1, VAR_4);
        if (FUNC_0 (VAR_11))
        {
            FUNC_7 (VAR_11);
        }



        VAR_11 = FUNC_3 (VAR_4->Params,
                    VAR_0, VAR_4);
        if (FUNC_0 (VAR_11))
        {
            FUNC_7 (VAR_11);
        }
    }
    else
    {






        VAR_13 = VAR_12->StartOp;
        while (VAR_13 && !VAR_13->Common.Node)
        {
            VAR_13 = VAR_13->Common.Parent;
        }

        if (!VAR_13)
        {
            VAR_12->StartNode = ((void*)0);
        }
        else
        {
            VAR_12->StartNode = VAR_13->Common.Node;
        }

        if (VAR_12->StartNode)
        {


            VAR_11 = FUNC_4 (VAR_12->StartNode,
                VAR_12->StartNode->Type, VAR_4);
            if (FUNC_0 (VAR_11))
            {
                FUNC_7 (VAR_11);
            }
        }
    }

    VAR_11 = FUNC_2 (VAR_4, VAR_10);
    FUNC_7 (VAR_11);
}
