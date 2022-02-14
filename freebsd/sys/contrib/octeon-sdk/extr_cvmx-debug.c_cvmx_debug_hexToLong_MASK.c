
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 long FUNC_0 (char const) ;

__attribute__((used)) static int FUNC_1(const char **VAR_0, uint64_t *VAR_1)
{
    int VAR_2 = 0;
    long VAR_3;

    *VAR_1 = 0;
    while (**VAR_0)
    {
        VAR_3 = FUNC_0(**VAR_0);
        if (VAR_3 < 0)
            break;

        *VAR_1 = (*VAR_1 << 4) | VAR_3;
        VAR_2 ++;

        (*VAR_0)++;
    }

    return(VAR_2);
}
