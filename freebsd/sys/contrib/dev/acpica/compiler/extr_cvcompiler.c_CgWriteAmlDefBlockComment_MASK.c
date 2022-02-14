
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int UINT8 ;
struct TYPE_8__ {char* Comment; struct TYPE_8__* Next; } ;
struct TYPE_6__ {scalar_t__ ParseOpcode; char* CloseBraceComment; TYPE_3__* CommentList; int Filename; } ;
struct TYPE_7__ {TYPE_1__ Asl; } ;
typedef TYPE_2__ ACPI_PARSE_OBJECT ;
typedef TYPE_3__ ACPI_COMMENT_NODE ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,char*,int ) ;
 int FUNC_1 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int ) ;
 char* FUNC_6 (char*,char) ;

void
FUNC_7(
    ACPI_PARSE_OBJECT *VAR_6)
{
    UINT8 VAR_7;
    ACPI_COMMENT_NODE *VAR_8;
    char *VAR_9;
    char *VAR_10;
    char *VAR_11;


    if (!VAR_0 ||
        (VAR_6->Asl.ParseOpcode != VAR_4))
    {
        return;
    }

    FUNC_1 ("Printing comments for a definition block..\n");



    VAR_9 = FUNC_2 (FUNC_5 (VAR_6->Asl.Filename));
    FUNC_4 (VAR_9, VAR_6->Asl.Filename);
    VAR_11 = FUNC_6 (VAR_9, '/');
    VAR_10 = FUNC_6 (VAR_9, '.');

    if (VAR_10 && (VAR_10 > VAR_11))
    {


        VAR_10++;
        *VAR_10 = 0;
        FUNC_3 (VAR_10, VAR_3);
    }
    else
    {


        FUNC_3 (VAR_9, ".");
        FUNC_3 (VAR_9, VAR_3);
    }

    VAR_7 = VAR_2;
    FUNC_0(VAR_6, VAR_9, VAR_7);

    VAR_8 = VAR_6->Asl.CommentList;
    VAR_7 = VAR_5;

    while (VAR_8)
    {
        FUNC_0(VAR_6, VAR_8->Comment, VAR_7);
        FUNC_1 ("Printing comment: %s\n", VAR_8->Comment);
        VAR_8 = VAR_8->Next;
    }

    VAR_6->Asl.CommentList = ((void*)0);



    if (VAR_6->Asl.CloseBraceComment)
    {
        VAR_7 = VAR_1;
        FUNC_0(VAR_6, VAR_6->Asl.CloseBraceComment, VAR_7);
        VAR_6->Asl.CloseBraceComment = ((void*)0);
    }
}
