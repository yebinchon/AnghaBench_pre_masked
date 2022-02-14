
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*) ;
 char* FUNC_1 (char*) ;
 char* FUNC_2 (char const**) ;

__attribute__((used)) static char *
FUNC_3 (const char **VAR_0)
{
    char *VAR_1 = ((void*)0);





    if (VAR_1 == ((void*)0))
 VAR_1 = FUNC_1("MAILHOST");
    if (VAR_1 == ((void*)0))
 FUNC_0 (1, "MAILHOST not set");
    return VAR_1;
}
