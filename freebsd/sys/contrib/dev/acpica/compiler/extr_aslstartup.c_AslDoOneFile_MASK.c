
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT8 ;
struct TYPE_6__ {int Filename; } ;
struct TYPE_5__ {int FileType; int TotalLineCount; int OriginalInputFileSize; } ;
typedef TYPE_1__ ASL_GLOBAL_FILE_NODE ;
typedef int ACPI_STATUS ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;




 int VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 () ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_3__* VAR_9 ;
 int VAR_10 ;
 int * VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int VAR_13 ;
 int FUNC_9 (size_t) ;
 TYPE_1__* FUNC_10 () ;
 int FUNC_11 (size_t) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (char*,int *,int *) ;
 int FUNC_17 () ;
 int FUNC_18 () ;
 int VAR_14 ;
 int FUNC_19 (char*) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (scalar_t__) ;
 int FUNC_23 (char*,int) ;
 int FUNC_24 (int ,char*) ;
 scalar_t__ FUNC_25 (char*) ;

ACPI_STATUS
FUNC_26 (
    char *VAR_15)
{
    ACPI_STATUS VAR_16;
    UINT8 VAR_17;
    ASL_GLOBAL_FILE_NODE *VAR_18;




    FUNC_6 ();
    FUNC_17 ();






    VAR_16 = FUNC_16 (VAR_15, &VAR_6, ((void*)0));
    if (FUNC_0 (VAR_16))
    {
        return (VAR_16);
    }







    VAR_16 = FUNC_12(VAR_15);
    if (FUNC_0 (VAR_16))
    {
        return (VAR_0);
    }



    VAR_9[VAR_2].Filename =
        FUNC_22 (FUNC_25 (VAR_15) + 1);

    FUNC_24 (VAR_9[VAR_2].Filename, VAR_15);
    FUNC_20 (VAR_9[VAR_2].Filename);





    VAR_16 = FUNC_14 (VAR_9[VAR_2].Filename);
    if (FUNC_0 (VAR_16))
    {
        FUNC_2 (VAR_3);
        return (VAR_0);
    }

    VAR_18 = FUNC_10();
    if (!VAR_18)
    {
        return (VAR_0);
    }

    VAR_18->OriginalInputFileSize = FUNC_11 (VAR_2);



    VAR_8 = FUNC_4 (&VAR_9[VAR_2]);
    VAR_18->FileType = VAR_8;
    if (VAR_8 == 129)
    {
        return (VAR_0);
    }





    if (VAR_12)
    {
        VAR_10 = VAR_9[VAR_2].Filename;
    }





    if (VAR_8 == 131)
    {
        VAR_17 = FUNC_19 ("Open AML output file");
        VAR_16 = FUNC_13 (VAR_10);
        FUNC_21 (VAR_17);
        if (FUNC_0 (VAR_16))
        {
            FUNC_2 (VAR_3);
            return (VAR_0);
        }
    }



    VAR_16 = FUNC_15 (VAR_10);
    if (FUNC_0 (VAR_16))
    {
        FUNC_2 (VAR_3);
        return (VAR_0);
    }





    switch (VAR_8)
    {



    case 130:

        VAR_16 = FUNC_8 ();
        if (FUNC_0 (VAR_16))
        {
            return (VAR_16);
        }

        if (VAR_11)
        {
            VAR_11 = ((void*)0);
        }



        VAR_16 = FUNC_3 ();
        if (FUNC_0 (VAR_16))
        {
            return (VAR_16);
        }



        FUNC_1 ();
        FUNC_18 ();
        return (VAR_16);




    case 131:

        VAR_16 = FUNC_7 ();
        if (FUNC_0 (VAR_16))
        {
            FUNC_18 ();
            return (VAR_16);
        }





        VAR_18->TotalLineCount = VAR_5;
        return (VAR_1);




    case 128:



        FUNC_9 (VAR_2);
        VAR_7 = VAR_13;
        VAR_4 = VAR_14;
        VAR_16 = FUNC_5 ();
        return (VAR_16);



    case 129:

        FUNC_2 (VAR_3);
        return (VAR_0);

    default:

        FUNC_23 ("Unknown file type %X\n", VAR_8);
        return (VAR_0);
    }
}
