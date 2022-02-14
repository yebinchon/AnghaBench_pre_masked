
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {char* ShortDescription; } ;
struct TYPE_11__ {char* Filename; } ;
struct TYPE_10__ {char* Signature; } ;
typedef int FILE ;
typedef TYPE_1__ ACPI_TABLE_HEADER ;
typedef int ACPI_STATUS ;
typedef int ACPI_OWNER_ID ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (char*,int ) ;
 int FUNC_12 (char*,TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*,int *,int ,int ) ;
 int FUNC_14 (TYPE_1__*,int *,int ) ;
 scalar_t__ VAR_10 ;
 TYPE_3__* VAR_11 ;
 TYPE_2__* VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_15 (int *) ;
 int VAR_14 ;
 int FUNC_16 (size_t) ;
 int FUNC_17 () ;
 int FUNC_18 (int *) ;
 int VAR_15 ;
 int FUNC_19 (int ,char*,...) ;
 int VAR_16 ;
 int FUNC_20 (char*,int ,int ) ;

__attribute__((used)) static ACPI_STATUS
FUNC_21 (
    ACPI_TABLE_HEADER *VAR_17,
    FILE *VAR_18,
    char *VAR_19,
    char *VAR_20)
{
    ACPI_STATUS VAR_21;
    ACPI_OWNER_ID VAR_22;
    if (!VAR_6 && !FUNC_10 (VAR_17))
    {
        FUNC_11 (VAR_19, VAR_0);



        FUNC_9 (" * ACPI Data Table [%4.4s]\n *\n",
            VAR_17->Signature);
        FUNC_9 (" * Format: [HexOffset DecimalOffset ByteLength]  "
            "FieldName : FieldValue\n */\n\n");

        FUNC_3 (VAR_17);
        FUNC_19 (VAR_16, "Acpi Data Table [%4.4s] decoded\n",
            VAR_17->Signature);

        if (VAR_18)
        {
            FUNC_19 (VAR_16, "Formatted output:  %s - %u bytes\n",
                VAR_20, FUNC_15 (VAR_18));
        }

        return (VAR_2);
    }





    VAR_21 = FUNC_13 (VAR_17, &VAR_22, VAR_15, VAR_14);
    if (FUNC_0 (VAR_21))
    {
        FUNC_9 ("Could not parse ACPI tables, %s\n",
            FUNC_8 (VAR_21));
        return (VAR_21);
    }



    if (VAR_10 && VAR_18)
    {
        FUNC_9 ("/**** Before second load\n");

        FUNC_18 (VAR_18);
        FUNC_17 ();

        FUNC_9 ("*****/\n");
    }



    FUNC_6 (VAR_7,
        VAR_8, VAR_22);





    FUNC_2 (VAR_7,
        VAR_8, VAR_22);

    if (VAR_10)
    {
        FUNC_4 (VAR_7);
    }



    FUNC_5 (VAR_7);






    if (FUNC_7 ())
    {
        VAR_21 = FUNC_14 (VAR_17, VAR_18, VAR_22);
        if (FUNC_0 (VAR_21))
        {
            return (VAR_21);
        }
    }
    FUNC_1 (VAR_7, VAR_8);



    if (VAR_5)
    {


        FUNC_12 (VAR_19, VAR_17);



        FUNC_3 (VAR_17);

        FUNC_19 (VAR_16, "Disassembly completed\n");
        if (VAR_18)
        {
            FUNC_19 (VAR_16, "ASL Output:    %s - %u bytes\n",
                VAR_20, FUNC_15 (VAR_18));
        }

        if (VAR_13)
        {
            FUNC_19 (VAR_16, "%14s %s - %u bytes\n",
                VAR_11[VAR_3].ShortDescription,
                VAR_12[VAR_3].Filename,
                FUNC_16 (VAR_3));
        }
    }

    return (VAR_2);
}
