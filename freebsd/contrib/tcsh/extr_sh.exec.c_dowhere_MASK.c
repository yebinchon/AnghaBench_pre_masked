
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
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int ,int ,int ) ;

void
FUNC_5(Char **VAR_4, struct command *VAR_5)
{
    int VAR_6 = 1;
    FUNC_0(VAR_5);

    if (FUNC_1(VAR_1))
 FUNC_2(((void*)0), ((void*)0));
    for (VAR_4++; *VAR_4; VAR_4++)
 VAR_6 &= FUNC_3(*VAR_4, 1);

    if (!VAR_6)
 FUNC_4(VAR_2, VAR_0, VAR_3);
}
