
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statistic_print_options {int type_integer; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,int,int ) ;
 int * VAR_1 ;
 int VAR_2 ;

int
FUNC_2(struct statistic_print_options*VAR_3, int VAR_4, char **VAR_5)
{
    int VAR_6 = 0;

    if (VAR_1 == ((void*)0))
 FUNC_0(1, "no stat file");

    if (VAR_3->type_integer)
 VAR_6 = VAR_3->type_integer;

    FUNC_1(VAR_0, VAR_6, VAR_2);
    return 0;
}
