
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int UINT8 ;
struct TYPE_6__ {int Child; } ;
struct TYPE_8__ {TYPE_1__ Asl; } ;
struct TYPE_7__ {void* ParserErrorDetected; } ;
typedef TYPE_2__ ASL_GLOBAL_FILE_NODE ;
typedef int ACPI_STATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int *,char*) ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_3__* VAR_10 ;
 void* VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,char*) ;
 int VAR_18 ;
 TYPE_2__* FUNC_5 () ;
 int FUNC_6 () ;
 int VAR_19 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,int ) ;
 int FUNC_9 () ;
 void* VAR_20 ;
 int * VAR_21 ;
 int VAR_22 ;
 int FUNC_10 (TYPE_3__*,int ,int *,int ,int *) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,char*) ;
 int VAR_23 ;

ACPI_STATUS
FUNC_14 (
    void)
{
    UINT8 VAR_24;
    UINT8 VAR_25;
    ASL_GLOBAL_FILE_NODE *VAR_26;


    VAR_24 = FUNC_11 ("*** Total Compile time ***");
    VAR_25 = FUNC_11 ("Open input and output files");
    FUNC_12 (VAR_25);

    VAR_25 = FUNC_11 ("Preprocess input file");
    if (VAR_12)
    {


        FUNC_8 (VAR_3, "", VAR_18);



        FUNC_9 ();
        VAR_8 = 1;
        VAR_9 = 1;

        if (VAR_13)
        {
            FUNC_12 (VAR_25);
            return (VAR_1);
        }
    }
    FUNC_12 (VAR_25);




    VAR_25 = FUNC_11 ("Parse source code and build parse tree");
    FUNC_0();
    FUNC_12 (VAR_25);



    if (VAR_17)
    {
        FUNC_13 (VAR_23,
            "Compiler aborting due to parser-detected syntax error(s)\n");



        VAR_26 = FUNC_5 ();
        VAR_26->ParserErrorDetected = VAR_20;
        VAR_11 = VAR_20;
        FUNC_6 ();
        goto ErrorExit;
    }



    if (!VAR_10)
    {




        FUNC_1 (VAR_4, VAR_5,
            ((void*)0), "- Could not resolve parse tree root node");

        goto ErrorExit;
    }



    VAR_25 = FUNC_11 ("Flush source input");
    FUNC_3 ();



    if (VAR_15)
    {
        FUNC_2 (VAR_14, VAR_16);
    }



    FUNC_6 ();

    FUNC_7 (VAR_10->Asl.Child);
    FUNC_12 (VAR_25);



    VAR_25 = FUNC_11 ("Parse tree transforms");
    FUNC_4 (VAR_2, "\nParse tree transforms\n\n");
    FUNC_10 (VAR_10, VAR_6,
        VAR_21, VAR_22, ((void*)0));
    FUNC_12 (VAR_25);



    VAR_25 = FUNC_11 ("Generate AML opcodes");
    FUNC_4 (VAR_2, "Generating AML opcodes\n\n");
    FUNC_10 (VAR_10, VAR_7, ((void*)0),
        VAR_19, ((void*)0));
    FUNC_12 (VAR_25);

    FUNC_12 (VAR_24);
    return (VAR_1);

ErrorExit:
    FUNC_12 (VAR_24);
    return (VAR_0);
}
