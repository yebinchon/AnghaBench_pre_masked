
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT8 ;
struct TYPE_3__ {int Handle; int Filename; } ;
typedef TYPE_1__ ASL_FILE_INFO ;
typedef int ACPI_STATUS ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 char* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,int ,int ) ;
 int VAR_8 ;
 scalar_t__ FUNC_6 (char*,char*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static UINT8
FUNC_8 (
    ASL_FILE_INFO *VAR_9)
{
    char *VAR_10;
    UINT8 VAR_11 = VAR_1;
    ACPI_STATUS VAR_12;




    VAR_12 = FUNC_2 (VAR_9->Filename, VAR_6);
    if (FUNC_0 (VAR_12))
    {




        while (FUNC_3 (VAR_4, VAR_5, VAR_9->Handle))
        {


            VAR_10 = VAR_4;
            while (*VAR_10)
            {
                *VAR_10 = (char) FUNC_7 ((int) *VAR_10);
                VAR_10++;
            }



            if (FUNC_6 (VAR_4, "DEFINITIONBLOCK"))
            {


                VAR_11 = VAR_0;
                goto Cleanup;
            }
        }



        VAR_11 = VAR_1;
        goto Cleanup;
    }



    FUNC_5 (VAR_9->Handle, 0, VAR_7);

    VAR_12 = FUNC_1 (VAR_9->Handle, 0);
    if (FUNC_0 (VAR_12))
    {
        FUNC_4 (VAR_8,
            "Binary file appears to be a valid ACPI table, disassembling\n");

        VAR_11 = VAR_3;
        goto Cleanup;
    }
    else
    {
        FUNC_4 (VAR_8,
            "Binary file does not contain a valid ACPI table\n");
    }

    VAR_11 = VAR_2;


Cleanup:



    FUNC_5 (VAR_9->Handle, 0, VAR_7);
    return (VAR_11);
}
