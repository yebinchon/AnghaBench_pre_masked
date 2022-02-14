
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {TYPE_6__* Arg; } ;
struct TYPE_13__ {scalar_t__ AmlOpcode; scalar_t__ DisasmOpcode; TYPE_6__* Next; int DisasmFlags; TYPE_4__ Value; int Parent; } ;
struct TYPE_11__ {TYPE_2__* Next; } ;
struct TYPE_14__ {TYPE_5__ Common; TYPE_3__ Asl; } ;
struct TYPE_9__ {scalar_t__ AmlOpcode; } ;
struct TYPE_10__ {TYPE_1__ Common; } ;
typedef TYPE_6__ ACPI_PARSE_OBJECT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static void
FUNC_2 (
    ACPI_PARSE_OBJECT *VAR_7)
{
    ACPI_PARSE_OBJECT *VAR_8;
    ACPI_PARSE_OBJECT *VAR_9;
    VAR_8 = VAR_7->Common.Value.Arg;

    if (!VAR_8 ||
        (VAR_8->Common.AmlOpcode != VAR_6) ||
        (VAR_8->Asl.Next && (VAR_8->Asl.Next->Common.AmlOpcode != VAR_5)))
    {


        if (VAR_7->Common.DisasmOpcode == VAR_1)
        {
            FUNC_1 ("%s", "Default");
            return;
        }

        FUNC_1 ("%s", "Else");
        return;
    }



    VAR_9 = VAR_8->Common.Next;
    if (VAR_9 && VAR_9->Common.Next)
    {
        if (VAR_7->Common.DisasmOpcode == VAR_1)
        {
            FUNC_1 ("%s", "Default");
            return;
        }

        FUNC_1 ("%s", "Else");
        return;
    }

    if (VAR_7->Common.DisasmOpcode == VAR_1)
    {




        FUNC_1 ("%s", "Default");
        return;
    }

    if (VAR_7->Common.DisasmOpcode == VAR_0)
    {





        FUNC_1 ("%s", "Case");
    }
    else
    {


        FUNC_1 ("%s", "ElseIf");
    }

    VAR_8->Common.DisasmFlags |= VAR_3;



    VAR_8->Common.Parent = VAR_7->Common.Parent;
    VAR_9 = VAR_8->Common.Next;
    if (VAR_9 &&
        (VAR_9->Common.AmlOpcode == VAR_5))
    {


        VAR_9->Common.Parent = VAR_7->Common.Parent;



        FUNC_0 (VAR_7);
    }
    else
    {


        VAR_8->Common.Next = VAR_7->Common.Next;
    }



    VAR_7->Common.Value.Arg = ((void*)0);



    VAR_7->Common.DisasmFlags |= VAR_4;
    VAR_7->Common.DisasmOpcode = VAR_2;



    VAR_7->Common.Next = VAR_8;
}
