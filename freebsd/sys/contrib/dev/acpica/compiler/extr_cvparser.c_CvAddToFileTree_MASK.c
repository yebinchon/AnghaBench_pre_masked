
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* FileEnd; char* Filename; char* FileStart; int File; int IncludeWritten; struct TYPE_6__* Parent; struct TYPE_6__* Next; } ;
typedef TYPE_1__ ACPI_FILE_NODE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,int ,int ,int ,int ,int *,int ) ;
 int VAR_6 ;
 TYPE_1__* FUNC_4 (char*,TYPE_1__*) ;
 int VAR_7 ;
 int FUNC_5 (int ) ;
 int VAR_8 ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (int ,char*,char*,char*) ;
 char* FUNC_8 (int ) ;

__attribute__((used)) static void
FUNC_9 (
    char *VAR_9,
    char *VAR_10)
{
    ACPI_FILE_NODE *VAR_11;


    if (!FUNC_1(VAR_9, VAR_5) &&
        VAR_10)
    {
        VAR_11 = FUNC_4 (VAR_10, VAR_4);
        if (VAR_11)
        {




            VAR_11->FileEnd = VAR_9;
        }
    }
    else if (!FUNC_1(VAR_9, VAR_5) &&
             !VAR_10)
    {
        return;
    }

    VAR_11 = FUNC_4 (VAR_9, VAR_4);
    if (VAR_11 && VAR_10)
    {





        VAR_11 = FUNC_4 (VAR_10, VAR_4);
        if (VAR_11 && (VAR_11->FileEnd < VAR_9))
        {
            VAR_11->FileEnd = VAR_9;
            VAR_11 = VAR_11->Parent;
            while (VAR_11)
            {
                if (VAR_11->FileEnd < VAR_9)
                {
                    VAR_11->FileEnd = VAR_9;
                }

                VAR_11 = VAR_11->Parent;
            }
        }
    }
    else
    {
        VAR_11 = VAR_4;
        VAR_4 = FUNC_0 (VAR_3);

        VAR_4->Next = VAR_11;
        VAR_4->Parent = ((void*)0);
        VAR_4->Filename = VAR_9;
        VAR_4->FileStart = VAR_9;
        VAR_4->IncludeWritten = VAR_7;
        VAR_4->File = FUNC_6(VAR_9, "w+");





        if (!VAR_4->File)
        {


            FUNC_5 (VAR_1);
            FUNC_7 (VAR_6, "\"%s\" - %s", VAR_9, FUNC_8 (VAR_8));
            FUNC_3 (VAR_0, VAR_2, 0, 0, 0, 0,
                ((void*)0), VAR_6);
            FUNC_2 ();
        }
    }
}
