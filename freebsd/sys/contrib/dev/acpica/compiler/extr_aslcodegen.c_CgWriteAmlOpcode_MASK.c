
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int UINT8 ;
typedef int UINT32 ;
typedef int UINT16 ;
struct TYPE_7__ {int Integer; int* String; } ;
struct TYPE_8__ {scalar_t__ ParseOpcode; int AmlOpcode; int AmlPkgLenBytes; int CompileFlags; int AmlLength; TYPE_1__ Value; int AmlSubtreeLength; } ;
struct TYPE_9__ {TYPE_2__ Asl; } ;
typedef TYPE_3__ ACPI_PARSE_OBJECT ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_3__*,int*,int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,char*) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4 (
    ACPI_PARSE_OBJECT *VAR_7)
{
    UINT8 VAR_8;
    UINT32 VAR_9;
    union {
        UINT16 Opcode;
        UINT8 OpcodeBytes[2];
    } VAR_10;
    union {
        UINT32 Len;
        UINT8 LenBytes[4];
    } VAR_11;




    if (VAR_7->Asl.ParseOpcode == VAR_6)
    {
        return;
    }





    if (VAR_4)
    {
        FUNC_1(VAR_7);
    }

    switch (VAR_7->Asl.AmlOpcode)
    {
    case 129:



        FUNC_3 ("Found a node with an unassigned AML opcode\n");
        FUNC_2 (VAR_3,
            "Found a node with an unassigned AML opcode\n");
        return;

    case 133:



        VAR_10.Opcode = VAR_2;
        break;

    case 135:

        VAR_10.Opcode = VAR_0;
        break;

    case 134:

        VAR_10.Opcode = VAR_1;
        break;

    default:

        VAR_10.Opcode = VAR_7->Asl.AmlOpcode;
        break;
    }


    switch (VAR_10.Opcode)
    {
    case 132:



        VAR_11.Len = (UINT32) VAR_7->Asl.Value.Integer;
        break;

    default:



        if (VAR_10.Opcode > 0x00FF)
        {


            FUNC_0 (VAR_7, &VAR_10.OpcodeBytes[1], 1);
        }

        FUNC_0 (VAR_7, &VAR_10.OpcodeBytes[0], 1);



        VAR_11.Len = VAR_7->Asl.AmlSubtreeLength + VAR_7->Asl.AmlPkgLenBytes;
        break;
    }



    if (VAR_7->Asl.CompileFlags & VAR_5)
    {
        if (VAR_7->Asl.AmlPkgLenBytes == 1)
        {


            FUNC_0 (VAR_7, &VAR_11.LenBytes[0], 1);
        }
        else if (VAR_7->Asl.AmlPkgLenBytes != 0)
        {




            VAR_8 = (UINT8)
                (((UINT32) (VAR_7->Asl.AmlPkgLenBytes - 1) << 6) |
                (VAR_11.LenBytes[0] & 0x0F));

            FUNC_0 (VAR_7, &VAR_8, 1);





            VAR_11.Len >>= 4;





            for (VAR_9 = 0; VAR_9 < (UINT32) (VAR_7->Asl.AmlPkgLenBytes - 1); VAR_9++)
            {
                FUNC_0 (VAR_7, &VAR_11.LenBytes[VAR_9], 1);
            }
        }
    }

    switch (VAR_10.Opcode)
    {
    case 137:

        FUNC_0 (VAR_7, &VAR_7->Asl.Value.Integer, 1);
        break;

    case 128:

        FUNC_0 (VAR_7, &VAR_7->Asl.Value.Integer, 2);
       break;

    case 136:

        FUNC_0 (VAR_7, &VAR_7->Asl.Value.Integer, 4);
        break;

    case 131:

        FUNC_0 (VAR_7, &VAR_7->Asl.Value.Integer, 8);
        break;

    case 130:

        FUNC_0 (VAR_7, VAR_7->Asl.Value.String, VAR_7->Asl.AmlLength);
        break;

    default:



        break;
    }
}
