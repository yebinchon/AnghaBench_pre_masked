
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int UINT8 ;
struct TYPE_8__ {char* Comment; struct TYPE_8__* Next; } ;
struct TYPE_6__ {scalar_t__ ParseOpcode; char* InlineComment; char* EndNodeComment; char* CloseBraceComment; TYPE_3__* EndBlkComment; TYPE_3__* CommentList; scalar_t__ FileChanged; scalar_t__ ParentFilename; scalar_t__ Filename; int ParseOpName; } ;
struct TYPE_7__ {TYPE_1__ Asl; } ;
typedef TYPE_2__ ACPI_PARSE_OBJECT ;
typedef TYPE_3__ ACPI_COMMENT_NODE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,char*,int ) ;
 int FUNC_2 (char*,char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* FUNC_3 (scalar_t__,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;

void
FUNC_4(
    ACPI_PARSE_OBJECT *VAR_13)
{
    ACPI_COMMENT_NODE *VAR_14;
    UINT8 VAR_15;
    char *VAR_16;
    char *VAR_17;


    if ((VAR_13->Asl.ParseOpcode == VAR_10) ||
         !VAR_0)
    {
        return;
    }



    if (VAR_13->Asl.FileChanged)
    {



        VAR_16 =
            FUNC_3 (VAR_13->Asl.Filename, VAR_6);
        if (VAR_16)
        {
            FUNC_2 ("Writing file comment, \"%s\" for %s\n",
                VAR_16, VAR_13->Asl.ParseOpName);
        }

        FUNC_1(VAR_13, VAR_16, VAR_5);

        if (VAR_13->Asl.ParentFilename &&
            FUNC_0 (VAR_13->Asl.ParentFilename, VAR_13->Asl.Filename))
        {
            VAR_17 = FUNC_3 (VAR_13->Asl.ParentFilename,
                VAR_6);
            FUNC_1(VAR_13, VAR_17, VAR_9);
        }



        VAR_13->Asl.FileChanged = VAR_4;
    }






    VAR_14 = VAR_13->Asl.CommentList;
    if (VAR_13->Asl.ParseOpcode == VAR_11)
    {
        VAR_15 = VAR_7;
    }
    else
    {
        VAR_15 = VAR_12;
    }

    while (VAR_14)
    {
        FUNC_1(VAR_13, VAR_14->Comment, VAR_15);
        VAR_14 = VAR_14->Next;
    }

    VAR_13->Asl.CommentList = ((void*)0);

    VAR_14 = VAR_13->Asl.EndBlkComment;
    VAR_15 = VAR_2;
    while (VAR_14)
    {
        FUNC_1(VAR_13, VAR_14->Comment, VAR_15);
        VAR_14 = VAR_14->Next;
    }

    VAR_13->Asl.EndBlkComment = ((void*)0);



    if (VAR_13->Asl.InlineComment)
    {
        VAR_15 = VAR_8;
        FUNC_1(VAR_13, VAR_13->Asl.InlineComment, VAR_15);
        VAR_13->Asl.InlineComment = ((void*)0);
    }

    if (VAR_13->Asl.EndNodeComment)
    {
        VAR_15 = VAR_3;
        FUNC_1(VAR_13, VAR_13->Asl.EndNodeComment, VAR_15);
        VAR_13->Asl.EndNodeComment = ((void*)0);
    }

    if (VAR_13->Asl.CloseBraceComment)
    {
        VAR_15 = VAR_1;
        FUNC_1(VAR_13, VAR_13->Asl.CloseBraceComment, VAR_15);
        VAR_13->Asl.CloseBraceComment = ((void*)0);
    }
}
