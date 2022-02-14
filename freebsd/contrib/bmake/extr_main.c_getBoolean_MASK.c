
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp ;
typedef int Boolean ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int *,char*,int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int,char*,char const*) ;

Boolean
FUNC_4(const char *VAR_2, Boolean VAR_3)
{
    char VAR_4[64];
    char *VAR_5;

    if (FUNC_3(VAR_4, sizeof(VAR_4), "${%s:U:tl}", VAR_2) < (int)(sizeof(VAR_4))) {
 VAR_5 = FUNC_0(((void*)0), VAR_4, VAR_1, VAR_0);

 if (VAR_5) {
     VAR_3 = FUNC_2(VAR_5, VAR_3);
     FUNC_1(VAR_5);
 }
    }
    return (VAR_3);
}
