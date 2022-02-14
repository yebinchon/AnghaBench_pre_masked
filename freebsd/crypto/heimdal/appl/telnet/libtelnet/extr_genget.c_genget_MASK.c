
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int FUNC_0 (char*,char*) ;

char **
FUNC_1(char *VAR_1, char **VAR_2, int VAR_3)



{
    char **VAR_4, **VAR_5;
    int VAR_6;

    if (VAR_1 == 0)
 return 0;

    VAR_5 = 0;
    for (VAR_4 = VAR_2; *VAR_4 != 0; VAR_4 = (char **)((char *)VAR_4 + VAR_3)) {
 if ((VAR_6 = FUNC_0(VAR_1, *VAR_4)) == 0)
     continue;
 if (VAR_6 < 0)
     return(VAR_4);
 if (VAR_5)
     return(&VAR_0);
 VAR_5 = VAR_4;
    }
    return(VAR_5);
}
