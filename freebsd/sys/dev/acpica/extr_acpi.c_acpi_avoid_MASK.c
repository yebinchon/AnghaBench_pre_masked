
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ACPI_HANDLE ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,int) ;

int
FUNC_5(ACPI_HANDLE VAR_0)
{
    char *VAR_1, *VAR_2, *VAR_3;
    int VAR_4;

    VAR_3 = FUNC_0(VAR_0);
    if (*VAR_3 == '\\')
 VAR_3++;
    if ((VAR_2 = FUNC_3("debug.acpi.avoid")) == ((void*)0))
 return (0);


    VAR_1 = VAR_2;
    for (;;) {
 while (*VAR_1 != 0 && FUNC_2(*VAR_1))
     VAR_1++;
 if (*VAR_1 == 0)
     break;
 VAR_4 = 0;
 while (VAR_1[VAR_4] != 0 && !FUNC_2(VAR_1[VAR_4]))
     VAR_4++;
 if (!FUNC_4(VAR_1, VAR_3, VAR_4)) {
     FUNC_1(VAR_2);
     return(1);
 }
 VAR_1 += VAR_4;
    }
    FUNC_1(VAR_2);

    return (0);
}
