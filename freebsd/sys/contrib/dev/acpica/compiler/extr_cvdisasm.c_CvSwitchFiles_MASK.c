
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_9__ {int Filename; int File; struct TYPE_9__* Parent; } ;
struct TYPE_7__ {char* CvFilename; } ;
struct TYPE_8__ {TYPE_1__ Common; } ;
typedef TYPE_2__ ACPI_PARSE_OBJECT ;
typedef TYPE_3__ ACPI_FILE_NODE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,int ,int ,int ,int ,int *,int ) ;
 int VAR_5 ;
 int FUNC_4 (char*,int ,char*) ;
 TYPE_3__* FUNC_5 (char*,int ) ;
 int FUNC_6 (TYPE_3__*,int ) ;
 int FUNC_7 (int ) ;
 int VAR_6 ;
 int FUNC_8 (int ,char*,char*,char*) ;
 char* FUNC_9 (int ) ;

void
FUNC_10(
    UINT32 VAR_7,
    ACPI_PARSE_OBJECT *VAR_8)
{
    char *VAR_9 = VAR_8->Common.CvFilename;
    ACPI_FILE_NODE *VAR_10;
    ACPI_FILE_NODE *VAR_11;


    FUNC_4 ("Switching from %s to %s\n", VAR_3,
        VAR_9);
    VAR_10 = FUNC_5 (VAR_9, VAR_4);
    if (!VAR_10)
    {




        FUNC_7 (VAR_1);
        FUNC_8 (VAR_5, "\"Cannot find %s\" - %s",
            VAR_9, FUNC_9 (VAR_6));
        FUNC_3 (VAR_0, VAR_2, 0, 0, 0, 0,
            ((void*)0), VAR_5);
        FUNC_2 ();
    }

    VAR_11 = VAR_10;






    while (VAR_11 &&
           VAR_11->Parent &&
           FUNC_1 (VAR_11->Filename, VAR_3))
    {
        FUNC_6 (VAR_11, VAR_7);
        VAR_11 = VAR_11->Parent;
    }

    if (VAR_10)
    {


        FUNC_0 (VAR_10->File);
        VAR_3 = VAR_10->Filename;
    }
}
