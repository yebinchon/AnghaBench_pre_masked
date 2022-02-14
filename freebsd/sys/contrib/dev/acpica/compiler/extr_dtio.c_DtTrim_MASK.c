
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ACPI_SIZE ;


 int FUNC_0 (char*,char*) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,int) ;

__attribute__((used)) static char *
FUNC_5 (
    char *VAR_0)
{
    char *VAR_1;
    char *VAR_2;
    char *VAR_3;
    ACPI_SIZE VAR_4;




    if (*VAR_0 == 0 || !FUNC_2 (VAR_0, " "))
    {
        VAR_3 = FUNC_1 (1);
        return (VAR_3);
    }



    VAR_1 = VAR_0;
    VAR_2 = VAR_0 + FUNC_3 (VAR_0) - 1;



    while ((VAR_1 <= VAR_2) && ((*VAR_1 == ' ') || (*VAR_1 == '\t')))
    {
        VAR_1++;
    }



    while (VAR_2 >= VAR_1)
    {
        if (*VAR_2 == '\n')
        {
            VAR_2--;
            continue;
        }

        if (*VAR_2 != ' ')
        {
            break;
        }

        VAR_2--;
    }



    if (*VAR_1 == '\"')
    {
        VAR_1++;
    }
    if (*VAR_2 == '\"')
    {
        VAR_2--;
    }



    VAR_4 = FUNC_0 (VAR_2, VAR_1) + 1;
    VAR_3 = FUNC_1 (VAR_4 + 1);
    if (FUNC_3 (VAR_1))
    {
        FUNC_4 (VAR_3, VAR_1, VAR_4);
    }

    VAR_3[VAR_4] = 0;
    return (VAR_3);
}
