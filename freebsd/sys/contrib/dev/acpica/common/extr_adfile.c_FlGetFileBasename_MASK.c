
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*) ;
 char* FUNC_2 (char*,char) ;
 char* FUNC_3 (char*,char) ;

char *
FUNC_4 (
    char *VAR_0)
{
    char *VAR_1;
    char *VAR_2;




    VAR_2 = FUNC_3 (VAR_0, '/');
    if (!VAR_2)
    {
        VAR_2 = FUNC_3 (VAR_0, ':');
    }



    if (VAR_2)
    {
        VAR_1 = FUNC_1 (VAR_2 + 1);
    }
    else
    {
        VAR_1 = FUNC_1 (VAR_0);
    }



    VAR_2 = FUNC_2 (VAR_1, '.');
    if (VAR_2)
    {
        *VAR_2 = 0;
    }

    FUNC_0 (VAR_1);
    return (VAR_1);
}
