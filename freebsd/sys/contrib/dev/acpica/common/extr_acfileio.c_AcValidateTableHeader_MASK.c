
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT8 ;
typedef long UINT32 ;
struct TYPE_3__ {char* Signature; long Length; scalar_t__* OemTableId; scalar_t__* OemId; scalar_t__* AslCompilerId; } ;
typedef int FILE ;
typedef TYPE_1__ ACPI_TABLE_HEADER ;
typedef int ACPI_STATUS ;
typedef int ACPI_SIZE ;


 int FUNC_0 (int (*) (int *,long)) ;
 int FUNC_1 (int ) ;
 long VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (char*) ;
 long FUNC_4 (int *) ;
 int VAR_8 ;
 int FUNC_5 (int ,char*,char*,long,long) ;
 int FUNC_6 (TYPE_1__*,int,int,int *) ;
 int FUNC_7 (int *,long,int ) ;
 long FUNC_8 (int *) ;
 int VAR_9 ;

ACPI_STATUS
FUNC_9 (
    FILE *VAR_10,
    long VAR_11)
{
    ACPI_TABLE_HEADER VAR_12;
    ACPI_SIZE VAR_13;
    long VAR_14;
    UINT32 VAR_15;
    UINT32 VAR_16;


    FUNC_0 (FUNC_9);




    VAR_14 = FUNC_8 (VAR_10);
    FUNC_7 (VAR_10, VAR_11, VAR_8);

    VAR_13 = FUNC_6 (&VAR_12, 1, sizeof (ACPI_TABLE_HEADER), VAR_10);
    FUNC_7 (VAR_10, VAR_14, VAR_8);

    if (VAR_13 < sizeof (ACPI_TABLE_HEADER))
    {
        return (VAR_5);
    }



    if (!FUNC_3 (VAR_12.Signature))
    {
        return (VAR_4);
    }



    VAR_15 = FUNC_4 (VAR_10);
    if (VAR_12.Length > (UINT32) (VAR_15 - VAR_11))
    {
        FUNC_5 (VAR_9, "Table [%4.4s] is too long for file - "
            "needs: 0x%.2X, remaining in file: 0x%.2X\n",
            VAR_12.Signature, VAR_12.Length,
            (UINT32) (VAR_15 - VAR_11));
        return (VAR_3);
    }





    for (VAR_16 = 0; VAR_16 < VAR_0; VAR_16++)
    {
        if (!FUNC_1 ((UINT8) VAR_12.AslCompilerId[VAR_16]))
        {
            goto BadCharacters;
        }
    }

    for (VAR_16 = 0; (VAR_16 < VAR_1) && (VAR_12.OemId[VAR_16]); VAR_16++)
    {
        if (!FUNC_1 ((UINT8) VAR_12.OemId[VAR_16]))
        {
            goto BadCharacters;
        }
    }

    for (VAR_16 = 0; (VAR_16 < VAR_2) && (VAR_12.OemTableId[VAR_16]); VAR_16++)
    {
        if (!FUNC_1 ((UINT8) VAR_12.OemTableId[VAR_16]))
        {
            goto BadCharacters;
        }
    }

    return (VAR_7);


BadCharacters:

    FUNC_2 ((VAR_6,
        "Table header for [%4.4s] has invalid ASCII character(s)",
        VAR_12.Signature));
    return (VAR_7);
}
