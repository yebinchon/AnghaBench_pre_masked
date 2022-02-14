
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char) ;
 char* FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (char*,char*,int) ;

int
FUNC_5(char *VAR_0)
{
    char *VAR_1, *VAR_2;
    int VAR_3;

    if ((VAR_2 = FUNC_2("debug.acpi.disabled")) == ((void*)0))
 return (0);
    if (FUNC_3(VAR_2, "all") == 0) {
 FUNC_0(VAR_2);
 return (1);
    }


    VAR_1 = VAR_2;
    for (;;) {
 while (*VAR_1 != '\0' && FUNC_1(*VAR_1))
     VAR_1++;
 if (*VAR_1 == '\0')
     break;
 VAR_3 = 0;
 while (VAR_1[VAR_3] != '\0' && !FUNC_1(VAR_1[VAR_3]))
     VAR_3++;
 if (FUNC_4(VAR_1, VAR_0, VAR_3) == 0) {
     FUNC_0(VAR_2);
     return (1);
 }
 VAR_1 += VAR_3;
    }
    FUNC_0(VAR_2);

    return (0);
}
