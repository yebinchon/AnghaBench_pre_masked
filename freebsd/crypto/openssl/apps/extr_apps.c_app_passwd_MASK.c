
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*,int) ;
 scalar_t__ FUNC_1 (char const*,char const*) ;

int FUNC_2(const char *VAR_0, const char *VAR_1, char **VAR_2, char **VAR_3)
{
    int VAR_4;
    if (VAR_1 == ((void*)0) || VAR_0 == ((void*)0) || FUNC_1(VAR_0, VAR_1))
        VAR_4 = 0;
    else
        VAR_4 = 1;
    if (VAR_0 != ((void*)0)) {
        *VAR_2 = FUNC_0(VAR_0, VAR_4);
        if (*VAR_2 == ((void*)0))
            return 0;
    } else if (VAR_2 != ((void*)0)) {
        *VAR_2 = ((void*)0);
    }
    if (VAR_1 != ((void*)0)) {
        *VAR_3 = FUNC_0(VAR_1, VAR_4 ? 2 : 0);
        if (*VAR_3 == ((void*)0))
            return 0;
    } else if (VAR_3 != ((void*)0)) {
        *VAR_3 = ((void*)0);
    }
    return 1;
}
