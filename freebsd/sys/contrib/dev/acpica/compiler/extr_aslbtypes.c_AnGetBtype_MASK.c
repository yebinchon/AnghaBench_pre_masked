
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ UINT32 ;
struct TYPE_14__ {TYPE_4__* Op; int Type; } ;
struct TYPE_12__ {scalar_t__ ParseOpcode; int CompileFlags; scalar_t__ AcpiBtype; TYPE_2__* Parent; int ExternalName; int LineNumber; int ParseOpName; TYPE_5__* Node; } ;
struct TYPE_13__ {TYPE_3__ Asl; } ;
struct TYPE_10__ {scalar_t__ ParseOpcode; int ParseOpName; } ;
struct TYPE_11__ {TYPE_1__ Asl; } ;
typedef TYPE_4__ ACPI_PARSE_OBJECT ;
typedef TYPE_5__ ACPI_NAMESPACE_NODE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,TYPE_4__*,char*) ;
 int FUNC_5 (int ,char*,int ,int ,int ,int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;

UINT32
FUNC_6 (
    ACPI_PARSE_OBJECT *VAR_15)
{
    ACPI_NAMESPACE_NODE *VAR_16;
    ACPI_PARSE_OBJECT *VAR_17;
    UINT32 VAR_18 = 0;


    if (!VAR_15)
    {
        FUNC_0 ("Null Op in AnGetBtype\n");
        return (VAR_0);
    }

    if ((VAR_15->Asl.ParseOpcode == VAR_13) ||
        (VAR_15->Asl.ParseOpcode == VAR_14) ||
        (VAR_15->Asl.ParseOpcode == VAR_12))
    {
        VAR_16 = VAR_15->Asl.Node;
        if (!VAR_16)
        {


            if ((VAR_15->Asl.Parent->Asl.ParseOpcode == VAR_11) ||
                (VAR_15->Asl.Parent->Asl.ParseOpcode == VAR_8) ||
                (VAR_15->Asl.Parent->Asl.ParseOpcode == VAR_10) ||
                (VAR_15->Asl.Parent->Asl.ParseOpcode == VAR_7) ||
                (VAR_15->Asl.Parent->Asl.ParseOpcode == VAR_6) ||
                (VAR_15->Asl.Parent->Asl.ParseOpcode == VAR_9) ||
                (VAR_15->Asl.Parent->Asl.ParseOpcode == VAR_5))
            {
                return (VAR_0 - 1);
            }

            FUNC_5 (VAR_1,
                "No attached Nsnode: [%s] at line %u name [%s], "
                "ignoring typecheck. Parent [%s]\n",
                VAR_15->Asl.ParseOpName, VAR_15->Asl.LineNumber,
                VAR_15->Asl.ExternalName, VAR_15->Asl.Parent->Asl.ParseOpName);
            return (VAR_0 - 1);
        }

        VAR_18 = FUNC_3 (VAR_16->Type);
        if (!VAR_18)
        {
            FUNC_4 (VAR_2, VAR_3, VAR_15,
                "could not map type");
        }

        if (VAR_15->Asl.ParseOpcode == VAR_12)
        {
            VAR_17 = VAR_16->Op;
            if (!VAR_17)
            {


                if (FUNC_2 (VAR_15))
                {
                    return (FUNC_1 (VAR_15));
                }

                FUNC_4 (VAR_2, VAR_3, VAR_15,
                    "null Op pointer");
                return (VAR_0);
            }

            if (VAR_17->Asl.CompileFlags & VAR_4)
            {
                VAR_18 = VAR_17->Asl.AcpiBtype;
            }
            else
            {
                return (VAR_0 -1);
            }
        }
    }
    else
    {
        VAR_18 = VAR_15->Asl.AcpiBtype;
    }

    return (VAR_18);
}
