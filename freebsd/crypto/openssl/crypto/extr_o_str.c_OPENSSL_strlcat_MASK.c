
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char*,char const*,size_t) ;

size_t FUNC_1(char *VAR_0, const char *VAR_1, size_t VAR_2)
{
    size_t VAR_3 = 0;
    for (; VAR_2 > 0 && *VAR_0; VAR_2--, VAR_0++)
        VAR_3++;
    return VAR_3 + FUNC_0(VAR_0, VAR_1, VAR_2);
}
