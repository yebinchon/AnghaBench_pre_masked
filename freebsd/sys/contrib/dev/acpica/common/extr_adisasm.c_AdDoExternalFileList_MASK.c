
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {char* Path; struct TYPE_7__* Next; } ;
struct TYPE_6__ {struct TYPE_6__* Next; int Table; } ;
typedef scalar_t__ ACPI_STATUS ;
typedef int ACPI_OWNER_ID ;
typedef TYPE_1__ ACPI_NEW_TABLE_DESC ;
typedef TYPE_2__ ACPI_EXTERNAL_FILE ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (char*,int ,TYPE_1__**) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 () ;
 char* FUNC_6 (scalar_t__) ;
 TYPE_2__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ,int *,int ,int ) ;
 int VAR_6 ;
 int FUNC_10 (char*,char*) ;

__attribute__((used)) static ACPI_STATUS
FUNC_11 (
    char *VAR_7)
{
    ACPI_EXTERNAL_FILE *VAR_8;
    char *VAR_9;
    ACPI_NEW_TABLE_DESC *VAR_10 = ((void*)0);
    ACPI_STATUS VAR_11;
    ACPI_STATUS VAR_12 = VAR_1;
    ACPI_OWNER_ID VAR_13;






    VAR_8 = VAR_3;



    while (VAR_8)
    {
        VAR_9 = VAR_8->Path;
        if (!FUNC_10 (VAR_9, VAR_7))
        {


            VAR_8 = VAR_8->Next;
            continue;
        }

        FUNC_7 ("External object resolution file %16s\n",
            VAR_9);

        VAR_11 = FUNC_2 (
            VAR_9, VAR_0, &VAR_10);
        if (FUNC_0 (VAR_11))
        {
            if (VAR_11 == VAR_2)
            {
                VAR_8 = VAR_8->Next;
                VAR_12 = VAR_2;
                continue;
            }

            FUNC_1 (VAR_10);
            return (VAR_11);
        }



        while (VAR_10)
        {
            VAR_11 = FUNC_9 (
                VAR_10->Table, &VAR_13, VAR_6, VAR_6);
            if (FUNC_0 (VAR_11))
            {
                FUNC_7 ("Could not parse external ACPI tables, %s\n",
                    FUNC_6 (VAR_11));
                FUNC_1 (VAR_10);
                return (VAR_11);
            }





            FUNC_4 (VAR_4,
                VAR_5, VAR_13);
            FUNC_8 (VAR_4);

            VAR_10 = VAR_10->Next;
        }



        VAR_8 = VAR_8->Next;
    }

    FUNC_1 (VAR_10);

    if (FUNC_0 (VAR_12))
    {
        return (VAR_12);
    }



    if (VAR_3)
    {
        FUNC_3 ();
    }



    FUNC_5 ();
    return (VAR_1);
}
