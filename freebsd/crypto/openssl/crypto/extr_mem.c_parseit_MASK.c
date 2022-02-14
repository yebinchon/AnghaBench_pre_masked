
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 char* FUNC_2 (char*,char) ;

__attribute__((used)) static void FUNC_3(void)
{
    char *VAR_3 = FUNC_2(VAR_2, ';');
    char *VAR_4;

    if (VAR_3 != ((void*)0))
        *VAR_3++ = '\0';


    VAR_0 = FUNC_1(VAR_2);
    VAR_4 = FUNC_2(VAR_2, '@');
    VAR_1 = VAR_4 == ((void*)0) ? 0 : FUNC_0(VAR_4 + 1);

    if (VAR_3 != ((void*)0))
        VAR_2 = VAR_3;
}
