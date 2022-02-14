
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,char) ;

char *
FUNC_1 (
    char *VAR_0,
    char *VAR_1,
    char **VAR_2)
{
    char *VAR_3;


    if (!VAR_0)
    {


        VAR_0 = *VAR_2;
        if (!(*VAR_2))
        {
            return (((void*)0));
        }
    }



    while (*VAR_0)
    {
        if (FUNC_0 (VAR_1, *VAR_0))
        {
            VAR_0++;
        }
        else
        {
            break;
        }
    }



    if (!(*VAR_0))
    {
        *VAR_2 = ((void*)0);
        return (((void*)0));
    }

    VAR_3 = VAR_0;



    while (*VAR_0)
    {
        if (FUNC_0 (VAR_1, *VAR_0))
        {
            *VAR_0 = 0;
            *VAR_2 = VAR_0+1;
            if (!**VAR_2)
            {
                *VAR_2 = ((void*)0);
            }

            return (VAR_3);
        }

        VAR_0++;
    }

    *VAR_2 = ((void*)0);
    return (VAR_3);
}
