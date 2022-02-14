
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct execash_state {int SHIN; int SHOUT; int SHDIAG; int OLDSTD; int saveIN; int saveOUT; int saveDIAG; int saveSTD; scalar_t__ didcch; scalar_t__ didfds; int sigterm; int sigquit; int sigint; } ;
struct command {int t_dcom; } ;
typedef int Char ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int **) ;
 int VAR_8 ;
 int * FUNC_1 (int ) ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (struct execash_state*,int ) ;
 int FUNC_3 (struct execash_state*) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_6 (struct command*,int) ;
 int VAR_12 ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (int ,int) ;
 scalar_t__ VAR_13 ;
 int FUNC_9 (int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_10 (int *,int ) ;
 scalar_t__ VAR_16 ;
 int FUNC_11 (int) ;
 int FUNC_12 (int ,int *,int *) ;

void
FUNC_13(Char **VAR_17, struct command *VAR_18)
{
    struct execash_state VAR_19;

    FUNC_0(VAR_17);
    if (VAR_9 == 0 && VAR_16)
 FUNC_9(0);




    FUNC_10(((void*)0), FUNC_1(VAR_7) != ((void*)0));


    FUNC_12(VAR_4, &VAR_14, &VAR_19.sigint);
    FUNC_12(VAR_5, &VAR_14, &VAR_19.sigquit);
    FUNC_12(VAR_6, &VAR_15, &VAR_19.sigterm);

    VAR_19.didfds = VAR_11;

    VAR_19.didcch = VAR_10;

    VAR_19.SHIN = VAR_2;
    VAR_19.SHOUT = VAR_3;
    VAR_19.SHDIAG = VAR_1;
    VAR_19.OLDSTD = VAR_0;

    (void)FUNC_4 (VAR_19.saveIN = FUNC_5(VAR_2, -1), 1);
    (void)FUNC_4 (VAR_19.saveOUT = FUNC_5(VAR_3, -1), 1);
    (void)FUNC_4 (VAR_19.saveDIAG = FUNC_5(VAR_1, -1), 1);
    (void)FUNC_4 (VAR_19.saveSTD = FUNC_5(VAR_0, -1), 1);

    FUNC_8(VAR_18->t_dcom, 1);

    (void)FUNC_4 (VAR_2 = FUNC_5(0, -1), 1);
    (void)FUNC_4 (VAR_3 = FUNC_5(1, -1), 1);
    (void)FUNC_4 (VAR_1 = FUNC_5(2, -1), 1);

    VAR_10 = 0;

    VAR_11 = 0;
    FUNC_2(&VAR_19, VAR_12);




    if (VAR_13 == FUNC_7())
 FUNC_11(-1);



    FUNC_6(VAR_18, 1);

    FUNC_3(&VAR_19);
}
