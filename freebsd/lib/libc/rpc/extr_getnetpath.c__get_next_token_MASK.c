
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,char) ;
 int FUNC_1 (char*,char*) ;

char *
FUNC_2(char *VAR_0, int VAR_1)
{
    char *VAR_2;
    char *VAR_3;
    char *VAR_4;

    if ((VAR_2 = FUNC_0(VAR_0, VAR_1)) == ((void*)0)) {
 return (((void*)0));
    }



    if ((VAR_2 > VAR_0) && (VAR_2[-1] == '\\')) {

 if ((VAR_2 > VAR_0 + 1) && (VAR_2[-2] != '\\')) {

     FUNC_1(&VAR_2[-1], VAR_2);




     return (FUNC_2(VAR_2, VAR_1));
 }
    }

    *VAR_2++ = '\0';

    VAR_4 = VAR_0;
    while ((VAR_3 = FUNC_0(VAR_4, '\\')) != ((void*)0)) {
 if (VAR_3[1] == '\\')
     VAR_3++;
 FUNC_1(VAR_3, (VAR_4 = &VAR_3[1]));
    }
    return (VAR_2);
}
