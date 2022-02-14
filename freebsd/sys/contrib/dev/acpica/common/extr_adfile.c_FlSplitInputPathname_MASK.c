
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ACPI_STATUS ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*,char) ;

ACPI_STATUS
FUNC_3 (
    char *VAR_2,
    char **VAR_3,
    char **VAR_4)
{
    char *VAR_5;
    char *VAR_6;
    char *VAR_7;


    if (VAR_3)
    {
        *VAR_3 = ((void*)0);
    }

    if (!VAR_2)
    {
        return (VAR_1);
    }



    VAR_6 = FUNC_0 (VAR_2);
    if (!VAR_6)
    {
        return (VAR_0);
    }



    FUNC_1 (VAR_6);



    VAR_5 = FUNC_2 (VAR_6, '/');
    if (!VAR_5)
    {
        VAR_5 = FUNC_2 (VAR_6, ':');
    }



    if (!VAR_5)
    {
        VAR_7 = FUNC_0 (VAR_6);
        VAR_6[0] = 0;
    }
    else
    {
        VAR_7 = FUNC_0 (VAR_5 + 1);
        *(VAR_5+1) = 0;
    }

    if (!VAR_7)
    {
        return (VAR_0);
    }

    if (VAR_3)
    {
        *VAR_3 = VAR_6;
    }

    if (VAR_4)
    {
        *VAR_4 = VAR_7;
        return (VAR_1);
    }

    return (VAR_1);
}
