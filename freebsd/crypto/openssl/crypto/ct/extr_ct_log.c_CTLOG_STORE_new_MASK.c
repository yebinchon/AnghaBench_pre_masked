
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * logs; } ;
typedef TYPE_1__ CTLOG_STORE ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int) ;
 int * FUNC_3 () ;

CTLOG_STORE *FUNC_4(void)
{
    CTLOG_STORE *VAR_2 = FUNC_2(sizeof(*VAR_2));

    if (VAR_2 == ((void*)0)) {
        FUNC_0(VAR_0, VAR_1);
        return ((void*)0);
    }

    VAR_2->logs = FUNC_3();
    if (VAR_2->logs == ((void*)0))
        goto err;

    return VAR_2;
err:
    FUNC_1(VAR_2);
    return ((void*)0);
}
