
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int DisasmFlags; TYPE_3__* Next; int OperatorSymbol; int Parent; } ;
struct TYPE_12__ {TYPE_4__ Common; } ;
struct TYPE_8__ {int String; } ;
struct TYPE_9__ {int DisasmFlags; scalar_t__ AmlOpcode; int Next; TYPE_1__ Value; } ;
struct TYPE_10__ {TYPE_2__ Common; } ;
typedef int BOOLEAN ;
typedef TYPE_5__ ACPI_PARSE_OBJECT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_5__*,int ,int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

BOOLEAN
FUNC_3 (
    ACPI_PARSE_OBJECT *VAR_7)
{

    if (!VAR_7->Common.Next)
    {
        FUNC_0 (VAR_7, VAR_2, ((void*)0), 0);
        return (VAR_5);
    }

    if (FUNC_1 (VAR_7->Common.Parent) & VAR_4)
    {


        if (VAR_7->Common.Next->Common.DisasmFlags & VAR_0)
        {
            FUNC_0 (VAR_7, VAR_2, ((void*)0), 0);
            return (VAR_5);
        }



        if ((VAR_7->Common.Next->Common.AmlOpcode == VAR_3) &&
            (!VAR_7->Common.Next->Common.Value.String))
        {






            if (!VAR_7->Common.Next->Common.Next)
            {
                FUNC_0 (VAR_7, VAR_2, ((void*)0), 0);
                return (VAR_5);
            }
        }

        if ((VAR_7->Common.DisasmFlags & VAR_1) &&
            (!(VAR_7->Common.Next->Common.DisasmFlags & VAR_1)))
        {
            FUNC_0 (VAR_7, VAR_2, ((void*)0), 0);
            return (VAR_5);
        }



        if (!VAR_7->Common.OperatorSymbol)
        {
            FUNC_2 (", ");
            FUNC_0 (VAR_7, VAR_2, ((void*)0), 0);
        }

        return (VAR_6);
    }

    else if ((VAR_7->Common.DisasmFlags & VAR_1) &&
             (VAR_7->Common.Next->Common.DisasmFlags & VAR_1))
    {
        FUNC_2 (", ");
        FUNC_0 (VAR_7, VAR_2, ((void*)0), 0);

        return (VAR_6);
    }

    return (VAR_5);
}
