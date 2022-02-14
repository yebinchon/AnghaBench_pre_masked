
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct command {scalar_t__** t_dcom; } ;
typedef scalar_t__ Char ;


 scalar_t__** FUNC_0 (scalar_t__**) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__**) ;
 scalar_t__ FUNC_2 (scalar_t__,int) ;
 scalar_t__ VAR_2 ;

void
FUNC_3(struct command *VAR_3)
{
    Char **VAR_4;
    Char *VAR_5;

    if (VAR_2)
 return;

    for (VAR_4 = VAR_3->t_dcom; (VAR_5 = *VAR_4++) != ((void*)0);) {
 for (; *VAR_5; VAR_5++) {
     if (FUNC_2(*VAR_5, VAR_1 | VAR_0)) {
  Char **VAR_6;

  VAR_6 = FUNC_0(VAR_3->t_dcom);
  FUNC_1(VAR_3->t_dcom);
  VAR_3->t_dcom = VAR_6;
  return;
     }
 }
    }
}
