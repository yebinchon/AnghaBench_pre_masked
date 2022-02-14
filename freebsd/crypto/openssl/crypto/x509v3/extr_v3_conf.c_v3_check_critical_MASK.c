
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,char*,int) ;

__attribute__((used)) static int FUNC_3(const char **VAR_0)
{
    const char *VAR_1 = *VAR_0;
    if ((FUNC_1(VAR_1) < 9) || FUNC_2(VAR_1, "critical,", 9))
        return 0;
    VAR_1 += 9;
    while (FUNC_0(*VAR_1))
        VAR_1++;
    *VAR_0 = VAR_1;
    return 1;
}
