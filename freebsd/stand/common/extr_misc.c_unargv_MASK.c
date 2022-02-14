
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (size_t) ;
 int FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (char*) ;

char *
FUNC_3(int VAR_0, char *VAR_1[])
{
    size_t VAR_2;
    int VAR_3;
    char *VAR_4;

    for (VAR_3 = 0, VAR_2 = 0; VAR_3 < VAR_0; VAR_3++)
 VAR_2 += FUNC_2(VAR_1[VAR_3]) + 2;

    if(VAR_2 == 0)
 return(((void*)0));

    VAR_4 = FUNC_0(VAR_2);
    VAR_4[0] = 0;
    for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
 FUNC_1(VAR_4, VAR_1[VAR_3]);
 if (VAR_3 < (VAR_0 - 1))
   FUNC_1(VAR_4, " ");
    }

    return(VAR_4);
}
