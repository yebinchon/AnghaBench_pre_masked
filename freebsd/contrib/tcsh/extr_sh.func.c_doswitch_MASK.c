
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct command {int dummy; } ;
typedef char Char ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct command*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*,int ) ;
 int VAR_4 ;
 int FUNC_4 (int ,int ,char*) ;
 int FUNC_5 (int ) ;
 int VAR_5 ;

void
FUNC_6(Char **VAR_6, struct command *VAR_7)
{
    Char *VAR_8, *VAR_9;

    FUNC_0(VAR_7);
    VAR_6++;
    if (!*VAR_6 || *(*VAR_6++) != '(')
 FUNC_5(VAR_0);
    VAR_8 = **VAR_6 == ')' ? VAR_2 : *VAR_6++;
    if (*(*VAR_6++) != ')')
 VAR_6--;
    if (*VAR_6)
 FUNC_5(VAR_0);
    VAR_9 = FUNC_3(VAR_8, VAR_1);
    FUNC_1(VAR_9, VAR_5);
    if (!VAR_4)
 FUNC_4(VAR_3, 0, VAR_9);
    FUNC_2(VAR_9);
}
