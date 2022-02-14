
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ UINT32 ;
struct TYPE_7__ {struct TYPE_7__* Next; scalar_t__ Comment; } ;
struct TYPE_5__ {scalar_t__ CloseBraceComment; scalar_t__ EndNodeComment; scalar_t__ InlineComment; TYPE_3__* EndBlkComment; TYPE_3__* CommentList; scalar_t__ ParentFilename; scalar_t__ Filename; scalar_t__ FileChanged; int ParseOpName; } ;
struct TYPE_6__ {TYPE_1__ Asl; } ;
typedef TYPE_2__ ACPI_PARSE_OBJECT ;
typedef TYPE_3__ ACPI_COMMENT_NODE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

UINT32
FUNC_3(
   ACPI_PARSE_OBJECT *VAR_1)
{
    UINT32 VAR_2 = 0;
    UINT32 VAR_3 = 0;
    ACPI_COMMENT_NODE *VAR_4 = ((void*)0);


    if (!VAR_0)
    {
        return (0);
    }

    FUNC_1 ("==Calculating comment lengths for %s\n",
        VAR_1->Asl.ParseOpName);

    if (VAR_1->Asl.FileChanged)
    {
        VAR_3 += FUNC_2 (VAR_1->Asl.Filename) + 3;

        if (VAR_1->Asl.ParentFilename &&
            FUNC_0 (VAR_1->Asl.Filename, VAR_1->Asl.ParentFilename))
        {
            VAR_3 += FUNC_2 (VAR_1->Asl.ParentFilename) + 3;
        }
    }

    if (VAR_1->Asl.CommentList)
    {
        VAR_4 = VAR_1->Asl.CommentList;
        while (VAR_4)
        {
            VAR_2 = FUNC_2 (VAR_4->Comment)+3;
            FUNC_1 ("Length of standard comment: %d\n", VAR_2);
            FUNC_1 ("    Comment string: %s\n\n", VAR_4->Comment);
            VAR_3 += VAR_2;
            VAR_4 = VAR_4->Next;
        }
    }

    if (VAR_1->Asl.EndBlkComment)
    {
        VAR_4 = VAR_1->Asl.EndBlkComment;
        while (VAR_4)
        {
            VAR_2 = FUNC_2 (VAR_4->Comment)+3;
            FUNC_1 ("Length of endblkcomment: %d\n", VAR_2);
            FUNC_1 ("    Comment string: %s\n\n", VAR_4->Comment);
            VAR_3 += VAR_2;
            VAR_4 = VAR_4->Next;
        }
    }

    if (VAR_1->Asl.InlineComment)
    {
        VAR_2 = FUNC_2 (VAR_1->Asl.InlineComment)+3;
        FUNC_1 ("Length of inline comment: %d\n", VAR_2);
        FUNC_1 ("    Comment string: %s\n\n", VAR_1->Asl.InlineComment);
        VAR_3 += VAR_2;
    }

    if (VAR_1->Asl.EndNodeComment)
    {
        VAR_2 = FUNC_2(VAR_1->Asl.EndNodeComment)+3;
        FUNC_1 ("Length of end node comment +3: %d\n", VAR_2);
        FUNC_1 ("    Comment string: %s\n\n", VAR_1->Asl.EndNodeComment);
        VAR_3 += VAR_2;
    }

    if (VAR_1->Asl.CloseBraceComment)
    {
        VAR_2 = FUNC_2 (VAR_1->Asl.CloseBraceComment)+3;
        FUNC_1 ("Length of close brace comment: %d\n", VAR_2);
        FUNC_1 ("    Comment string: %s\n\n", VAR_1->Asl.CloseBraceComment);
        VAR_3 += VAR_2;
    }

    FUNC_1("\n\n");
    return (VAR_3);
}
