
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (scalar_t__,char const*,int) ;
 int FUNC_1 (char*,char const*) ;
 scalar_t__ FUNC_2 (char const*) ;

char *FUNC_3(const char *VAR_0, const char* VAR_1, int VAR_2)
{
    char *VAR_3;

    if (VAR_0 == ((void*)0))
        return ((void*)0);
    VAR_3 = FUNC_0(FUNC_2(VAR_0) + 1, VAR_1, VAR_2);
    if (VAR_3 != ((void*)0))
        FUNC_1(VAR_3, VAR_0);
    return VAR_3;
}
