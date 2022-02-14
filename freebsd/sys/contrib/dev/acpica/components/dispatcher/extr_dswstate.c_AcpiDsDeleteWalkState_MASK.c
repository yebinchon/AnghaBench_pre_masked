
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ Scope; } ;
struct TYPE_9__ {TYPE_3__* Next; } ;
struct TYPE_11__ {TYPE_1__ Common; } ;
struct TYPE_10__ {scalar_t__ DescriptorType; TYPE_3__* Results; TYPE_3__* ScopeInfo; TYPE_3__* ControlState; TYPE_5__ ParserState; } ;
typedef TYPE_2__ ACPI_WALK_STATE ;
typedef TYPE_3__ ACPI_GENERIC_STATE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int VAR_2 ;
 int VAR_3 ;

void
FUNC_5 (
    ACPI_WALK_STATE *VAR_4)
{
    ACPI_GENERIC_STATE *VAR_5;


    FUNC_2 (VAR_2, VAR_4);


    if (!VAR_4)
    {
        VAR_3;
    }

    if (VAR_4->DescriptorType != VAR_0)
    {
        FUNC_0 ((VAR_1, "%p is not a valid walk state",
            VAR_4));
        VAR_3;
    }



    if (VAR_4->ParserState.Scope)
    {
        FUNC_0 ((VAR_1, "%p walk still has a scope list",
            VAR_4));
        FUNC_3 (&VAR_4->ParserState);
    }



    while (VAR_4->ControlState)
    {
        VAR_5 = VAR_4->ControlState;
        VAR_4->ControlState = VAR_5->Common.Next;

        FUNC_4 (VAR_5);
    }



    while (VAR_4->ScopeInfo)
    {
        VAR_5 = VAR_4->ScopeInfo;
        VAR_4->ScopeInfo = VAR_5->Common.Next;

        FUNC_4 (VAR_5);
    }



    while (VAR_4->Results)
    {
        VAR_5 = VAR_4->Results;
        VAR_4->Results = VAR_5->Common.Next;

        FUNC_4 (VAR_5);
    }

    FUNC_1 (VAR_4);
    VAR_3;
}
