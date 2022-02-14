
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_8__ {int String; } ;
struct TYPE_9__ {int ParseOpcode; int CompileFlags; int EndLogicalLine; int LogicalLineNumber; int EndLine; int LineNumber; int Filename; TYPE_1__ Value; } ;
struct TYPE_10__ {TYPE_2__ Asl; } ;
typedef int ACPI_STATUS ;
typedef TYPE_3__ ACPI_PARSE_OBJECT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (TYPE_3__*,int ,int) ;
 int FUNC_4 (TYPE_3__*,int ) ;

__attribute__((used)) static ACPI_STATUS
FUNC_5 (
    ACPI_PARSE_OBJECT *VAR_3,
    UINT32 VAR_4,
    void *VAR_5)
{



    switch (VAR_3->Asl.ParseOpcode)
    {
        case 136:
        case 135:
        case 137:
        case 130:

        FUNC_4 (VAR_3, VAR_4);
        break;

    case 143:

        FUNC_3 (VAR_3, VAR_4, 2);
        break;

    case 129:
    case 132:

        FUNC_3 (VAR_3, VAR_4, 4);
        break;

    case 142:
    case 141:

        FUNC_3 (VAR_3, VAR_4, 8);
        break;

    case 131:
    case 138:
    case 134:
    case 128:
    case 133:

        FUNC_3 (VAR_3, VAR_4, 16);
        break;

    case 140:

        FUNC_0 (VAR_2,
            "Open: %s\n", VAR_3->Asl.Value.String);
        return (VAR_0);

    case 139:

        FUNC_0 (VAR_2,
            "Close: %s\n", VAR_3->Asl.Filename);
        return (VAR_0);

    default:

        FUNC_2 (VAR_3, VAR_4);
        break;
    }



    FUNC_0 (VAR_2, VAR_1,
        VAR_3->Asl.ParseOpcode, VAR_3->Asl.CompileFlags,
        VAR_3->Asl.LineNumber, VAR_3->Asl.EndLine,
        VAR_3->Asl.LogicalLineNumber, VAR_3->Asl.EndLogicalLine);

    FUNC_1 (VAR_3->Asl.CompileFlags, VAR_2);
    FUNC_0 (VAR_2, "\n");
    return (VAR_0);
}
