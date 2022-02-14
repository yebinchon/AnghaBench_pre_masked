
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT8 ;
struct TYPE_5__ {char* Filename; int Handle; } ;
struct TYPE_4__ {int OutputByteLength; int TotalFields; int ParserErrorDetected; int OriginalInputFileSize; int TotalLineCount; } ;
typedef int DT_FIELD ;
typedef TYPE_1__ ASL_GLOBAL_FILE_NODE ;
typedef int ACPI_STATUS ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int * VAR_9 ;
 TYPE_3__* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int FUNC_2 (int **) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ,int *,char*) ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int * FUNC_9 (int ) ;
 int FUNC_10 () ;
 TYPE_1__* FUNC_11 () ;
 int FUNC_12 (int ) ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int VAR_18 ;
 int FUNC_15 (char*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ,char*,char*) ;
 int VAR_19 ;

ACPI_STATUS
FUNC_18 (
    void)
{
    ACPI_STATUS VAR_20;
    UINT8 VAR_21;
    DT_FIELD *VAR_22;
    ASL_GLOBAL_FILE_NODE *VAR_23;




    FUNC_7 ();



    if (VAR_14)
    {


        VAR_21 = FUNC_15 ("Preprocess input file");
        FUNC_14 ();
        FUNC_16 (VAR_21);

        if (VAR_15)
        {
            return (VAR_1);
        }
    }



    if (VAR_8)
    {
        VAR_21 = FUNC_15 ("Parse data table in prototype mode");

        FUNC_3 (VAR_10[VAR_4].Handle);
        FUNC_4 ();
        VAR_22 = VAR_9;
        FUNC_5 ();

        FUNC_16 (VAR_21);
    }
    else
    {




        VAR_21 = FUNC_15 ("Scan and parse input file");
        VAR_22 = FUNC_9 (VAR_10[VAR_4].Handle);
        FUNC_16 (VAR_21);
    }



    if (!VAR_22)
    {


        FUNC_6 (VAR_2, VAR_5, ((void*)0),
            "Input file does not appear to be an ASL or data table source file");

        return (VAR_0);
    }

    VAR_21 = FUNC_15 ("Compile parse tree");

    VAR_20 = FUNC_2 (&VAR_22);
    FUNC_16 (VAR_21);

    VAR_23 = FUNC_11 ();
    if (!VAR_23)
    {
        FUNC_17 (VAR_19, "Summary for %s could not be generated",
            VAR_10[VAR_4].Filename);
    }
    else
    {
        VAR_23->TotalLineCount = VAR_7;
        VAR_23->OriginalInputFileSize = VAR_11;
        FUNC_1 (VAR_6, "Line count: %u input file size: %u\n",
                VAR_23->TotalLineCount, VAR_23->OriginalInputFileSize);
    }

    if (FUNC_0 (VAR_20))
    {
        if (VAR_23)
        {
            VAR_23->ParserErrorDetected = VAR_18;
        }



        FUNC_6 (VAR_2, VAR_5, ((void*)0),
            "Could not compile input file");

        return (VAR_20);
    }



    VAR_10[VAR_3].Filename = ((void*)0);
    VAR_20 = FUNC_12 (VAR_13);
    if (FUNC_0 (VAR_20))
    {
        return (VAR_20);
    }



    FUNC_8 (VAR_16);
    FUNC_13 ();
    FUNC_10 ();



    if (VAR_23)
    {
        VAR_23->TotalFields = VAR_12;
        VAR_23->OutputByteLength = VAR_17;
    }

    return (VAR_20);
}
