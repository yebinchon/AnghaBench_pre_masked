
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 scalar_t__ FUNC_2 (unsigned char) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (char*,char**,int) ;

__attribute__((used)) static int
FUNC_5 (const char **VAR_0, int VAR_1, int *VAR_2)
{
    char *VAR_3, *VAR_4;
    int VAR_5;

    VAR_4 = FUNC_3(VAR_1 + 1);
    if (VAR_4 == ((void*)0))
 return -1;


    for (; **VAR_0 != '\0' && FUNC_2((unsigned char)(**VAR_0)); (*VAR_0)++)
 ;


    for (VAR_5 = 0; **VAR_0 != '\0' && VAR_5 < VAR_1 && FUNC_1((unsigned char)(**VAR_0)); VAR_5++, (*VAR_0)++)
 VAR_4[VAR_5] = **VAR_0;
    VAR_4[VAR_5] = '\0';

    *VAR_2 = FUNC_4 (VAR_4, &VAR_3, 10);
    FUNC_0(VAR_4);
    if (VAR_3 == VAR_4)
 return -1;

    return 0;
}
