
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ACPI_STATUS ;


 char* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_2 (int,char**,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (char**) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*) ;

int
FUNC_7 (
    int VAR_8,
    char **VAR_9)
{
    int VAR_10 = 0;
    ACPI_STATUS VAR_11;




    if (VAR_8 < 2)
    {
        FUNC_4 ();
        FUNC_5 (1);
    }



    VAR_10 = FUNC_2 (VAR_8, VAR_9, VAR_6);

    if (VAR_4)
    {
        VAR_11 = FUNC_3 (VAR_9);
        if (FUNC_1 (VAR_11))
        {
            FUNC_5 (-1);
        }
        FUNC_5 (1);
    }



    if (!VAR_9[VAR_2] &&
        !VAR_1)
    {
        FUNC_6 ("Missing input filename\n");
        VAR_10 = VAR_7;
    }

    if (VAR_3)
    {
        FUNC_6 (FUNC_0 (VAR_0));
        if (VAR_5)
        {
            FUNC_6 ("Ignoring all errors, forcing AML file generation\n\n");
        }
    }

    if (VAR_10)
    {
        FUNC_6 ("Use -h option for help information\n");
        FUNC_5 (1);
    }

    return (VAR_2);
}
