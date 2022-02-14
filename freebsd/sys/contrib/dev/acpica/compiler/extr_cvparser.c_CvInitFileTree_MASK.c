
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ UINT8 ;
typedef int UINT32 ;
struct TYPE_6__ {char* FileStart; char* FileEnd; char* Filename; int IncludeWritten; int File; int * Parent; int * Next; } ;
struct TYPE_5__ {int Length; } ;
typedef TYPE_1__ ACPI_TABLE_HEADER ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 TYPE_3__* VAR_4 ;
 int VAR_5 ;
 char* VAR_6 ;
 TYPE_3__* FUNC_0 (int ) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (char*,char*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;

void
FUNC_5 (
    ACPI_TABLE_HEADER *VAR_10,
    UINT8 *VAR_11,
    UINT32 VAR_12)
{
    UINT8 *VAR_13;
    UINT8 *VAR_14;
    char *VAR_15 = ((void*)0);
    char *VAR_16 = ((void*)0);
    char *VAR_17 = ((void*)0);
    char *VAR_18 = ((void*)0);


    if (!VAR_1)
    {
        return;
    }

    FUNC_2 ("AmlLength: %x\n", VAR_12);
    FUNC_2 ("AmlStart:  %p\n", VAR_11);
    FUNC_2 ("AmlEnd?:   %p\n", VAR_11+VAR_12);

    VAR_4 = FUNC_0 (VAR_3);

    VAR_4->FileStart = (char *)(VAR_11);
    VAR_4->FileEnd = (char *)(VAR_11 + VAR_10->Length);
    VAR_4->Next = ((void*)0);
    VAR_4->Parent = ((void*)0);
    VAR_4->Filename = (char *)(VAR_11+2);



    VAR_4->File = VAR_5;





    VAR_4->IncludeWritten = VAR_9;
    VAR_15 = ((void*)0);
    VAR_2 = (char *)(VAR_11+2);
    VAR_6 = (char *)(VAR_11+2);

    VAR_13 = VAR_11;
    VAR_14 = VAR_11 + VAR_12;

    while (VAR_13 <= VAR_14)
    {





        if ((*VAR_13 == VAR_0) &&
            (*(VAR_13 +1) == VAR_7) &&
            (FUNC_3 ((char *)(VAR_13 +2))))
        {
            FUNC_2 ("A9 and a 08 file\n");
            VAR_16 = VAR_15;
            VAR_15 = (char *) (VAR_13 +2);

            FUNC_1 (VAR_15, VAR_16);
            VAR_18 = VAR_15;
            FUNC_2 ("%s\n", VAR_15);
        }
        else if ((*VAR_13 == VAR_0) &&
            (*(VAR_13 +1) == VAR_8) &&
            (FUNC_3 ((char *)(VAR_13 +2))))
        {
            FUNC_2 ("A9 and a 09 file\n");
            VAR_17 = (char *)(VAR_13 +2);
            FUNC_4 (VAR_18, VAR_17);
            FUNC_2 ("%s\n", VAR_17);
        }

        ++VAR_13;
    }
}
