
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*) ;
 char* FUNC_1 (char const*,char) ;
 scalar_t__ FUNC_2 (char const*,char const*) ;
 int FUNC_3 (char const*) ;

char *
FUNC_4(const char *VAR_0, const char *VAR_1, int *VAR_2)
{
    const char *VAR_3 = VAR_1;
    const char *VAR_4 = VAR_0;
    const char *VAR_5;

    if (*VAR_3 == '\0') {

 *VAR_2 = FUNC_3(VAR_4);
 return FUNC_0(VAR_4);
    }

    if ((VAR_5 = FUNC_1(VAR_3, '%')) != ((void*)0)) {

 for (; VAR_3 != VAR_5 && *VAR_4 && *VAR_4 == *VAR_3; VAR_4++, VAR_3++)
      continue;

 if (VAR_3 != VAR_5)
     return ((void*)0);

 if (*++VAR_3 == '\0') {

     *VAR_2 = FUNC_3(VAR_4);
     return FUNC_0(VAR_4);
 }
    }

    VAR_5 = VAR_4;


    do
 if (FUNC_2(VAR_3, VAR_4) == 0) {
     *VAR_2 = VAR_4 - VAR_5;
     return FUNC_0(VAR_5);
 }
    while (*VAR_4++ != '\0');

    return ((void*)0);
}
