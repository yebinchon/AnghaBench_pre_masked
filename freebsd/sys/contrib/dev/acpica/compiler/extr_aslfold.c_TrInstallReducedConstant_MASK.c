
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_9__ ;
typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_10__ ;


struct TYPE_24__ {char* String; int Integer; } ;
struct TYPE_25__ {TYPE_9__* Next; TYPE_9__* Parent; TYPE_6__ Value; int AmlLength; int AmlOpcode; TYPE_9__* Child; int CompileFlags; int ParseOpcode; int ParseOpName; } ;
struct TYPE_22__ {int String; int Integer; } ;
struct TYPE_23__ {int AmlOpcode; TYPE_4__ Value; } ;
struct TYPE_27__ {TYPE_7__ Asl; TYPE_5__ Common; } ;
struct TYPE_26__ {int Length; scalar_t__ Pointer; } ;
struct TYPE_21__ {int Pointer; } ;
struct TYPE_20__ {int Value; } ;
struct TYPE_19__ {int Type; } ;
struct TYPE_18__ {TYPE_8__ Buffer; TYPE_3__ String; TYPE_2__ Integer; TYPE_1__ Common; } ;
typedef TYPE_9__ ACPI_PARSE_OBJECT ;
typedef TYPE_10__ ACPI_OPERAND_OBJECT ;


 int FUNC_0 (int ) ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int ,TYPE_9__*,int ) ;
 int VAR_7 ;
 int FUNC_2 (int ,char*,int ,...) ;
 int VAR_8 ;
 int FUNC_3 (TYPE_9__*) ;
 int FUNC_4 (TYPE_9__*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_9__* FUNC_5 (int ) ;
 int FUNC_6 (TYPE_9__*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8 (
    ACPI_PARSE_OBJECT *VAR_13,
    ACPI_OPERAND_OBJECT *VAR_14)
{
    ACPI_PARSE_OBJECT *VAR_15;
    ACPI_PARSE_OBJECT *VAR_16;


    VAR_7++;
    FUNC_1 (VAR_5, VAR_4, VAR_13,
        VAR_13->Asl.ParseOpName);





    switch (VAR_14->Common.Type)
    {
    case 129:

        FUNC_4 (VAR_13, VAR_14->Integer.Value);

        FUNC_2 (VAR_6,
            "Constant expression reduced to (%s) %8.8X%8.8X\n\n",
            VAR_13->Asl.ParseOpName,
            FUNC_0 (VAR_13->Common.Value.Integer));
        break;

    case 128:

        VAR_13->Asl.ParseOpcode = VAR_12;
        VAR_13->Common.AmlOpcode = VAR_3;
        VAR_13->Asl.AmlLength = FUNC_7 (VAR_14->String.Pointer) + 1;
        VAR_13->Common.Value.String = VAR_14->String.Pointer;

        FUNC_2 (VAR_6,
            "Constant expression reduced to (STRING) %s\n\n",
            VAR_13->Common.Value.String);
        break;

    case 130:







        VAR_13->Asl.ParseOpcode = VAR_9;
        VAR_13->Common.AmlOpcode = VAR_0;
        VAR_13->Asl.CompileFlags = VAR_8;
        FUNC_6 (VAR_13);



        VAR_15 = FUNC_5 (VAR_10);

        VAR_15->Asl.AmlOpcode = VAR_1;
        VAR_15->Asl.Value.Integer = VAR_14->Buffer.Length;
        VAR_15->Asl.Parent = VAR_13;
        (void) FUNC_3 (VAR_15);

        VAR_13->Asl.Child = VAR_15;



        VAR_16 = FUNC_5 (VAR_11);
        VAR_16->Asl.AmlOpcode = VAR_2;
        VAR_16->Asl.AmlLength = VAR_14->Buffer.Length;
        VAR_16->Asl.Value.String = (char *) VAR_14->Buffer.Pointer;
        VAR_16->Asl.Parent = VAR_13;

        VAR_15->Asl.Next = VAR_16;

        FUNC_2 (VAR_6,
            "Constant expression reduced to (BUFFER) length %X\n\n",
            VAR_14->Buffer.Length);
        break;

    default:
        break;
    }
}
