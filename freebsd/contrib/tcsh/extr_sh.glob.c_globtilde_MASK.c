
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char Char ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (char*,int) ;
 char* FUNC_1 (char*) ;
 char* FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (char*,int (*) (char*)) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ,...) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static Char *
FUNC_10(Char *VAR_3)
{
    Char *VAR_4, *VAR_5, *VAR_6, *VAR_7;

    VAR_5 = VAR_3;
    for (VAR_3++; *VAR_3 && *VAR_3 != '/' && *VAR_3 != ':'; VAR_3++)
 continue;
    VAR_4 = FUNC_0(VAR_5 + 1, VAR_3 - (VAR_5 + 1));
    FUNC_4(VAR_4, FUNC_9);
    VAR_6 = FUNC_6(VAR_4);
    if (VAR_6 == ((void*)0)) {
 if (FUNC_3(VAR_2)) {
     FUNC_5(VAR_4);
     return VAR_5;
 }
 if (*VAR_4)
     FUNC_8(VAR_1, FUNC_7(VAR_4));
 else
     FUNC_8(VAR_0);
    }
    FUNC_5(VAR_4);
    if (VAR_6[0] == '/' && VAR_6[1] == '\0' && VAR_3[0] == '/')
 VAR_7 = FUNC_1(VAR_3);
    else
 VAR_7 = FUNC_2(VAR_6, VAR_3);
    FUNC_9(VAR_6);
    FUNC_9(VAR_5);
    return VAR_7;
}
