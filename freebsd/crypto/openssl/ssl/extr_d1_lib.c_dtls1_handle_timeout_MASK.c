
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {TYPE_2__* d1; } ;
struct TYPE_11__ {int read_timeouts; } ;
struct TYPE_12__ {TYPE_1__ timeout; int timeout_duration_us; int (* timer_cb ) (TYPE_3__*,int ) ;} ;
typedef TYPE_3__ SSL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,int ) ;

int FUNC_6(SSL *VAR_1)
{

    if (!FUNC_2(VAR_1)) {
        return 0;
    }

    if (VAR_1->d1->timer_cb != ((void*)0))
        VAR_1->d1->timeout_duration_us = VAR_1->d1->timer_cb(VAR_1, VAR_1->d1->timeout_duration_us);
    else
        FUNC_1(VAR_1);

    if (FUNC_0(VAR_1) < 0) {

        return -1;
    }

    VAR_1->d1->timeout.read_timeouts++;
    if (VAR_1->d1->timeout.read_timeouts > VAR_0) {
        VAR_1->d1->timeout.read_timeouts = 1;
    }

    FUNC_4(VAR_1);

    return FUNC_3(VAR_1);
}
