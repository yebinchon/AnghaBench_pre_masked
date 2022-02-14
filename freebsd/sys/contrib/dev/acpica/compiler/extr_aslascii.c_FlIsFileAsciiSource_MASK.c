
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef char UINT8 ;
typedef int UINT32 ;
struct TYPE_4__ {int Line; scalar_t__ Offset; } ;
typedef int FILE ;
typedef scalar_t__ BOOLEAN ;
typedef TYPE_1__ ASL_FILE_STATUS ;
typedef int ACPI_STATUS ;


 int FUNC_0 (char) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,int,...) ;
 int FUNC_2 (int ,int ,int *,char*) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (char*,char*) ;
 int FUNC_7 (int ,char*,int) ;
 int FUNC_8 (char*,int,int,int *) ;
 int FUNC_9 (char) ;
 int FUNC_10 (char) ;
 int FUNC_11 (char*) ;
 int VAR_7 ;

ACPI_STATUS
FUNC_12 (
    char *VAR_8,
    BOOLEAN VAR_9)
{
    UINT8 VAR_10;
    UINT32 VAR_11 = 0;
    BOOLEAN VAR_12 = VAR_5;
    ASL_FILE_STATUS VAR_13;
    FILE *VAR_14;




    VAR_14 = FUNC_6 (VAR_8, "rb");
    if (!VAR_14)
    {
        FUNC_11 ("Could not open input file");
        return (VAR_1);
    }

    VAR_13.Line = 1;
    VAR_13.Offset = 0;



    while (FUNC_8 (&VAR_10, 1, 1, VAR_14) == 1)
    {


        if (VAR_12)
        {


            if (VAR_10 == '*')
            {
                FUNC_3 (VAR_14, &VAR_13);
            }

            if (VAR_10 == '/')
            {
                FUNC_4 (VAR_14, &VAR_13);
            }



            VAR_12 = VAR_5;
        }
        else if (VAR_10 == '/')
        {
            VAR_12 = VAR_6;
        }



        if (!FUNC_0 (VAR_10))
        {
            if ((VAR_11 < 10) && (VAR_9))
            {
                FUNC_1 (
                    "Found non-ASCII character in source text: "
                    "0x%2.2X in line %u, file offset 0x%2.2X\n",
                    VAR_10, VAR_13.Line, VAR_13.Offset);
            }
            VAR_11++;
        }



        else if (!FUNC_9 (VAR_10) && !FUNC_10 (VAR_10))
        {
            if ((VAR_11 < 10) && (VAR_9))
            {
                FUNC_1 (
                    "Found invalid character in source text: "
                    "0x%2.2X in line %u, file offset 0x%2.2X\n",
                    VAR_10, VAR_13.Line, VAR_13.Offset);
            }
            VAR_11++;
        }



        if (VAR_10 == 0x0A)
        {
            VAR_13.Line++;
        }

        VAR_13.Offset++;
    }

    FUNC_5 (VAR_14);



    if (VAR_11)
    {
        FUNC_7 (VAR_7,
            "File appears to be binary: found %u non-ASCII characters, disassembling\n",
            VAR_11);
        if (VAR_9)
        {
            FUNC_1 (
                "Total %u invalid characters found in input source text, "
                "could be a binary file\n", VAR_11);
            FUNC_2 (VAR_3, VAR_4, ((void*)0), VAR_8);
        }

        return (VAR_0);
    }



    return (VAR_2);
}
