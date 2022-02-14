
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * micros; int * millis; int * seconds; } ;
typedef TYPE_1__ TS_RESP_CTX ;


 void* FUNC_0 () ;
 int FUNC_1 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int ) ;

int FUNC_4(TS_RESP_CTX *VAR_2,
                             int VAR_3, int VAR_4, int VAR_5)
{

    FUNC_2(VAR_2);
    if (VAR_3
        && ((VAR_2->seconds = FUNC_0()) == ((void*)0)
            || !FUNC_1(VAR_2->seconds, VAR_3)))
        goto err;
    if (VAR_4
        && ((VAR_2->millis = FUNC_0()) == ((void*)0)
            || !FUNC_1(VAR_2->millis, VAR_4)))
        goto err;
    if (VAR_5
        && ((VAR_2->micros = FUNC_0()) == ((void*)0)
            || !FUNC_1(VAR_2->micros, VAR_5)))
        goto err;

    return 1;
 err:
    FUNC_2(VAR_2);
    FUNC_3(VAR_1, VAR_0);
    return 0;
}
