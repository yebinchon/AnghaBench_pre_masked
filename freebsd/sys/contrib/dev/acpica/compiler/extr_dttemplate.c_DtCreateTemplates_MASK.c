
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ACPI_STATUS ;


 scalar_t__ FUNC_0 (int ) ;
 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (char*,unsigned long) ;
 int FUNC_7 () ;
 int FUNC_8 (int ,char*,unsigned int) ;
 int VAR_4 ;
 int FUNC_9 (char*,char*) ;
 unsigned long FUNC_10 (char*,char**,int ) ;

ACPI_STATUS
FUNC_11 (
    char **VAR_5)
{
    char *VAR_6;
    char *VAR_7;
    unsigned long VAR_8;
    ACPI_STATUS VAR_9 = VAR_2;


    FUNC_4 ();

    VAR_9 = FUNC_3 ();
    if (FUNC_0 (VAR_9))
    {
        return (VAR_9);
    }







    if (VAR_3 < 3)
    {
        VAR_9 = FUNC_6 (VAR_0, 0);
        goto Exit;
    }

    VAR_3--;
    VAR_6 = VAR_5[VAR_3];
    FUNC_2 (VAR_6);




    VAR_8 = FUNC_10 (VAR_6, &VAR_7, 0);
    if (VAR_6 != VAR_7)
    {


        if (VAR_8 > 254)
        {
            FUNC_8 (VAR_4, "%u SSDTs requested, maximum is 254\n",
                (unsigned int) VAR_8);

            VAR_9 = VAR_1;
            goto Exit;
        }

        VAR_9 = FUNC_6 (VAR_0, VAR_8);
        goto Exit;
    }

    if (!FUNC_9 (VAR_6, "ALL"))
    {


        VAR_9 = FUNC_5 ();
        goto Exit;
    }




    while (VAR_5[VAR_3])
    {
        VAR_6 = VAR_5[VAR_3];
        FUNC_2 (VAR_6);

        VAR_9 = FUNC_6 (VAR_6, 0);
        if (FUNC_0 (VAR_9))
        {
            goto Exit;
        }

        VAR_3++;
    }


Exit:


    (void) FUNC_1 ();
    FUNC_7 ();
    return (VAR_9);
}
