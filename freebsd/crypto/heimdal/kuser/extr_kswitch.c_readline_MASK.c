
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (char*,int,int ) ;
 int FUNC_2 (char*,char const*) ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_3 (char*,char*) ;
 char* FUNC_4 (char*) ;

__attribute__((used)) static char *
FUNC_5(const char *VAR_3)
{
    char VAR_4[VAR_0];
    FUNC_2 ("%s", VAR_3);
    FUNC_0 (VAR_2);
    if(FUNC_1(VAR_4, sizeof(VAR_4), VAR_1) == ((void*)0))
 return ((void*)0);
    VAR_4[FUNC_3(VAR_4, "\r\n")] = '\0';
    return FUNC_4(VAR_4);
}
