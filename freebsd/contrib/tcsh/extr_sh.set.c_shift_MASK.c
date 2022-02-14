
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct varent {scalar_t__* vec; } ;
struct command {int dummy; } ;
typedef int Char ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (struct command*) ;
 struct varent* FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void
FUNC_7(Char **VAR_3, struct command *VAR_4)
{
    struct varent *VAR_5;
    Char *VAR_6;

    FUNC_0(VAR_4);
    VAR_3++;
    VAR_6 = *VAR_3;
    if (VAR_6 == 0)
 VAR_6 = VAR_2;
    else
 (void) FUNC_4(VAR_6);
    VAR_5 = FUNC_1(VAR_6);
    if (VAR_5 == ((void*)0) || VAR_5->vec == ((void*)0))
 FUNC_5(VAR_6);
    if (VAR_5->vec[0] == 0)
 FUNC_3(VAR_0 | VAR_1);
    FUNC_2(VAR_5->vec, 1);
    FUNC_6(VAR_6);
}
