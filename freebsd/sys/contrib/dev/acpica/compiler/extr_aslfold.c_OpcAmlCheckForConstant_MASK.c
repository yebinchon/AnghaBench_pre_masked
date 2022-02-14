
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


typedef int UINT32 ;
struct TYPE_14__ {int Flags; } ;
struct TYPE_11__ {scalar_t__ AmlOpcode; int CompileFlags; scalar_t__ ParseOpcode; int ParseOpName; TYPE_5__* Parent; int LogicalLineNumber; } ;
struct TYPE_9__ {scalar_t__ AmlOpcode; } ;
struct TYPE_13__ {TYPE_3__ Asl; TYPE_1__ Common; } ;
struct TYPE_12__ {scalar_t__ Opcode; TYPE_2__* OpInfo; TYPE_5__* Op; } ;
struct TYPE_10__ {int Flags; } ;
typedef TYPE_4__ ACPI_WALK_STATE ;
typedef int ACPI_STATUS ;
typedef TYPE_5__ ACPI_PARSE_OBJECT ;
typedef TYPE_6__ ACPI_OPCODE_INFO ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ,TYPE_5__*,char*) ;
 int FUNC_3 (int ,char*,...) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static ACPI_STATUS
FUNC_5 (
    ACPI_PARSE_OBJECT *VAR_20,
    UINT32 VAR_21,
    void *VAR_22)
{
    ACPI_WALK_STATE *VAR_23 = VAR_22;
    ACPI_STATUS VAR_24 = VAR_1;
    ACPI_PARSE_OBJECT *VAR_25;
    const ACPI_OPCODE_INFO *VAR_26;


    VAR_23->Op = VAR_20;
    VAR_23->Opcode = VAR_20->Common.AmlOpcode;
    VAR_23->OpInfo = FUNC_1 (VAR_20->Common.AmlOpcode);

    FUNC_3 (VAR_15, "[%.4d] Opcode: %12.12s ",
        VAR_20->Asl.LogicalLineNumber, VAR_20->Asl.ParseOpName);





    if ((VAR_23->Opcode == VAR_7) ||
        (VAR_23->Opcode == VAR_10) ||
        (VAR_23->Opcode == VAR_8) ||
        (VAR_23->Opcode == VAR_9))
    {
        FUNC_3 (VAR_15, "RAW DATA");
        VAR_24 = VAR_2;
        goto CleanupAndExit;
    }






    VAR_25 = VAR_20->Asl.Parent;
    while (VAR_25)
    {


        if (VAR_25->Asl.AmlOpcode == VAR_6)
        {
            break;
        }
        VAR_26 = FUNC_1 (VAR_25->Common.AmlOpcode);
        if (VAR_26->Flags & VAR_5)
        {
            VAR_25 = ((void*)0);
            break;
        }

        VAR_25 = VAR_25->Asl.Parent;
    }



    if (!(VAR_23->OpInfo->Flags & VAR_4))
    {
        if (VAR_25)
        {


            if (VAR_20->Asl.CompileFlags & VAR_17)
            {
                FUNC_2 (VAR_11, VAR_13, VAR_20, ((void*)0));
                VAR_24 = VAR_2;
            }



            if (!(VAR_25->Asl.CompileFlags & VAR_16))
            {


                VAR_25->Asl.CompileFlags |= VAR_16;
                FUNC_3 (VAR_15,
                    "**** Could not reduce operands for NAME opcode ****\n");

                FUNC_2 (VAR_11, VAR_12, VAR_20,
                    "Constant is required for Name operator");
                VAR_24 = VAR_2;
            }
        }

        if (FUNC_0 (VAR_24))
        {
            goto CleanupAndExit;
        }



        if (VAR_20->Asl.CompileFlags & VAR_17)
        {
            FUNC_3 (VAR_15,
                "**** Valid Target, transform to Store or CopyObject ****\n");
            return (VAR_0);
        }



        FUNC_3 (VAR_15,
            "**** Not a Type 3/4/5 opcode or cannot reduce/fold (%s) ****\n",
             VAR_20->Asl.ParseOpName);

        VAR_24 = VAR_2;
        goto CleanupAndExit;
    }
    if (VAR_23->Opcode == VAR_3)
    {
        FUNC_3 (VAR_15,
            "\nBuffer constant reduction is currently not supported\n");

        if (VAR_25)
        {
            FUNC_2 (VAR_11, VAR_14, VAR_20,
                "Buffer expression cannot be reduced");
        }

        VAR_24 = VAR_2;
        goto CleanupAndExit;
    }



    FUNC_3 (VAR_15, "TYPE_345");

    if (VAR_20->Asl.CompileFlags & VAR_17)
    {
        if (VAR_20->Asl.ParseOpcode == VAR_19)
        {
            FUNC_3 (VAR_15, "%-16s", " NULL TARGET");
        }
        else
        {
            FUNC_3 (VAR_15, "%-16s", " VALID TARGET");
        }
    }

    if (VAR_20->Asl.CompileFlags & VAR_18)
    {
        FUNC_3 (VAR_15, "%-16s", " TERMARG");
    }

CleanupAndExit:



    FUNC_4 (VAR_20->Asl.CompileFlags, VAR_15);
    FUNC_3 (VAR_15, "\n");
    return (VAR_24);
}
