
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t UINT32 ;
struct TYPE_6__ {int ** ObjDesc; } ;
struct TYPE_8__ {TYPE_1__ Results; } ;
struct TYPE_7__ {scalar_t__ ResultCount; TYPE_3__* Results; } ;
typedef TYPE_2__ ACPI_WALK_STATE ;
typedef int ACPI_STATUS ;
typedef int ACPI_OPERAND_OBJECT ;
typedef TYPE_3__ ACPI_GENERIC_STATE ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *) ;
 int VAR_6 ;

ACPI_STATUS
FUNC_6 (
    ACPI_OPERAND_OBJECT **VAR_7,
    ACPI_WALK_STATE *VAR_8)
{
    UINT32 VAR_9;
    ACPI_GENERIC_STATE *VAR_10;
    ACPI_STATUS VAR_11;


    FUNC_3 (VAR_6);


    VAR_10 = VAR_8->Results;



    if (VAR_10 && !VAR_8->ResultCount)
    {
        FUNC_1 ((VAR_4, "No results on result stack"));
        return (VAR_2);
    }

    if (!VAR_10 && VAR_8->ResultCount)
    {
        FUNC_1 ((VAR_4, "No result state for result stack"));
        return (VAR_2);
    }



    if (!VAR_10)
    {
        FUNC_1 ((VAR_4, "Result stack is empty! State=%p", VAR_8));
        return (VAR_3);
    }



    VAR_8->ResultCount--;
    VAR_9 = (UINT32) VAR_8->ResultCount % VAR_1;

    *VAR_7 = VAR_10->Results.ObjDesc [VAR_9];
    if (!*VAR_7)
    {
        FUNC_1 ((VAR_4, "No result objects on result stack, State=%p",
            VAR_8));
        return (VAR_3);
    }

    VAR_10->Results.ObjDesc [VAR_9] = ((void*)0);
    if (VAR_9 == 0)
    {
        VAR_11 = FUNC_4 (VAR_8);
        if (FUNC_2 (VAR_11))
        {
            return (VAR_11);
        }
    }

    FUNC_0 ((VAR_0,
        "Obj=%p [%s] Index=%X State=%p Num=%X\n", *VAR_7,
        FUNC_5 (*VAR_7),
        VAR_9, VAR_8, VAR_8->ResultCount));

    return (VAR_5);
}
