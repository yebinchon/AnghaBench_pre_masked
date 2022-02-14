
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (char*,int,int *) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (int,char*,char*) ;
 size_t FUNC_4 (char*,char*) ;

__attribute__((used)) static int
FUNC_5(const char *VAR_0, int VAR_1)
{
    FILE *VAR_2;
    char VAR_3[128];

    VAR_2 = FUNC_2(VAR_0, "r");
    if(VAR_2 == ((void*)0))
 return -1;
    while(FUNC_1(VAR_3, sizeof(VAR_3), VAR_2)){
 VAR_3[FUNC_4(VAR_3, "\r\n")] = '\0';
 FUNC_3(VAR_1, "%s", VAR_3);
    }
    FUNC_0(VAR_2);
    return 0;
}
