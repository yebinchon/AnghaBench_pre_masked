
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char) ;

char *FUNC_2(char *VAR_0)
{
    char *VAR_1 = VAR_0;

    while (*VAR_0)
    {
        if (FUNC_0(*VAR_0))
            *VAR_0 = (char)FUNC_1(*VAR_0);
        VAR_0++;
    }

    return VAR_1;
}
