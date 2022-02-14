
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int UINT8 ;
typedef void* UINT32 ;
typedef int UINT16 ;
struct TYPE_9__ {char* Filename; int FilenameLength; int SourceFilename; int * SourceLine; int * Message; struct TYPE_9__* SubError; void* Column; void* LogicalByteOffset; void* LogicalLineNumber; void* LineNumber; int MessageId; int Level; } ;
struct TYPE_8__ {TYPE_1__* Files; } ;
struct TYPE_7__ {int Filename; } ;
typedef TYPE_2__ ASL_GLOBAL_FILE_NODE ;
typedef TYPE_3__ ASL_ERROR_MSG ;


 size_t VAR_0 ;
 TYPE_2__* FUNC_0 () ;
 int * FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5 (
    ASL_ERROR_MSG **VAR_1,
    UINT8 VAR_2,
    UINT16 VAR_3,
    UINT32 VAR_4,
    UINT32 VAR_5,
    UINT32 VAR_6,
    UINT32 VAR_7,
    char *VAR_8,
    char *VAR_9,
    char *VAR_10,
    ASL_ERROR_MSG *VAR_11)
{
    ASL_ERROR_MSG *VAR_12;
    ASL_GLOBAL_FILE_NODE *VAR_13;


    *VAR_1 = FUNC_2 (sizeof (ASL_ERROR_MSG));
    VAR_12 = *VAR_1;
    VAR_12->Level = VAR_2;
    VAR_12->MessageId = VAR_3;
    VAR_12->LineNumber = VAR_4;
    VAR_12->LogicalLineNumber = VAR_5;
    VAR_12->LogicalByteOffset = VAR_6;
    VAR_12->Column = VAR_7;
    VAR_12->SubError = VAR_11;
    VAR_12->Message = ((void*)0);
    VAR_12->SourceLine = ((void*)0);
    VAR_12->Filename = ((void*)0);

    if (VAR_9)
    {


        VAR_12->Message = FUNC_1 (FUNC_4 (VAR_9) + 1);



        FUNC_3 (VAR_12->Message, VAR_9);
    }

    if (VAR_10)
    {
        VAR_12->SourceLine = FUNC_2 (FUNC_4 (VAR_10) + 1);
        FUNC_3 (VAR_12->SourceLine, VAR_10);
    }


    if (VAR_8)
    {
        VAR_12->Filename = VAR_8;
        VAR_12->FilenameLength = FUNC_4 (VAR_8);
        if (VAR_12->FilenameLength < 6)
        {
            VAR_12->FilenameLength = 6;
        }

        VAR_13 = FUNC_0 ();
        if (!VAR_13)
        {
            return;
        }

        VAR_12->SourceFilename =
            VAR_13->Files[VAR_0].Filename;
    }
}
