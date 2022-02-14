
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int login_cap_t ;


 char const** FUNC_0 (char const*,char const*,int *) ;
 char* FUNC_1 (int *,char const*,int *,int *) ;

const char **
FUNC_2(login_cap_t *VAR_0, const char *VAR_1, const char *VAR_2)
{
    const char *VAR_3;

    if (VAR_2 == ((void*)0))
 VAR_2 = ", \t";
    if ((VAR_3 = FUNC_1(VAR_0, VAR_1, ((void*)0), ((void*)0))) != ((void*)0))
 return FUNC_0(VAR_3, VAR_2, ((void*)0));
    return ((void*)0);
}
