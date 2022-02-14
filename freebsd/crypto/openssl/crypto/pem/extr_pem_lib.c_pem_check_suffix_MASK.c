
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char const*) ;
 int FUNC_1 (char const*) ;

int FUNC_2(const char *VAR_0, const char *VAR_1)
{
    int VAR_2 = FUNC_1(VAR_0);
    int VAR_3 = FUNC_1(VAR_1);
    const char *VAR_4;
    if (VAR_3 + 1 >= VAR_2)
        return 0;
    VAR_4 = VAR_0 + VAR_2 - VAR_3;
    if (FUNC_0(VAR_4, VAR_1))
        return 0;
    VAR_4--;
    if (*VAR_4 != ' ')
        return 0;
    return VAR_4 - VAR_0;
}
