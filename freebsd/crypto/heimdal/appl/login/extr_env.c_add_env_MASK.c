
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char**,char*,char const*,char const*) ;
 char** VAR_0 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int VAR_1 ;
 size_t FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char*,char const*,size_t) ;

void
FUNC_6(const char *VAR_2, const char *VAR_3)
{
    int VAR_4;
    char *VAR_5;
    FUNC_0(&VAR_5, "%s=%s", VAR_2, VAR_3);
    if(VAR_5 == ((void*)0))
 FUNC_1(1, "Out of memory!");
    for(VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
 if(FUNC_5(VAR_0[VAR_4], VAR_2, FUNC_4(VAR_2)) == 0 &&
    VAR_0[VAR_4][FUNC_4(VAR_2)] == '='){
     FUNC_3(VAR_0[VAR_4]);
     VAR_0[VAR_4] = VAR_5;
     return;
 }

    FUNC_2(VAR_5);
}
