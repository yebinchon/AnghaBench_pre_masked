
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
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,int ,int ) ;

void
FUNC_3(Char **VAR_4, struct command *VAR_5)
{
    int VAR_6 = VAR_2;
    FUNC_0(VAR_5);







    while (*++VAR_4)
 VAR_6 &= FUNC_1(*VAR_4, ((void*)0));

    if (!VAR_6)
 FUNC_2(VAR_1, VAR_0, VAR_3);
}
