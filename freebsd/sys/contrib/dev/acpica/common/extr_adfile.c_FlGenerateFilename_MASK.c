
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ACPI_SIZE ;


 char* FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (char*) ;
 char* FUNC_4 (char*,char) ;

char *
FUNC_5 (
    char *VAR_0,
    char *VAR_1)
{
    char *VAR_2;
    char *VAR_3;
    char *VAR_4;






    VAR_3 = FUNC_0 ((ACPI_SIZE)
        FUNC_3 (VAR_0) + FUNC_3 (VAR_1) + 2);
    FUNC_2 (VAR_3, VAR_0);



    VAR_4 = FUNC_4 (VAR_3, '/');
    VAR_2 = FUNC_4 (VAR_3, '.');

    if (VAR_2 && (VAR_2 > VAR_4))
    {


        VAR_2++;
        *VAR_2 = 0;
        FUNC_1 (VAR_2, VAR_1);
    }
    else
    {


        FUNC_1 (VAR_3, ".");
        FUNC_1 (VAR_3, VAR_1);
    }

    return (VAR_3);
}
