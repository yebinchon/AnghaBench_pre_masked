
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_7__ ;
typedef struct TYPE_32__ TYPE_6__ ;
typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;


typedef size_t UINT32 ;
struct TYPE_33__ {int ** Parameters; } ;
struct TYPE_27__ {int Ascii; } ;
struct TYPE_32__ {TYPE_1__ Name; } ;
struct TYPE_28__ {scalar_t__ (* Implementation ) (TYPE_4__*) ;} ;
struct TYPE_29__ {size_t ParamCount; int InfoFlags; TYPE_2__ Dispatch; int AmlLength; int AmlStart; int OwnerId; } ;
struct TYPE_31__ {TYPE_3__ Method; } ;
struct TYPE_30__ {size_t NumOperands; int MethodNestingDepth; int * MethodPathname; int MethodIsNested; int ** Operands; TYPE_6__* MethodCallNode; int PrevOp; } ;
typedef TYPE_4__ ACPI_WALK_STATE ;
typedef int ACPI_THREAD_STATE ;
typedef scalar_t__ ACPI_STATUS ;
typedef int ACPI_PARSE_OBJECT ;
typedef TYPE_5__ ACPI_OPERAND_OBJECT ;
typedef TYPE_6__ ACPI_NAMESPACE_NODE ;
typedef TYPE_7__ ACPI_EVALUATE_INFO ;


 TYPE_7__* FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_7__*) ;
 int FUNC_5 (int ,TYPE_4__*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_6 (TYPE_6__*,TYPE_5__*,TYPE_4__*) ;
 TYPE_4__* FUNC_7 (int ,int *,TYPE_5__*,int *) ;
 int FUNC_8 (TYPE_4__*) ;
 scalar_t__ FUNC_9 (TYPE_4__*,int *,TYPE_6__*,int ,int ,TYPE_7__*,int ) ;
 int FUNC_10 (TYPE_5__*,TYPE_4__*) ;
 TYPE_5__* FUNC_11 (TYPE_6__*) ;
 int * FUNC_12 (TYPE_6__*,int ) ;
 int FUNC_13 (int *) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_14 (scalar_t__) ;
 scalar_t__ FUNC_15 (TYPE_4__*) ;

ACPI_STATUS
FUNC_16 (
    ACPI_THREAD_STATE *VAR_11,
    ACPI_WALK_STATE *VAR_12,
    ACPI_PARSE_OBJECT *VAR_13)
{
    ACPI_STATUS VAR_14;
    ACPI_NAMESPACE_NODE *VAR_15;
    ACPI_WALK_STATE *VAR_16 = ((void*)0);
    ACPI_OPERAND_OBJECT *VAR_17;
    ACPI_EVALUATE_INFO *VAR_18;
    UINT32 VAR_19;


    FUNC_5 (VAR_9, VAR_12);

    FUNC_1 ((VAR_0,
        "Calling method %p, currentstate=%p\n",
        VAR_12->PrevOp, VAR_12));




    VAR_15 = VAR_12->MethodCallNode;
    if (!VAR_15)
    {
        FUNC_14 (VAR_6);
    }

    VAR_17 = FUNC_11 (VAR_15);
    if (!VAR_17)
    {
        FUNC_14 (VAR_7);
    }



    VAR_14 = FUNC_6 (
        VAR_15, VAR_17, VAR_12);
    if (FUNC_3 (VAR_14))
    {
        FUNC_14 (VAR_14);
    }



    VAR_16 = FUNC_7 (
        VAR_17->Method.OwnerId, ((void*)0), VAR_17, VAR_11);
    if (!VAR_16)
    {
        VAR_14 = VAR_5;
        goto Cleanup;
    }






    VAR_12->Operands [VAR_12->NumOperands] = ((void*)0);






    VAR_18 = FUNC_0 (sizeof (ACPI_EVALUATE_INFO));
    if (!VAR_18)
    {
        VAR_14 = VAR_5;
        goto Cleanup;
    }

    VAR_18->Parameters = &VAR_12->Operands[0];

    VAR_14 = FUNC_9 (VAR_16, ((void*)0), VAR_15,
        VAR_17->Method.AmlStart, VAR_17->Method.AmlLength,
        VAR_18, VAR_2);

    FUNC_4 (VAR_18);
    if (FUNC_3 (VAR_14))
    {
        goto Cleanup;
    }

    VAR_16->MethodNestingDepth = VAR_12->MethodNestingDepth + 1;





    for (VAR_19 = 0; VAR_19 < VAR_17->Method.ParamCount; VAR_19++)
    {
        FUNC_13 (VAR_12->Operands [VAR_19]);
        VAR_12->Operands [VAR_19] = ((void*)0);
    }



    VAR_12->NumOperands = 0;

    FUNC_1 ((VAR_0,
        "**** Begin nested execution of [%4.4s] **** WalkState=%p\n",
        VAR_15->Name.Ascii, VAR_16));

    VAR_12->MethodPathname = FUNC_12 (VAR_15, VAR_10);
    VAR_12->MethodIsNested = VAR_10;



    FUNC_2 (*(VAR_1,
        "%-26s:  %*s%s\n", "   Nested method call",
        VAR_16->MethodNestingDepth * 3, " ",
        &VAR_12->MethodPathname[1]));



    if (VAR_17->Method.InfoFlags & VAR_3)
    {
        VAR_14 = VAR_17->Method.Dispatch.Implementation (VAR_16);
        if (VAR_14 == VAR_8)
        {
            VAR_14 = VAR_4;
        }
    }

    FUNC_14 (VAR_14);


Cleanup:



    FUNC_10 (VAR_17, VAR_16);
    FUNC_8 (VAR_16);

    FUNC_14 (VAR_14);
}
