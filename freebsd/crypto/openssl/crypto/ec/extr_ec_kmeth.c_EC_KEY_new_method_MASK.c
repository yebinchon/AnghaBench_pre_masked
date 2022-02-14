
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ (* init ) (TYPE_1__*) ;} ;
struct TYPE_10__ {int references; int version; TYPE_5__* meth; int ex_data; int conv_form; int * engine; int * lock; } ;
typedef int ENGINE ;
typedef TYPE_1__ EC_KEY ;


 int VAR_0 ;
 int * FUNC_0 () ;
 int FUNC_1 (int ,TYPE_1__*,int *) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_5__* FUNC_3 () ;
 int FUNC_4 (int ,int ) ;
 TYPE_5__* FUNC_5 (int *) ;
 int * FUNC_6 () ;
 int FUNC_7 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (TYPE_1__*) ;
 TYPE_1__* FUNC_9 (int) ;
 int VAR_5 ;
 scalar_t__ FUNC_10 (TYPE_1__*) ;

EC_KEY *FUNC_11(ENGINE *VAR_6)
{
    EC_KEY *VAR_7 = FUNC_9(sizeof(*VAR_7));

    if (VAR_7 == ((void*)0)) {
        FUNC_4(VAR_1, VAR_4);
        return ((void*)0);
    }

    VAR_7->references = 1;
    VAR_7->lock = FUNC_0();
    if (VAR_7->lock == ((void*)0)) {
        FUNC_4(VAR_1, VAR_4);
        FUNC_8(VAR_7);
        return ((void*)0);
    }

    VAR_7->meth = FUNC_3();

    if (VAR_6 != ((void*)0)) {
        if (!FUNC_7(VAR_6)) {
            FUNC_4(VAR_1, VAR_2);
            goto err;
        }
        VAR_7->engine = VAR_6;
    } else
        VAR_7->engine = FUNC_6();
    if (VAR_7->engine != ((void*)0)) {
        VAR_7->meth = FUNC_5(VAR_7->engine);
        if (VAR_7->meth == ((void*)0)) {
            FUNC_4(VAR_1, VAR_2);
            goto err;
        }
    }


    VAR_7->version = 1;
    VAR_7->conv_form = VAR_5;

    if (!FUNC_1(VAR_0, VAR_7, &VAR_7->ex_data)) {
        goto err;
    }

    if (VAR_7->meth->init != ((void*)0) && VAR_7->meth->init(VAR_7) == 0) {
        FUNC_4(VAR_1, VAR_3);
        goto err;
    }
    return VAR_7;

 err:
    FUNC_2(VAR_7);
    return ((void*)0);
}
