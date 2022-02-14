
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char*,char const*,int) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_1, char *VAR_2)
{
    const char *VAR_3;


    if (VAR_1 == ((void*)0) || *VAR_1 == '\0') {
 VAR_2[0] = '.';
 VAR_2[1] = '\0';
 return (0);
    }


    VAR_3 = VAR_1 + FUNC_1(VAR_1) - 1;
    while (VAR_3 > VAR_1 && *VAR_3 == '/')
 VAR_3--;


    while (VAR_3 > VAR_1 && *VAR_3 != '/')
 VAR_3--;


    if (VAR_3 == VAR_1) {
 VAR_2[0] = *VAR_3 == '/' ? '/' : '.';
 VAR_2[1] = '\0';
 return (0);
    } else {
 do {
     VAR_3--;
 } while (VAR_3 > VAR_1 && *VAR_3 == '/');
    }

    if (VAR_3 - VAR_1 + 2 > VAR_0)
    {
 FUNC_0("Filename is too long: %s", VAR_1);
 return(-1);
    }

    FUNC_2(VAR_2, VAR_1, VAR_3 - VAR_1 + 1);
    VAR_2[VAR_3 - VAR_1 + 1] = '\0';
    return (0);
}
