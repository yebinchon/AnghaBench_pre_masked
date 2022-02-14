
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct command {int dummy; } ;
typedef int Char ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (int*,int ) ;
 int FUNC_2 (int*) ;
 int VAR_1 ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (struct command*) ;
 scalar_t__ VAR_4 ;

void
FUNC_7(Char **VAR_5, struct command *VAR_6)
{
    int VAR_7 = 1;

    do {
 VAR_7 *= FUNC_4(VAR_5[1]);
 FUNC_5(VAR_5, 2);
    } while (VAR_5[0] != ((void*)0) && FUNC_0(VAR_5[0], VAR_0) == 0);
    if (VAR_2)
 VAR_7 = 1;

    if (VAR_4) {
 VAR_3++;
 FUNC_1(&VAR_3, VAR_1);
    }
    while (VAR_7 > 0) {
 if (VAR_4 && VAR_3 == 1) {
     FUNC_2(&VAR_3);
     VAR_3++;
     FUNC_1(&VAR_3, VAR_1);
 }
 FUNC_6(VAR_6);
 --VAR_7;
    }
    if (VAR_4 && VAR_3 == 1)
        FUNC_2(&VAR_3);
    FUNC_3();
}
