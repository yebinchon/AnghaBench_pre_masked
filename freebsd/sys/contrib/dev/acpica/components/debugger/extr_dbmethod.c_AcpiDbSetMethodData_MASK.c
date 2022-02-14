
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int UINT64 ;
typedef size_t UINT32 ;
struct TYPE_20__ {scalar_t__ Type; TYPE_5__* Object; } ;
struct TYPE_15__ {size_t Value; } ;
struct TYPE_19__ {TYPE_1__ Integer; } ;
struct TYPE_18__ {TYPE_3__* LocalVariables; TYPE_2__* Arguments; } ;
struct TYPE_17__ {TYPE_5__* Object; } ;
struct TYPE_16__ {TYPE_5__* Object; } ;
typedef TYPE_4__ ACPI_WALK_STATE ;
typedef int ACPI_STATUS ;
typedef TYPE_5__ ACPI_OPERAND_OBJECT ;
typedef TYPE_6__ ACPI_NAMESPACE_NODE ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_6__* FUNC_1 (char*) ;
 int FUNC_2 (TYPE_5__*,TYPE_4__*) ;
 TYPE_4__* FUNC_3 (int ) ;
 int FUNC_4 (int ,size_t,TYPE_5__*,TYPE_4__*) ;
 int VAR_5 ;
 int FUNC_5 (char*,...) ;
 TYPE_5__* FUNC_6 (int ) ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (char*) ;
 size_t FUNC_9 (char*,int *,int) ;

void
FUNC_10 (
    char *VAR_6,
    char *VAR_7,
    char *VAR_8)
{
    char VAR_9;
    UINT32 VAR_10;
    UINT32 VAR_11;
    ACPI_WALK_STATE *VAR_12;
    ACPI_OPERAND_OBJECT *VAR_13;
    ACPI_STATUS VAR_14;
    ACPI_NAMESPACE_NODE *VAR_15;




    FUNC_8 (VAR_6);
    VAR_9 = VAR_6[0];
    if ((VAR_9 != 'L') &&
        (VAR_9 != 'A') &&
        (VAR_9 != 'N'))
    {
        FUNC_5 ("Invalid SET operand: %s\n", VAR_6);
        return;
    }

    VAR_11 = FUNC_9 (VAR_8, ((void*)0), 16);

    if (VAR_9 == 'N')
    {
        VAR_15 = FUNC_1 (VAR_7);
        if (!VAR_15)
        {
            return;
        }

        if (VAR_15->Type != VAR_4)
        {
            FUNC_5 ("Can only set Integer nodes\n");
            return;
        }
        VAR_13 = VAR_15->Object;
        VAR_13->Integer.Value = VAR_11;
        return;
    }



    VAR_10 = FUNC_9 (VAR_7, ((void*)0), 16);

    VAR_12 = FUNC_3 (VAR_5);
    if (!VAR_12)
    {
        FUNC_5 ("There is no method currently executing\n");
        return;
    }



    VAR_13 = FUNC_6 ((UINT64) VAR_11);
    if (!VAR_13)
    {
        FUNC_5 ("Could not create an internal object\n");
        return;
    }



    switch (VAR_9)
    {
    case 'A':



        if (VAR_10 > VAR_0)
        {
            FUNC_5 ("Arg%u - Invalid argument name\n",
                VAR_10);
            goto Cleanup;
        }

        VAR_14 = FUNC_4 (VAR_2,
            VAR_10, VAR_13, VAR_12);
        if (FUNC_0 (VAR_14))
        {
            goto Cleanup;
        }

        VAR_13 = VAR_12->Arguments[VAR_10].Object;

        FUNC_5 ("Arg%u: ", VAR_10);
        FUNC_2 (VAR_13, VAR_12);
        break;

    case 'L':



        if (VAR_10 > VAR_1)
        {
            FUNC_5 ("Local%u - Invalid local variable name\n",
                VAR_10);
            goto Cleanup;
        }

        VAR_14 = FUNC_4 (VAR_3,
            VAR_10, VAR_13, VAR_12);
        if (FUNC_0 (VAR_14))
        {
            goto Cleanup;
        }

        VAR_13 = VAR_12->LocalVariables[VAR_10].Object;

        FUNC_5 ("Local%u: ", VAR_10);
        FUNC_2 (VAR_13, VAR_12);
        break;

    default:

        break;
    }

Cleanup:
    FUNC_7 (VAR_13);
}
