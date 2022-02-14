
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int sane; int value; } ;
struct TYPE_5__ {struct TYPE_5__* next; int (* handler ) () ;} ;
typedef TYPE_1__ OPENSSL_INIT_STOP ;
typedef int CRYPTO_THREAD_LOCAL ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 TYPE_3__ VAR_2 ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (int ,char*) ;
 int * VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_14 () ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 () ;
 int FUNC_18 () ;
 int FUNC_19 () ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 int VAR_7 ;
 int FUNC_20 () ;
 scalar_t__ VAR_8 ;

void FUNC_21(void)
{
    OPENSSL_INIT_STOP *VAR_9, *VAR_10;
    CRYPTO_THREAD_LOCAL VAR_11;


    if (!VAR_1)
        return;


    if (VAR_7)
        return;
    VAR_7 = 1;





    FUNC_16(FUNC_15(0));

    VAR_9 = VAR_6;
    while (VAR_9 != ((void*)0)) {
        VAR_9->handler();
        VAR_10 = VAR_9;
        VAR_9 = VAR_9->next;
        FUNC_3(VAR_10);
    }
    VAR_6 = ((void*)0);

    FUNC_1(VAR_3);
    VAR_3 = ((void*)0);







    if (VAR_8) {




        FUNC_6();
    }


    if (VAR_0) {




        FUNC_4();
    }

    if (VAR_4) {




        FUNC_11();
    }

    VAR_11 = VAR_2.value;
    VAR_2.sane = -1;
    FUNC_0(&VAR_11);
    FUNC_18();
    FUNC_19();
    FUNC_7();

    FUNC_9();

    FUNC_17();
    FUNC_8();
    FUNC_5();
    FUNC_12();
    FUNC_14();
    FUNC_10();

    FUNC_2();

    VAR_1 = 0;
}
