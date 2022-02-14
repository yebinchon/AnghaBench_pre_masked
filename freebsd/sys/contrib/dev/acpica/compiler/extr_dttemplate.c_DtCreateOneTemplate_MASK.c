
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_3__ {int Template; } ;
typedef int FILE ;
typedef int ACPI_STATUS ;
typedef TYPE_1__ ACPI_DMTABLE_DATA ;


 int FUNC_0 (int ,int ) ;
 char* FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*) ;
 scalar_t__ VAR_8 ;
 int FUNC_7 (int *,char*,int ,int) ;
 int VAR_9 ;
 char* FUNC_8 (char*,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (char*,char*) ;
 int FUNC_12 (int ,char*,...) ;
 int VAR_12 ;
 int * VAR_13 ;

__attribute__((used)) static ACPI_STATUS
FUNC_13 (
    char *VAR_14,
    UINT32 VAR_15,
    const ACPI_DMTABLE_DATA *VAR_16)
{
    char *VAR_17;
    FILE *VAR_18;
    ACPI_STATUS VAR_19 = VAR_7;
    int VAR_20;
    UINT32 VAR_21;




    VAR_17 = FUNC_8 (
        VAR_14, VAR_9);
    if (!VAR_17)
    {
        FUNC_12 (VAR_12, "Could not generate output filename\n");
        return (VAR_6);
    }

    FUNC_6 (VAR_17);
    if (!FUNC_9 (VAR_17))
    {
        return (VAR_7);
    }

    VAR_18 = FUNC_11 (VAR_17, "w+");
    if (!VAR_18)
    {
        FUNC_12 (VAR_12, "Could not open output file %s\n",
            VAR_17);
        return (VAR_6);
    }



    FUNC_5 (VAR_18);

    FUNC_4 ("/*\n");
    FUNC_4 (FUNC_1 ("iASL Compiler/Disassembler", " * "));

    if (VAR_15 == 0)
    {
        FUNC_4 (" * Template for [%4.4s] ACPI Table",
            VAR_14);
    }
    else
    {
        FUNC_4 (" * Template for [%4.4s] and %u [SSDT] ACPI Tables",
            VAR_14, VAR_15);
    }



    if (VAR_16)
    {


        FUNC_4 (" (static data table)\n");

        if (VAR_8)
        {
            FUNC_4 (" * Format: [HexOffset DecimalOffset ByteLength]"
                "  FieldName : HexFieldValue\n */\n\n");
        }
        else
        {
            FUNC_4 (" * Format: [ByteLength]"
                "  FieldName : HexFieldValue\n */\n");
        }

        FUNC_3 (FUNC_0 (VAR_5,
            VAR_16->Template));
    }
    else
    {


        FUNC_4 (" (AML byte code table)\n");
        FUNC_4 (" */\n");

        if (FUNC_2 (VAR_14, VAR_1))
        {
            VAR_20 = FUNC_7 (
                VAR_18, VAR_17, VAR_1, 1);
            if (VAR_20 < 0)
            {
                VAR_19 = VAR_6;
                goto Cleanup;
            }



            for (VAR_21 = 1; VAR_21 <= VAR_15; VAR_21++)
            {
                VAR_20 = FUNC_7 (
                    VAR_18, VAR_17, VAR_4, VAR_21 + 1);
                if (VAR_20 < 0)
                {
                    VAR_19 = VAR_6;
                    goto Cleanup;
                }
            }
        }
        else if (FUNC_2 (VAR_14, VAR_4))
        {
            VAR_20 = FUNC_7 (
                VAR_18, VAR_17, VAR_4, 1);
            if (VAR_20 < 0)
            {
                VAR_19 = VAR_6;
                goto Cleanup;
            }
        }
        else if (FUNC_2 (VAR_14, VAR_3))
        {
            VAR_20 = FUNC_7 (
                VAR_18, VAR_17, VAR_3, 1);
            if (VAR_20 < 0)
            {
                VAR_19 = VAR_6;
                goto Cleanup;
            }
        }
        else if (FUNC_2 (VAR_14, VAR_2))
        {
            FUNC_3 (FUNC_0 (VAR_5,
                VAR_10));
        }
        else if (FUNC_2 (VAR_14, VAR_0))
        {
            FUNC_3 (FUNC_0 (VAR_5,
                VAR_11));
        }
        else
        {
            FUNC_12 (VAR_12,
                "%4.4s, Unrecognized ACPI table signature\n", VAR_14);
            VAR_19 = VAR_6;
            goto Cleanup;
        }
    }

    if (VAR_15 == 0)
    {
        FUNC_12 (VAR_12,
            "Created ACPI table template for [%4.4s], "
            "written to \"%s\"\n",
            VAR_14, VAR_17);
    }
    else
    {
        FUNC_12 (VAR_12,
            "Created ACPI table templates for [%4.4s] "
            "and %u [SSDT], written to \"%s\"\n",
            VAR_14, VAR_15, VAR_17);
    }

Cleanup:
    FUNC_10 (VAR_18);
    FUNC_5 (VAR_13);
    return (VAR_19);
}
