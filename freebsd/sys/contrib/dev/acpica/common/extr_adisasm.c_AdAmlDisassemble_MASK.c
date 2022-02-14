
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {struct TYPE_9__* Next; int Table; } ;
struct TYPE_8__ {int OemTableId; } ;
typedef int FILE ;
typedef scalar_t__ BOOLEAN ;
typedef TYPE_1__ ACPI_TABLE_HEADER ;
typedef int ACPI_STATUS ;
typedef TYPE_2__ ACPI_NEW_TABLE_DESC ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (char*,int ,TYPE_2__**) ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int FUNC_5 (int ,int ,TYPE_1__**) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int ,int *,char*,char*) ;
 int FUNC_11 (char*) ;
 char* FUNC_12 (char*,int ) ;
 int FUNC_13 () ;
 int VAR_7 ;
 char* FUNC_14 (char*,int ) ;
 int FUNC_15 (int *) ;
 int * FUNC_16 (char*,char*) ;
 int FUNC_17 (int ,char*,...) ;
 int VAR_8 ;
 int * VAR_9 ;

ACPI_STATUS
FUNC_18 (
    BOOLEAN VAR_10,
    char *VAR_11,
    char *VAR_12,
    char **VAR_13)
{
    ACPI_STATUS VAR_14;
    char *VAR_15 = ((void*)0);
    FILE *VAR_16 = ((void*)0);
    ACPI_TABLE_HEADER *VAR_17 = ((void*)0);
    ACPI_NEW_TABLE_DESC *VAR_18 = ((void*)0);






    if (VAR_11)
    {


        VAR_14 = FUNC_3 (VAR_11,
            VAR_0, &VAR_18);
        if (FUNC_0 (VAR_14))
        {
            FUNC_6 ("Could not get ACPI tables from %s, %s\n",
                VAR_11, FUNC_4 (VAR_14));
            return (VAR_14);
        }



        VAR_14 = FUNC_11 (VAR_11);
        if (FUNC_0 (VAR_14))
        {
            return (VAR_14);
        }
    }
    else
    {
        VAR_14 = FUNC_13 ();
        if (FUNC_0 (VAR_14))
        {
            FUNC_6 ("Could not get ACPI tables, %s\n",
                FUNC_4 (VAR_14));
            return (VAR_14);
        }

        if (!VAR_4)
        {
            return (VAR_3);
        }



        VAR_14 = FUNC_5 (VAR_1, 0, &VAR_17);
        if (FUNC_0 (VAR_14))
        {
            FUNC_6 ("Could not get DSDT, %s\n",
                FUNC_4 (VAR_14));
            return (VAR_14);
        }

        FUNC_6 ("\nDisassembly of DSDT\n");
        VAR_12 = FUNC_12 ("dsdt", VAR_17->OemTableId);
    }




    if (VAR_10)
    {


        VAR_15 = FUNC_14 (VAR_12, VAR_7);
        if (!VAR_15)
        {
            FUNC_17 (VAR_8, "Could not generate output filename\n");
            VAR_14 = VAR_2;
            goto Cleanup;
        }

        VAR_16 = FUNC_16 (VAR_15, "w+");
        if (!VAR_16)
        {
            FUNC_17 (VAR_8, "Could not open output file %s\n",
                VAR_15);
            VAR_14 = VAR_2;
            goto Cleanup;
        }

        FUNC_7 (VAR_16);
    }

    *VAR_13 = VAR_15;



    while (VAR_18)
    {
        VAR_14 = FUNC_10 (VAR_18->Table,
            VAR_16, VAR_11, VAR_15);
        if (FUNC_0 (VAR_14))
        {
            break;
        }

        VAR_18 = VAR_18->Next;
    }

Cleanup:

    if (VAR_17 &&
        !VAR_5 &&
        !FUNC_9 (VAR_17))
    {
        FUNC_1 (VAR_17);
    }

    FUNC_2 (VAR_18);

    if (VAR_16)
    {
        FUNC_15 (VAR_16);
        FUNC_7 (VAR_9);
    }

    FUNC_8 (VAR_6);
    VAR_6 = ((void*)0);
    return (VAR_14);
}
