
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ tv_sec; unsigned int tv_usec; } ;
struct TYPE_11__ {TYPE_1__* d1; } ;
struct TYPE_10__ {int (* timer_cb ) (TYPE_2__*,int ) ;int timeout_duration_us; TYPE_4__ next_timeout; } ;
typedef TYPE_2__ SSL ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,TYPE_4__*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*,int ,int) ;
 int FUNC_6 (TYPE_2__*,int ) ;

void FUNC_7(SSL *VAR_1)
{
    unsigned int VAR_2, VAR_3;



    if (FUNC_1(FUNC_3(VAR_1))) {
        FUNC_5(&VAR_1->d1->next_timeout, 0, sizeof(VAR_1->d1->next_timeout));
        return;
    }






    if (VAR_1->d1->next_timeout.tv_sec == 0 && VAR_1->d1->next_timeout.tv_usec == 0) {

        if (VAR_1->d1->timer_cb != ((void*)0))
            VAR_1->d1->timeout_duration_us = VAR_1->d1->timer_cb(VAR_1, 0);
        else
            VAR_1->d1->timeout_duration_us = 1000000;
    }


    FUNC_4(&(VAR_1->d1->next_timeout));



    VAR_2 = VAR_1->d1->timeout_duration_us / 1000000;
    VAR_3 = VAR_1->d1->timeout_duration_us - (VAR_2 * 1000000);

    VAR_1->d1->next_timeout.tv_sec += VAR_2;
    VAR_1->d1->next_timeout.tv_usec += VAR_3;

    if (VAR_1->d1->next_timeout.tv_usec >= 1000000) {
        VAR_1->d1->next_timeout.tv_sec++;
        VAR_1->d1->next_timeout.tv_usec -= 1000000;
    }

    FUNC_0(FUNC_2(VAR_1), VAR_0, 0,
             &(VAR_1->d1->next_timeout));
}
