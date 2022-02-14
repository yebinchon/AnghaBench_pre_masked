
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Var ;
typedef int GNode ;
typedef int Boolean ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_0 (char*,int *,int) ;
 int FUNC_1 (int *,int ) ;
 char* FUNC_2 (int *,char const*,int *,int ) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char const*,char) ;

Boolean
FUNC_5(const char *VAR_6, GNode *VAR_7)
{
    Var *VAR_8;
    char *VAR_9;

    if ((VAR_9 = FUNC_4(VAR_6, '$')) != ((void*)0)) {
 VAR_9 = FUNC_2(((void*)0), VAR_6, VAR_7, VAR_5);
    }
    VAR_8 = FUNC_0(VAR_9 ? VAR_9 : VAR_6, VAR_7, VAR_1|VAR_3|VAR_2);
    FUNC_3(VAR_9);
    if (VAR_8 == ((void*)0)) {
 return(VAR_0);
    } else {
 (void)FUNC_1(VAR_8, VAR_4);
    }
    return(VAR_4);
}
