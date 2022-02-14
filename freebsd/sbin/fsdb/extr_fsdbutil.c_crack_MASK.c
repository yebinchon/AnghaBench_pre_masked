
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char**,char*) ;

char **
FUNC_1(char *VAR_0, int *VAR_1)
{
    static char *VAR_2[8];
    int VAR_3;
    char *VAR_4, *VAR_5;
    for (VAR_4 = VAR_0, VAR_3 = 0; VAR_4 != ((void*)0) && VAR_3 < 8; VAR_3++) {
 while ((VAR_5 = FUNC_0(&VAR_4, " \t\n")) != ((void*)0) && *VAR_5 == '\0')
         ;
 if (VAR_5)
     VAR_2[VAR_3] = VAR_5;
 else
     break;
    }
    *VAR_1 = VAR_3;
    return VAR_2;
}
