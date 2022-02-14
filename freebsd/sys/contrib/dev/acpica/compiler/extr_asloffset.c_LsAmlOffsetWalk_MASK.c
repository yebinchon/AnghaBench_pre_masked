
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int UINT8 ;
typedef scalar_t__ UINT32 ;
struct TYPE_10__ {scalar_t__ Type; } ;
struct TYPE_7__ {int Integer; } ;
struct TYPE_8__ {int CompileFlags; int AmlOpcode; scalar_t__ FinalAmlLength; int ParseOpName; TYPE_3__* Child; TYPE_1__ Value; TYPE_3__* Next; int Extra; TYPE_4__* Node; } ;
struct TYPE_9__ {TYPE_2__ Asl; } ;
typedef int ACPI_STATUS ;
typedef TYPE_3__ ACPI_PARSE_OBJECT ;
typedef TYPE_4__ ACPI_NAMESPACE_NODE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (void*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int const VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (scalar_t__,char*,int ) ;
 int FUNC_2 (scalar_t__,TYPE_4__*,scalar_t__,scalar_t__,int ,int ,int ,int const) ;
 int VAR_6 ;
 int VAR_7 ;

ACPI_STATUS
FUNC_3 (
    ACPI_PARSE_OBJECT *VAR_8,
    UINT32 VAR_9,
    void *VAR_10)
{
    UINT32 VAR_11 = (UINT32) FUNC_0 (VAR_10);
    ACPI_NAMESPACE_NODE *VAR_12;
    UINT32 VAR_13;
    UINT32 VAR_14;
    UINT32 VAR_15;
    ACPI_PARSE_OBJECT *VAR_16;




    if (VAR_8->Asl.CompileFlags & VAR_6)
    {
        return (VAR_2);
    }



    VAR_12 = VAR_8->Asl.Node;
    if (!VAR_12)
    {
        VAR_4 += VAR_8->Asl.FinalAmlLength;
        return (VAR_2);
    }



    if ((VAR_12->Type == VAR_1) &&
        (VAR_8->Asl.CompileFlags & VAR_7))
    {
        FUNC_2 (VAR_11, VAR_12, 0, VAR_4,
            VAR_8->Asl.ParseOpName, 0, VAR_8->Asl.Extra, VAR_3);

        VAR_4 += VAR_8->Asl.FinalAmlLength;
        return (VAR_2);
    }

    switch (VAR_8->Asl.AmlOpcode)
    {
    case 139:



        if (!VAR_8->Asl.Child)
        {
            FUNC_1 (VAR_11, "%s NO CHILD!\n", VAR_5);
            return (VAR_2);
        }

        VAR_13 = VAR_8->Asl.FinalAmlLength;



        VAR_8 = VAR_8->Asl.Child;



        VAR_14 = VAR_4 + VAR_13 +
            (VAR_8->Asl.FinalAmlLength - VAR_0);

        VAR_15 = VAR_4 + VAR_13 +
            VAR_8->Asl.FinalAmlLength;



        VAR_8 = VAR_8->Asl.Next;
        switch (VAR_8->Asl.AmlOpcode)
        {
        case 143:
        case 129:
        case 141:
        case 134:



            FUNC_2 (VAR_11, VAR_12, VAR_14, (VAR_15 + 1),
                VAR_8->Asl.ParseOpName, VAR_8->Asl.Value.Integer,
                (UINT8) VAR_8->Asl.AmlOpcode, 139);
            break;

        case 137:
        case 138:
        case 128:



            FUNC_2 (VAR_11, VAR_12, VAR_14, VAR_15,
                VAR_8->Asl.ParseOpName, VAR_8->Asl.Value.Integer,
                (UINT8) VAR_8->Asl.AmlOpcode, 139);
            break;

        case 136:
        case 130:



            VAR_16 = VAR_8->Asl.Child;

            FUNC_2 (VAR_11, VAR_12, VAR_14, VAR_15,
                VAR_8->Asl.ParseOpName, VAR_16->Asl.Value.Integer,
                (UINT8) VAR_8->Asl.AmlOpcode, 139);
            break;

         default:
             break;
        }

        VAR_4 += VAR_13;
        return (VAR_2);

    case 133:



        VAR_13 = VAR_8->Asl.FinalAmlLength;



        VAR_16 = VAR_8->Asl.Child;



        VAR_14 = VAR_4 + VAR_13 +
            (VAR_16->Asl.FinalAmlLength - VAR_0);

        VAR_15 = VAR_4 + VAR_13 +
            (VAR_16->Asl.FinalAmlLength + 1);



        VAR_16 = VAR_16->Asl.Next;
        VAR_16 = VAR_16->Asl.Next;

        switch (VAR_16->Asl.AmlOpcode)
        {





        case 143:
        case 129:
        case 141:
        case 134:

            FUNC_2 (VAR_11, VAR_12, VAR_14, (VAR_15 + 1),
                VAR_8->Asl.ParseOpName, VAR_16->Asl.Value.Integer,
                (UINT8) VAR_16->Asl.AmlOpcode, 133);

            VAR_4 += VAR_13;
            return (VAR_2);

        default:
            break;
        }
        break;

    case 140:



        VAR_13 = VAR_8->Asl.FinalAmlLength;



        VAR_16 = VAR_8->Asl.Child;



        VAR_14 = VAR_4 + VAR_13 +
            (VAR_16->Asl.FinalAmlLength - VAR_0);

        VAR_15 = VAR_4 + VAR_13 +
            VAR_16->Asl.FinalAmlLength;



        VAR_16 = VAR_16->Asl.Next;

        FUNC_2 (VAR_11, VAR_12, VAR_14, VAR_15,
            VAR_8->Asl.ParseOpName, VAR_16->Asl.Value.Integer,
            (UINT8) VAR_8->Asl.AmlOpcode, 140);
        break;

    case 135:



        VAR_13 = VAR_8->Asl.FinalAmlLength;
        VAR_16 = VAR_8->Asl.Child;



        VAR_14 = VAR_4 + VAR_13 +
            (VAR_16->Asl.FinalAmlLength - VAR_0);

        VAR_15 = VAR_4 + VAR_13 +
            (VAR_16->Asl.FinalAmlLength + 1);

        VAR_16 = VAR_16->Asl.Next;
        VAR_16 = VAR_16->Asl.Next;

        FUNC_2 (VAR_11, VAR_12, VAR_14, VAR_15,
            VAR_8->Asl.ParseOpName, VAR_16->Asl.Value.Integer,
            (UINT8) 141, 135);
        break;

    case 142:
    case 132:
    case 131:



        VAR_13 = VAR_8->Asl.FinalAmlLength;
        VAR_16 = VAR_8->Asl.Child;



        VAR_14 = VAR_4 + VAR_13 +
            (VAR_16->Asl.FinalAmlLength - VAR_0);

        FUNC_2 (VAR_11, VAR_12, VAR_14, 0,
            VAR_8->Asl.ParseOpName, 0, (UINT8) 0, VAR_8->Asl.AmlOpcode);
        break;

    default:
        break;
    }

    VAR_4 += VAR_8->Asl.FinalAmlLength;
    return (VAR_2);
}
