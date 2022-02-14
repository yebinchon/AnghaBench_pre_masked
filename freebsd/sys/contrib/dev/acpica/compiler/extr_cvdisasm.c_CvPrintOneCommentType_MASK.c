
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT8 ;
typedef int UINT32 ;
struct TYPE_4__ {char* InlineComment; char* EndNodeComment; char* NameComment; char* CloseBraceComment; int * EndBlkComment; int * CommentList; } ;
struct TYPE_5__ {TYPE_1__ Common; } ;
typedef scalar_t__ BOOLEAN ;
typedef TYPE_2__ ACPI_PARSE_OBJECT ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

void
FUNC_4 (
    ACPI_PARSE_OBJECT *VAR_2,
    UINT8 VAR_3,
    char* VAR_4,
    UINT32 VAR_5)
{
    BOOLEAN VAR_6 = VAR_0;
    char **VAR_7 = ((void*)0);


    switch (VAR_3)
    {
    case 129:

        if (FUNC_2 (VAR_2->Common.CommentList))
        {
            FUNC_3 (VAR_2->Common.CommentList, VAR_5);
            FUNC_1 ("\n");
        }
        else
        {
            FUNC_3 (VAR_2->Common.CommentList, VAR_5);
        }

        VAR_2->Common.CommentList = ((void*)0);
        return;

    case 131:

        if (VAR_2->Common.EndBlkComment)
        {
            FUNC_3 (VAR_2->Common.EndBlkComment, VAR_5);
            VAR_2->Common.EndBlkComment = ((void*)0);
            FUNC_0(VAR_5);
        }
        return;

    case 133:

        VAR_7 = &VAR_2->Common.InlineComment;
        break;

    case 130:

        VAR_7 = &VAR_2->Common.EndNodeComment;
        break;

    case 128:

        VAR_7 = &VAR_2->Common.NameComment;
        break;

    case 132:

        VAR_7 = &VAR_2->Common.CloseBraceComment;
        break;

    default:
        return;
    }

    if (*VAR_7)
    {
        VAR_6 = VAR_1;
        FUNC_1 ("%s", *VAR_7);
        *VAR_7 = ((void*)0);
    }

    if (VAR_6 && VAR_4)
    {
        FUNC_1 ("%s", VAR_4);
    }
}
