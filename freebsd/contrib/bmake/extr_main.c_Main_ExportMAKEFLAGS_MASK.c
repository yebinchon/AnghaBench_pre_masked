
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp ;
typedef int Boolean ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int *,char*,int ,int ) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,char*,int) ;

void
FUNC_3(Boolean VAR_2)
{
    static int VAR_3 = 1;
    char VAR_4[64];
    char *VAR_5;

    if (VAR_3 != VAR_2)
 return;
    VAR_3 = 0;

    FUNC_2(VAR_4, "${.MAKEFLAGS} ${.MAKEOVERRIDES:O:u:@v@$v=${$v:Q}@}",
     sizeof(VAR_4));
    VAR_5 = FUNC_0(((void*)0), VAR_4, VAR_1, VAR_0);
    if (VAR_5 && *VAR_5) {



 FUNC_1("MAKE", VAR_5, 1);

    }
}
