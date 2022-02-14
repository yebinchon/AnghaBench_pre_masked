
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT32 ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,int ,int,int) ;
 int FUNC_2 (char*,char*,int,...) ;
 int FUNC_3 () ;
 char* VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int ,int *) ;
 int * FUNC_6 (char*,char*) ;
 int FUNC_7 (int ,char*,...) ;
 int VAR_8 ;
 scalar_t__ FUNC_8 (char*,char*) ;
 char* FUNC_9 (int *,int ) ;
 int FUNC_10 (char*,int *,int ) ;

void
FUNC_11 (
    void)
{
    FILE *VAR_9;
    char *VAR_10;
    char *VAR_11;
    UINT32 VAR_12;
    UINT32 VAR_13 = 0;


    if (!VAR_4)
    {
        return;
    }



    VAR_9 = FUNC_6 (VAR_4, "r");
    if (!VAR_9)
    {
        FUNC_7 (VAR_8, "Could not open external reference file \"%s\"\n",
            VAR_4);
        FUNC_3 ();
        return;
    }



    while (FUNC_5 (VAR_5, VAR_3, VAR_9))
    {
        VAR_10 = FUNC_9 (VAR_5, VAR_6);
        if (!VAR_10)
        {
            continue;
        }

        if (FUNC_8 (VAR_10, "External"))
        {
            continue;
        }

        VAR_11 = FUNC_9 (((void*)0), VAR_6);
        if (!VAR_11)
        {
            continue;
        }

        VAR_10 = FUNC_9 (((void*)0), VAR_6);
        if (!VAR_10)
        {
            continue;
        }

        if (FUNC_8 (VAR_10, "MethodObj"))
        {
            continue;
        }

        VAR_10 = FUNC_9 (((void*)0), VAR_6);
        if (!VAR_10)
        {
            continue;
        }



        VAR_7 = 0;
        VAR_12 = FUNC_10 (VAR_10, ((void*)0), 0);
        if (VAR_7)
        {
            FUNC_7 (VAR_8, "Invalid argument count (%s)\n", VAR_10);
            continue;
        }

        if (VAR_12 > 7)
        {
            FUNC_7 (VAR_8, "Invalid argument count (%u)\n", VAR_12);
            continue;
        }



        FUNC_2 ("%s: Importing method external (%u arguments) %s\n",
            VAR_4, VAR_12, VAR_11);

        FUNC_1 (VAR_11, VAR_2,
            VAR_12, (VAR_1 | VAR_0));
        VAR_13++;
    }

    if (!VAR_13)
    {
        FUNC_7 (VAR_8,
            "Did not find any external methods in reference file \"%s\"\n",
            VAR_4);
    }
    else
    {


        FUNC_0 ();

        FUNC_2 ("%s: Imported %u external method definitions\n",
            VAR_4, VAR_13);
    }

    FUNC_4 (VAR_9);
}
