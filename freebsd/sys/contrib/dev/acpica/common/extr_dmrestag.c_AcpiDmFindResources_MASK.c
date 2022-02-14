
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ AmlOpcode; int Node; int DisasmOpcode; TYPE_2__* Parent; } ;
struct TYPE_10__ {TYPE_1__ Common; } ;
typedef TYPE_2__ ACPI_PARSE_OBJECT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (int *,TYPE_2__*) ;
 TYPE_2__* FUNC_3 (TYPE_2__*,TYPE_2__*) ;

void
FUNC_4 (
    ACPI_PARSE_OBJECT *VAR_3)
{
    ACPI_PARSE_OBJECT *VAR_4 = VAR_3;
    ACPI_PARSE_OBJECT *VAR_5;




    while (VAR_4)
    {


        if (VAR_4->Common.AmlOpcode == VAR_1)
        {


            VAR_5 = VAR_4->Common.Parent;
            if (VAR_5->Common.AmlOpcode == VAR_2)
            {





                if (FUNC_0 (FUNC_2 (((void*)0), VAR_4)))
                {
                    VAR_4->Common.DisasmOpcode = VAR_0;
                    FUNC_1 (VAR_5->Common.Node, VAR_4);
                }
            }
        }

        VAR_4 = FUNC_3 (VAR_3, VAR_4);
    }
}
