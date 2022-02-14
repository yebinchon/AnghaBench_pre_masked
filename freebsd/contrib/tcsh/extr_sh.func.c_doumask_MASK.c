
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct command {int dummy; } ;
typedef char Char ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (struct command*) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (char*,int) ;

void
FUNC_5(Char **VAR_2, struct command *VAR_3)
{
    Char *VAR_4 = VAR_2[1];
    int VAR_5;

    FUNC_1(VAR_3);
    if (VAR_4 == 0) {
 VAR_5 = (int)FUNC_3(0);
 (void) FUNC_3(VAR_5);
 FUNC_4("%o\n", VAR_5);
 return;
    }
    VAR_5 = 0;
    while (FUNC_0(*VAR_4) && *VAR_4 != '8' && *VAR_4 != '9')
 VAR_5 = VAR_5 * 8 + *VAR_4++ - '0';
    if (*VAR_4 || VAR_5 < 0 || VAR_5 > 0777)
 FUNC_2(VAR_1 | VAR_0);
    (void) FUNC_3(VAR_5);
}
