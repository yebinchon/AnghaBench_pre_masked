
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct command {int t_dcom; } ;
typedef int Char ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (int ***) ;
 int FUNC_3 (int,int **) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (struct command*) ;
 int FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int) ;

void
FUNC_9(Char **VAR_6, struct command *VAR_7)
{
    int VAR_8;
    Char **VAR_9;

    VAR_6++;
    VAR_8 = VAR_5 ? 1 : FUNC_2(&VAR_6);
    VAR_9 = VAR_6;
    if (*VAR_9 == ((void*)0))
 FUNC_8(VAR_2 | VAR_0);
    if (FUNC_1(*VAR_9, VAR_3)) {
 if (*++VAR_9)
     FUNC_8(VAR_2 | VAR_1);
 FUNC_6(FUNC_7(VAR_3));




 if (!VAR_8)
     FUNC_5(VAR_4, 0, ((void*)0));
 return;
    }




    if (VAR_8) {
 FUNC_3(VAR_7->t_dcom, VAR_9 - VAR_7->t_dcom);
 FUNC_4(VAR_7);
 FUNC_0();
    }
}
