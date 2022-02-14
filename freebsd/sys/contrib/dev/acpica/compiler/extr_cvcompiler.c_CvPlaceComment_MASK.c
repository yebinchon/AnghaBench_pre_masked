
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT8 ;
struct TYPE_6__ {TYPE_2__* ParsingParenBraceNode; TYPE_2__* LatestParseOp; } ;
struct TYPE_4__ {char* CloseBraceComment; void* EndNodeComment; void* InlineComment; } ;
struct TYPE_5__ {TYPE_1__ Asl; } ;
typedef TYPE_2__ ACPI_PARSE_OBJECT ;







 TYPE_3__ VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (char*) ;
 void* FUNC_1 (void*,char*) ;
 int FUNC_2 (char*,char*,int) ;

void
FUNC_3(
    UINT8 VAR_2,
    char *VAR_3)
{
    ACPI_PARSE_OBJECT *VAR_4;
    ACPI_PARSE_OBJECT *VAR_5;


    VAR_4 = VAR_0.LatestParseOp;
    VAR_5 = VAR_0.ParsingParenBraceNode;
    FUNC_2 ("Placing comment %s for type %d\n", VAR_3, VAR_2);

    switch (VAR_2)
    {
    case 128:

        FUNC_0 (VAR_3);
        break;

    case 132:

        VAR_4->Asl.InlineComment =
            FUNC_1 (VAR_4->Asl.InlineComment,
            VAR_3);
        break;

    case 129:

        VAR_1 =
            FUNC_1(VAR_1,
            VAR_3);
        break;

    case 130:

        if (VAR_5)
        {
            VAR_5->Asl.EndNodeComment =
                FUNC_1 (VAR_5->Asl.EndNodeComment,
                VAR_3);
        }
        else
        {
            VAR_4->Asl.EndNodeComment =
                FUNC_1 (VAR_4->Asl.EndNodeComment,
                VAR_3);
        }
        break;

    case 131:

        VAR_4->Asl.CloseBraceComment = VAR_3;
        break;

    default:

        break;
    }
}
