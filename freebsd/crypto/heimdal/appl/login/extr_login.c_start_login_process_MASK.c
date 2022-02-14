
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,int *,int ) ;
 char* FUNC_2 (char*,char) ;

__attribute__((used)) static int
FUNC_3(void)
{
    char *VAR_1, *VAR_2;
    VAR_1 = FUNC_0("login_program");
    if(VAR_1 == ((void*)0))
 return 0;
    VAR_2 = FUNC_2(VAR_1, '/');

    if(VAR_2)
 VAR_2++;
    else
 VAR_2 = VAR_1;

    return FUNC_1(VAR_1, VAR_2, ((void*)0), VAR_0);
}
