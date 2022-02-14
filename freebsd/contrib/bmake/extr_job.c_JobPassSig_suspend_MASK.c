
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {void (* sa_handler ) (int) ;scalar_t__ sa_flags; int sa_mask; } ;
typedef int sigset_t ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 void FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int) ;
 int VAR_3 ;
 int FUNC_6 (int,struct sigaction*,int *) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int *,int *) ;

__attribute__((used)) static void
FUNC_11(int VAR_4)
{
    sigset_t VAR_5, VAR_6;
    struct sigaction VAR_7;


    VAR_3 = 1;


    FUNC_1(VAR_4);







    FUNC_9(&VAR_5);
    FUNC_7(&VAR_5, VAR_4);
    (void)FUNC_10(VAR_1, &VAR_5, &VAR_6);

    VAR_7.sa_handler = FUNC_2;
    FUNC_8(&VAR_7.sa_mask);
    VAR_7.sa_flags = 0;
    (void)FUNC_6(VAR_4, &VAR_7, ((void*)0));

    if (FUNC_0(VAR_0)) {
 (void)FUNC_3(VAR_2,
         "JobPassSig passing signal %d to self.\n", VAR_4);
    }

    (void)FUNC_5(FUNC_4(), VAR_4);
    VAR_7.sa_handler = FUNC_11;
    (void)FUNC_6(VAR_4, &VAR_7, ((void*)0));
    (void)FUNC_10(VAR_1, &VAR_6, ((void*)0));
}
