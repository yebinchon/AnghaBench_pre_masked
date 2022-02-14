
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_8__ {char* String; int Integer; } ;
struct TYPE_9__ {int AmlOpcode; int AmlOpcodeLength; int AmlLength; int ParseOpcode; char* ExternalName; int CompileFlags; TYPE_1__ Value; int AmlPkgLenBytes; int AmlSubtreeLength; } ;
struct TYPE_10__ {TYPE_2__ Asl; } ;
typedef int ACPI_TABLE_HEADER ;
typedef int ACPI_STATUS ;
typedef TYPE_3__ ACPI_PARSE_OBJECT ;


 int FUNC_0 (int ) ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (int ,char*,int ) ;
 int VAR_2 ;
 int FUNC_4 (char*,char**) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (char*) ;

void
FUNC_7 (
    ACPI_PARSE_OBJECT *VAR_3)
{
    char *VAR_4;
    ACPI_STATUS VAR_5;


    switch (VAR_3->Asl.AmlOpcode)
    {
    case 143:

        VAR_3->Asl.AmlOpcodeLength = 0;
        VAR_3->Asl.AmlLength = 1;
        return;

    case 139:

        VAR_3->Asl.AmlOpcodeLength = 0;
        VAR_3->Asl.AmlLength = 2;
        return;

    case 141:

        VAR_3->Asl.AmlOpcodeLength = 0;
        VAR_3->Asl.AmlLength = 4;
        return;

    case 140:

        VAR_3->Asl.AmlOpcodeLength = 0;
        VAR_3->Asl.AmlLength = 8;
        return;

    case 144:



        VAR_3->Asl.AmlOpcodeLength = 0;
        return;

    case 142:



        VAR_3->Asl.AmlOpcodeLength = 0;
        return;

    default:

        break;
    }

    switch (VAR_3->Asl.ParseOpcode)
    {
    case 137:

        VAR_1 = sizeof (ACPI_TABLE_HEADER) + VAR_3->Asl.AmlSubtreeLength;
        break;

    case 132:

        VAR_3->Asl.AmlOpcodeLength = 0;
        VAR_3->Asl.AmlLength = 4;
        VAR_3->Asl.ExternalName = VAR_3->Asl.Value.String;
        break;

    case 131:
    case 133:

        if (VAR_3->Asl.CompileFlags & VAR_2)
        {
            break;
        }

        VAR_3->Asl.AmlOpcodeLength = 0;
        VAR_5 = FUNC_4 (VAR_3->Asl.Value.String, &VAR_4);
        if (FUNC_0 (VAR_5))
        {
            FUNC_3 (VAR_0,
                "Failure from internalize name %X\n", VAR_5);
            break;
        }

        VAR_3->Asl.ExternalName = VAR_3->Asl.Value.String;
        VAR_3->Asl.Value.String = VAR_4;
        VAR_3->Asl.CompileFlags |= VAR_2;
        VAR_3->Asl.AmlLength = FUNC_6 (VAR_4);






        if (VAR_3->Asl.AmlLength == 1 || FUNC_5(VAR_3))
        {
            VAR_3->Asl.AmlLength++;
        }
        break;

    case 128:

        VAR_3->Asl.AmlOpcodeLength = 1;



        VAR_3->Asl.AmlLength = FUNC_6 (VAR_3->Asl.Value.String) + 1;
        break;

    case 130:

        VAR_3->Asl.AmlOpcodeLength = 0;
        VAR_3->Asl.AmlPkgLenBytes = FUNC_2 (VAR_3,
            (UINT32) VAR_3->Asl.Value.Integer);
        break;

    case 129:

        VAR_3->Asl.AmlOpcodeLength = 0;
        break;

    case 138:
    case 135:
    case 134:



        break;

    case 136:

        FUNC_1 (VAR_3);
        break;

    default:

        FUNC_1 (VAR_3);
        break;
    }
}
