
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (int *,char const*,char**) ;
 char* FUNC_1 (char*,char) ;
 int FUNC_2 (char*) ;

char *
FUNC_3(const char *VAR_0, char **VAR_1)
{
    char *VAR_2;
    char *VAR_3;
    char VAR_4;


    if ((VAR_0 == ((void*)0)) || (VAR_1 == ((void*)0)) || (*VAR_1 == ((void*)0)))
        return ((void*)0);


    VAR_4 = *VAR_0;
    if (VAR_4 == '\0' || VAR_0[1] != '\0')
      return FUNC_0(((void*)0), VAR_0, VAR_1);


    VAR_2 = *VAR_1;
    while (*VAR_2 == VAR_4)
        ++VAR_2;

    if (!*VAR_2)
        return ((void*)0);




    VAR_3 = FUNC_1(VAR_2, VAR_4);
    if (VAR_3 == ((void*)0))
      {
        *VAR_1 = VAR_2 + FUNC_2(VAR_2);
      }
    else
      {
        *VAR_3 = '\0';
        *VAR_1 = VAR_3 + 1;
      }

    return VAR_2;
}
