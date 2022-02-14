
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct command {int dummy; } ;
typedef int Char ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct command*) ;
 int VAR_3 ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,int ) ;
 char* FUNC_3 (int *) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,char*) ;

void
FUNC_6(Char **VAR_4, struct command *VAR_5)
{
    char *VAR_6;



    char VAR_7[2048];

    FUNC_0(VAR_5);

    VAR_6 = (VAR_4[1] == ((void*)0) ? FUNC_1("TERM") : FUNC_3(VAR_4[1]));
    if (VAR_6 == ((void*)0)) {



 FUNC_2(VAR_2, VAR_1, VAR_3);
 return;
    }
    if (FUNC_4(VAR_7, VAR_6) == 1) {
 FUNC_5("%s\n", VAR_6);
 FUNC_2(VAR_2, VAR_0, VAR_3);
    } else
 FUNC_2(VAR_2, VAR_1, VAR_3);
}
