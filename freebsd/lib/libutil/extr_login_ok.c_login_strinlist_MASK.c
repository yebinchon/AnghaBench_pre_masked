
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char const*,int) ;

int
FUNC_1(const char **VAR_0, char const *VAR_1, int VAR_2)
{
    int VAR_3 = 0;

    if (VAR_1 != ((void*)0) && *VAR_1 != '\0') {
 int VAR_4 = 0;

 while (VAR_3 == 0 && VAR_0[VAR_4] != ((void*)0))
     VAR_3 = FUNC_0(VAR_0[VAR_4++], VAR_1, VAR_2) == 0;
    }
    return VAR_3;
}
