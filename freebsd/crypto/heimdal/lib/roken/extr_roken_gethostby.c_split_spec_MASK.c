
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,int*) ;
 char* FUNC_1 (char*,char) ;
 char* FUNC_2 (char const*) ;

__attribute__((used)) static void
FUNC_3(const char *VAR_0, char **VAR_1, int *VAR_2, char **VAR_3, int VAR_4)
{
    char *VAR_5;
    *VAR_1 = FUNC_2(VAR_0);
    VAR_5 = FUNC_1(*VAR_1, ':');
    if(VAR_5) {
 *VAR_5++ = '\0';
 if(FUNC_0(VAR_5, "%d", VAR_2) != 1)
     *VAR_2 = VAR_4;
    } else
 *VAR_2 = VAR_4;
    VAR_5 = FUNC_1(VAR_5 ? VAR_5 : *VAR_1, '/');
    if(VAR_5) {
 if(VAR_3)
     *VAR_3 = FUNC_2(VAR_5);
 *VAR_5 = '\0';
    }else
 if(VAR_3)
     *VAR_3 = ((void*)0);
}
