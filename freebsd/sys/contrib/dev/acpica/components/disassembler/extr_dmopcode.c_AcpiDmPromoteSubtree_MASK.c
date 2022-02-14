
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_3__* Arg; } ;
struct TYPE_6__ {TYPE_3__* Next; TYPE_3__* Parent; TYPE_1__ Value; } ;
struct TYPE_7__ {TYPE_2__ Common; } ;
typedef TYPE_3__ ACPI_PARSE_OBJECT ;



__attribute__((used)) static void
FUNC_0 (
    ACPI_PARSE_OBJECT *VAR_0)
{
    ACPI_PARSE_OBJECT *VAR_1;
    ACPI_PARSE_OBJECT *VAR_2;




    VAR_2 = VAR_0->Common.Parent;



    VAR_1 = VAR_0->Common.Value.Arg;



    while (VAR_1)
    {
        VAR_1->Common.Parent = VAR_2;
        if (!VAR_1->Common.Next)
        {


            VAR_1->Common.Next = VAR_0->Common.Next;
            break;
        }
        VAR_1 = VAR_1->Common.Next;
    }
}
