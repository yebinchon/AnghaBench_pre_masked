
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char**,char*) ;

char **
FUNC_3(char *VAR_0, int *VAR_1, int VAR_2)
{
    static char *VAR_3[8];
    int VAR_4;
    char *VAR_5, *VAR_6;
    for (VAR_5 = VAR_0, VAR_4 = 0; VAR_5 != ((void*)0) && VAR_4 < 8 && VAR_4 < VAR_2 - 1; VAR_4++) {
 while ((VAR_6 = FUNC_2(&VAR_5, " \t\n")) != ((void*)0) && *VAR_6 == '\0')
         ;
 if (VAR_6)
     VAR_3[VAR_4] = VAR_6;
 else
     break;
    }
    VAR_3[VAR_4] = VAR_3[VAR_4 - 1] + FUNC_1(VAR_3[VAR_4 - 1]) + 1;
    VAR_3[VAR_4][FUNC_0(VAR_3[VAR_4], "\n")] = '\0';
    *VAR_1 = VAR_4 + 1;
    return VAR_3;
}
