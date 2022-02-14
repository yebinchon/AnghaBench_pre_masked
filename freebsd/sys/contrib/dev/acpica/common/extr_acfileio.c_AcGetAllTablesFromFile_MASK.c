
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT8 ;
typedef int UINT32 ;
struct TYPE_4__ {struct TYPE_4__* Next; int * Table; } ;
typedef int FILE ;
typedef int ACPI_TABLE_HEADER ;
typedef scalar_t__ ACPI_STATUS ;
typedef TYPE_1__ ACPI_NEW_TABLE_DESC ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_2 (char*,int *,int ,int **) ;
 int FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (char*,char*) ;
 int FUNC_10 (int ,char*,char*,...) ;
 int VAR_10 ;

ACPI_STATUS
FUNC_11 (
    char *VAR_11,
    UINT8 VAR_12,
    ACPI_NEW_TABLE_DESC **VAR_13)
{
    ACPI_NEW_TABLE_DESC *VAR_14 = ((void*)0);
    ACPI_NEW_TABLE_DESC *VAR_15 = ((void*)0);
    ACPI_NEW_TABLE_DESC *VAR_16;
    FILE *VAR_17;
    ACPI_TABLE_HEADER *VAR_18 = ((void*)0);
    UINT32 VAR_19;
    ACPI_STATUS VAR_20 = VAR_6;


    VAR_17 = FUNC_9 (VAR_11, "rb");
    if (!VAR_17)
    {
        FUNC_10 (VAR_10, "Could not open input file: %s\n", VAR_11);
        if (VAR_9 == VAR_8)
        {
            return (VAR_4);
        }

        return (VAR_3);
    }



    VAR_19 = FUNC_7 (VAR_17);
    if (VAR_19 == VAR_0)
    {
        VAR_20 = VAR_3;
        goto Exit;
    }

    FUNC_10 (VAR_10,
        "Input file %s, Length 0x%X (%u) bytes\n",
        VAR_11, VAR_19, VAR_19);



    if (VAR_19 < sizeof (ACPI_TABLE_HEADER))
    {
        VAR_20 = VAR_1;
        goto Exit;
    }



    if (!FUNC_3 (VAR_17))
    {
        FUNC_10 (VAR_10,
            "    %s: File does not appear to contain a valid AML table\n",
            VAR_11);
        VAR_20 = VAR_7;
        goto Exit;
    }



    while (FUNC_1 (VAR_20))
    {


        VAR_20 = FUNC_2 (
            VAR_11, VAR_17, VAR_12, &VAR_18);

        if (VAR_20 == VAR_2)
        {
            VAR_20 = VAR_6;
            break;
        }
        else if (VAR_20 == VAR_7)
        {
            VAR_20 = VAR_6;
            goto Exit;
        }
        else if (FUNC_0 (VAR_20))
        {
            goto Exit;
        }
        VAR_16 = FUNC_4 (sizeof (ACPI_NEW_TABLE_DESC));
        if (!VAR_16)
        {
            FUNC_5 (VAR_18);
            VAR_20 = VAR_5;
            goto Exit;
        }

        VAR_16->Table = VAR_18;
        VAR_16->Next = ((void*)0);



        if (!VAR_14)
        {
            VAR_14 = VAR_16;
            VAR_15 = VAR_16;
        }
        else
        {
            VAR_15->Next = VAR_16;
            VAR_15 = VAR_16;
        }
    }



    if (*VAR_13)
    {
        VAR_15 = *VAR_13;
        while (VAR_15->Next)
        {
            VAR_15 = VAR_15->Next;
        }

        VAR_15->Next = VAR_14;
    }
    else
    {
        *VAR_13 = VAR_14;
    }

Exit:
    FUNC_8(VAR_17);
    return (VAR_20);
}
