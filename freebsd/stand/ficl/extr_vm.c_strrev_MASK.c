
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;

char *FUNC_1( char *VAR_0 )
{
    int VAR_1 = FUNC_0(VAR_0);
    char *VAR_2 = VAR_0;
    char *VAR_3 = VAR_0 + VAR_1 - 1;
    char VAR_4;

    if (VAR_1 > 1)
    {
        while (VAR_2 < VAR_3)
        {
            VAR_4 = *VAR_3;
            *VAR_3 = *VAR_2;
            *VAR_2 = VAR_4;
            VAR_2++; VAR_3--;
        }
    }

    return VAR_0;
}
