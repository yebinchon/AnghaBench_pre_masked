
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {long argl; int * free_func; int * dup_func; int * new_func; void* argp; } ;
struct TYPE_6__ {int * meth; } ;
typedef TYPE_1__ EX_CALLBACKS ;
typedef TYPE_2__ EX_CALLBACK ;
typedef int CRYPTO_EX_new ;
typedef int CRYPTO_EX_free ;
typedef int CRYPTO_EX_dup ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_2 ;
 TYPE_1__* FUNC_4 (int) ;
 int * FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int,TYPE_2__*) ;

int FUNC_9(int VAR_3, long VAR_4, void *VAR_5,
                            CRYPTO_EX_new *VAR_6, CRYPTO_EX_dup *VAR_7,
                            CRYPTO_EX_free *VAR_8)
{
    int VAR_9 = -1;
    EX_CALLBACK *VAR_10;
    EX_CALLBACKS *VAR_11 = FUNC_4(VAR_3);

    if (VAR_11 == ((void*)0))
        return -1;

    if (VAR_11->meth == ((void*)0)) {
        VAR_11->meth = FUNC_5();


        if (VAR_11->meth == ((void*)0)
            || !FUNC_7(VAR_11->meth, ((void*)0))) {
            FUNC_1(VAR_0, VAR_1);
            goto err;
        }
    }

    VAR_10 = (EX_CALLBACK *)FUNC_3(sizeof(*VAR_10));
    if (VAR_10 == ((void*)0)) {
        FUNC_1(VAR_0, VAR_1);
        goto err;
    }
    VAR_10->argl = VAR_4;
    VAR_10->argp = VAR_5;
    VAR_10->new_func = VAR_6;
    VAR_10->dup_func = VAR_7;
    VAR_10->free_func = VAR_8;

    if (!FUNC_7(VAR_11->meth, ((void*)0))) {
        FUNC_1(VAR_0, VAR_1);
        FUNC_2(VAR_10);
        goto err;
    }
    VAR_9 = FUNC_6(VAR_11->meth) - 1;
    (void)FUNC_8(VAR_11->meth, VAR_9, VAR_10);

 err:
    FUNC_0(VAR_2);
    return VAR_9;
}
