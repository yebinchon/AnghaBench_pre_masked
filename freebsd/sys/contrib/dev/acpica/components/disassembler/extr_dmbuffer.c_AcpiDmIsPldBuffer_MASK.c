
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ UINT64 ;
struct TYPE_8__ {int Ascii; } ;
struct TYPE_11__ {TYPE_2__ Name; } ;
struct TYPE_7__ {scalar_t__ Integer; TYPE_4__* Arg; } ;
struct TYPE_9__ {scalar_t__ AmlOpcode; int DisasmFlags; TYPE_5__* Node; TYPE_4__* Parent; TYPE_1__ Value; TYPE_4__* Next; } ;
struct TYPE_10__ {TYPE_3__ Common; } ;
typedef int BOOLEAN ;
typedef TYPE_4__ ACPI_PARSE_OBJECT ;
typedef TYPE_5__ ACPI_NAMESPACE_NODE ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

BOOLEAN
FUNC_1 (
    ACPI_PARSE_OBJECT *VAR_9)
{
    ACPI_NAMESPACE_NODE *VAR_10;
    ACPI_PARSE_OBJECT *VAR_11;
    ACPI_PARSE_OBJECT *VAR_12;
    ACPI_PARSE_OBJECT *VAR_13;
    UINT64 VAR_14;
    UINT64 VAR_15;







    VAR_11 = VAR_9->Common.Value.Arg;
    if (VAR_11->Common.AmlOpcode != VAR_3)
    {
        return (VAR_6);
    }



    VAR_14 = VAR_11->Common.Value.Integer;
    if ((VAR_14 != VAR_1) &&
        (VAR_14 != VAR_2))
    {
        return (VAR_6);
    }
    VAR_12 = VAR_11->Common.Next;
    if (!VAR_12)
    {
        return (VAR_6);
    }

    VAR_15 = VAR_12->Common.Value.Integer;
    if ((VAR_15 != VAR_1) &&
        (VAR_15 != VAR_2))
    {
        return (VAR_6);
    }



    if (VAR_14 != VAR_15)
    {
        return (VAR_6);
    }



    VAR_13 = VAR_9->Common.Parent;
    if (!VAR_13)
    {
        return (VAR_6);
    }



    if (VAR_13->Common.AmlOpcode == VAR_4)
    {
        VAR_10 = VAR_13->Common.Node;

        if (FUNC_0 (VAR_10->Name.Ascii, VAR_7))
        {


            VAR_11->Common.DisasmFlags |= VAR_0;
            return (VAR_8);
        }

        return (VAR_6);
    }
    if (VAR_13->Common.AmlOpcode == VAR_5)
    {
        VAR_13 = VAR_13->Common.Parent;
        if (!VAR_13)
        {
            return (VAR_6);
        }

        if (VAR_13->Common.AmlOpcode == VAR_4)
        {
            VAR_10 = VAR_13->Common.Node;

            if (FUNC_0 (VAR_10->Name.Ascii, VAR_7))
            {


                VAR_11->Common.DisasmFlags |= VAR_0;
                return (VAR_8);
            }
        }
    }

    return (VAR_6);
}
