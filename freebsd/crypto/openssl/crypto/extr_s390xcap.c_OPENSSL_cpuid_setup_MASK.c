
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sigaction {int sa_mask; int sa_handler; } ;
typedef int sigset_t ;
typedef int ill_act ;
struct TYPE_2__ {int* stfle; } ;


 int FUNC_0 () ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (struct sigaction*,int ,int) ;
 int FUNC_4 (int ,struct sigaction*,struct sigaction*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *,int *) ;
 scalar_t__ FUNC_8 (int ,int) ;

void FUNC_9(void)
{
    sigset_t VAR_10;
    struct sigaction VAR_11, VAR_12, VAR_13;

    if (VAR_0.stfle[0])
        return;


    VAR_0.stfle[0] |= FUNC_2(0);

    FUNC_3(&VAR_11, 0, sizeof(VAR_11));
    VAR_11.sa_handler = VAR_8;
    FUNC_6(&VAR_11.sa_mask);
    FUNC_5(&VAR_11.sa_mask, VAR_5);
    FUNC_5(&VAR_11.sa_mask, VAR_4);
    FUNC_5(&VAR_11.sa_mask, VAR_6);
    FUNC_7(VAR_7, &VAR_11.sa_mask, &VAR_10);
    FUNC_4(VAR_5, &VAR_11, &VAR_12);
    FUNC_4(VAR_4, &VAR_11, &VAR_13);


    if (FUNC_8(VAR_9, 1) == 0)
        FUNC_0();


    if ((VAR_0.stfle[2] & FUNC_2(VAR_1))
        && (FUNC_8(VAR_9, 1) == 0)) {
        FUNC_1();
    } else {
        VAR_0.stfle[2] &= ~(FUNC_2(VAR_1)
                                         | FUNC_2(VAR_2)
                                         | FUNC_2(VAR_3));
    }

    FUNC_4(VAR_4, &VAR_13, ((void*)0));
    FUNC_4(VAR_5, &VAR_12, ((void*)0));
    FUNC_7(VAR_7, &VAR_10, ((void*)0));
}
