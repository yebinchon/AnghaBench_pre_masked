
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_35__ TYPE_9__ ;
typedef struct TYPE_34__ TYPE_8__ ;
typedef struct TYPE_33__ TYPE_7__ ;
typedef struct TYPE_32__ TYPE_6__ ;
typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;
typedef struct TYPE_26__ TYPE_10__ ;


typedef int UINT32 ;
struct TYPE_32__ {char* String; } ;
struct TYPE_33__ {int CompileFlags; scalar_t__ AmlOpcode; scalar_t__ AmlLength; TYPE_6__ Value; TYPE_9__* Next; TYPE_9__* Child; int * Node; TYPE_9__* Parent; int LogicalLineNumber; } ;
struct TYPE_29__ {int AmlOpcode; TYPE_2__* Parent; } ;
struct TYPE_35__ {TYPE_7__ Asl; TYPE_3__ Common; } ;
struct TYPE_34__ {TYPE_5__* ScopeInfo; } ;
struct TYPE_30__ {int * Node; } ;
struct TYPE_31__ {TYPE_4__ Scope; } ;
struct TYPE_27__ {int AmlOpcode; } ;
struct TYPE_28__ {TYPE_1__ Common; } ;
struct TYPE_26__ {char* Pointer; void* Length; } ;
typedef TYPE_8__ ACPI_WALK_STATE ;
typedef int ACPI_STATUS ;
typedef scalar_t__ ACPI_SIZE ;
typedef TYPE_9__ ACPI_PARSE_OBJECT ;
typedef int ACPI_NAMESPACE_NODE ;
typedef TYPE_10__ ACPI_BUFFER ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (void (*) (TYPE_9__*,int,TYPE_8__*,char*,int *)) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 int FUNC_5 (int ,char*,int *,char**) ;
 int FUNC_6 (int *,TYPE_10__*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_9__*,int ,char*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_9 (TYPE_9__*,TYPE_8__*,int *,int *,TYPE_10__*,TYPE_10__*,scalar_t__,int,char**) ;
 int FUNC_10 (TYPE_9__*,TYPE_8__*,int *,int *,char*,char**) ;
 int FUNC_11 (TYPE_9__*,TYPE_8__*,int *,int *,TYPE_10__*,char**) ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_12 (char*) ;

void
FUNC_13 (
    ACPI_PARSE_OBJECT *VAR_14,
    UINT32 VAR_15,
    ACPI_WALK_STATE *VAR_16,
    char *VAR_17,
    ACPI_NAMESPACE_NODE *VAR_18)
{
    ACPI_STATUS VAR_19;
    ACPI_BUFFER VAR_20;
    ACPI_BUFFER VAR_21;
    ACPI_SIZE VAR_22;
    ACPI_NAMESPACE_NODE *VAR_23;
    char *VAR_24;
    char *VAR_25 = ((void*)0);
    ACPI_SIZE VAR_26;
    ACPI_PARSE_OBJECT *VAR_27;


    FUNC_3 (FUNC_13);




    if (!VAR_9)
    {
        VAR_13;
    }



    if (!VAR_18 || !VAR_16 || !VAR_17 || !VAR_14->Common.Parent)
    {
        VAR_13;
    }

    FUNC_0 ((VAR_1,
        "PATH OPTIMIZE: Line %5d ParentOp [%12.12s] ThisOp [%12.12s] ",
        VAR_14->Asl.LogicalLineNumber,
        FUNC_7 (VAR_14->Common.Parent->Common.AmlOpcode),
        FUNC_7 (VAR_14->Common.AmlOpcode)));

    if (!(VAR_15 & (VAR_6 | VAR_5)))
    {
        if (VAR_14->Asl.CompileFlags & VAR_11)
        {


            FUNC_0 ((VAR_1,
                "******* NAME DECLARATION\n"));
            VAR_13;
        }
    }





    VAR_22 = FUNC_12 (VAR_17);
    if (VAR_22 <= VAR_2)
    {
        FUNC_0 ((VAR_1,
            "NAMESEG %4.4s\n", VAR_17));
        VAR_13;
    }






    VAR_23 = VAR_8;
    if (VAR_16->ScopeInfo)
    {
        VAR_23 = VAR_16->ScopeInfo->Scope.Node;
    }

    if (VAR_15 & (VAR_6 | VAR_5))
    {


        FUNC_0 ((VAR_1, "NAME\n"));







        VAR_27 = VAR_14->Asl.Parent;
        while (VAR_27 && (!VAR_27->Asl.Node))
        {
            VAR_27 = VAR_27->Asl.Parent;
        }

        if (VAR_27 && VAR_27->Asl.Node)
        {
            VAR_23 = VAR_27->Asl.Node;
        }
        else
        {
            VAR_23 = VAR_8;
        }
    }
    else
    {


        FUNC_0 ((VAR_1, "REFERENCE\n"));
    }






    VAR_20.Length = VAR_0;
    VAR_19 = FUNC_6 (VAR_18, &VAR_20, VAR_10);
    if (FUNC_1 (VAR_19))
    {
        FUNC_8 (VAR_14, VAR_19, "Getting Target NamePath",
            VAR_7);
        VAR_13;
    }

    VAR_20.Length--;



    VAR_21.Length = VAR_0;
    VAR_19 = FUNC_6 (VAR_23, &VAR_21, VAR_10);
    if (FUNC_1 (VAR_19))
    {
        FUNC_8 (VAR_14, VAR_19, "Getting Current NamePath",
            VAR_7);
        VAR_13;
    }

    VAR_21.Length--;



    VAR_19 = FUNC_5 (VAR_3, VAR_17,
        ((void*)0), &VAR_24);
    if (FUNC_1 (VAR_19))
    {
        FUNC_8 (VAR_14, VAR_19, "Externalizing NamePath",
            VAR_7);
        VAR_13;
    }

    FUNC_0 ((VAR_1,
        "CURRENT SCOPE: (%2u) %-37s FULL PATH TO NAME: (%2u) %-32s ACTUAL AML:%-32s\n",
        (UINT32) VAR_21.Length, (char *) VAR_21.Pointer,
        (UINT32) VAR_20.Length, (char *) VAR_20.Pointer,
        VAR_24));

    FUNC_2 (VAR_24);




    if (VAR_15 & (VAR_6 | VAR_5))
    {




        VAR_19 = FUNC_10 (VAR_14, VAR_16, VAR_23,
            VAR_18, VAR_17, &VAR_25);
        if (FUNC_1 (VAR_19))
        {




            VAR_19 = FUNC_9 (VAR_14, VAR_16, VAR_23,
                VAR_18, &VAR_21, &VAR_20,
                VAR_22, 1, &VAR_25);
        }
    }
    else
    {






        VAR_19 = FUNC_11 (VAR_14, VAR_16, VAR_23,
            VAR_18, &VAR_20, &VAR_25);
        if (FUNC_1 (VAR_19))
        {




            VAR_19 = FUNC_9 (VAR_14, VAR_16, VAR_23,
                VAR_18, &VAR_21, &VAR_20,
                VAR_22, 0, &VAR_25);
        }
    }





    if (FUNC_4 (VAR_19))
    {
        VAR_26 = (VAR_22 - FUNC_12 (VAR_25));
        VAR_12 += VAR_26;

        FUNC_0 ((VAR_1,
            " REDUCED BY %2u (TOTAL SAVED %2u)",
            (UINT32) VAR_26, VAR_12));

        if (VAR_15 & VAR_6)
        {
            if (VAR_14->Asl.AmlOpcode == VAR_4)
            {




                VAR_14->Asl.Child->Asl.Next->Asl.Value.String = VAR_25;
                VAR_14->Asl.Child->Asl.Next->Asl.AmlLength = FUNC_12 (VAR_25);
            }
            else
            {
                VAR_14->Asl.Child->Asl.Value.String = VAR_25;
                VAR_14->Asl.Child->Asl.AmlLength = FUNC_12 (VAR_25);
            }
        }
        else if (VAR_15 & VAR_5)
        {


            VAR_27 = VAR_14->Asl.Child;
            while (!(VAR_27->Asl.CompileFlags & VAR_11))
            {
                VAR_27 = VAR_27->Asl.Next;
            }


            VAR_27->Asl.Value.String = VAR_25;
            VAR_27->Asl.AmlLength = FUNC_12 (VAR_25);
        }
        else
        {


            VAR_14->Asl.Value.String = VAR_25;
            VAR_14->Asl.AmlLength = FUNC_12 (VAR_25);
        }
    }
    else
    {
        FUNC_0 ((VAR_1, " ALREADY OPTIMAL"));
    }



    FUNC_2 (VAR_20.Pointer);
    FUNC_2 (VAR_21.Pointer);

    FUNC_0 ((VAR_1, "\n"));
    VAR_13;
}
