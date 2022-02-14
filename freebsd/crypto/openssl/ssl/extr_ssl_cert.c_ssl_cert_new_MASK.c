
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int references; int * lock; int * sec_ex; int sec_level; int sec_cb; int * pkeys; int * key; } ;
typedef TYPE_1__ CERT ;


 int * FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int) ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_3 (int ,int ) ;
 int VAR_4 ;

CERT *FUNC_4(void)
{
    CERT *VAR_5 = FUNC_2(sizeof(*VAR_5));

    if (VAR_5 == ((void*)0)) {
        FUNC_3(VAR_2, VAR_0);
        return ((void*)0);
    }

    VAR_5->key = &(VAR_5->pkeys[VAR_3]);
    VAR_5->references = 1;
    VAR_5->sec_cb = VAR_4;
    VAR_5->sec_level = VAR_1;
    VAR_5->sec_ex = ((void*)0);
    VAR_5->lock = FUNC_0();
    if (VAR_5->lock == ((void*)0)) {
        FUNC_3(VAR_2, VAR_0);
        FUNC_1(VAR_5);
        return ((void*)0);
    }

    return VAR_5;
}
