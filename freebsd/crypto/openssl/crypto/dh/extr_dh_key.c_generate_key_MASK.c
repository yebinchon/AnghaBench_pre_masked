
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int flags; int length; int * priv_key; int * pub_key; int p; int g; TYPE_1__* meth; int q; int lock; int method_mont_p; } ;
struct TYPE_5__ {int (* bn_mod_exp ) (TYPE_2__*,int *,int ,int *,int ,int *,int *) ;} ;
typedef TYPE_2__ DH ;
typedef int BN_MONT_CTX ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int VAR_0 ;
 int * FUNC_2 (int *,int ,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (int *) ;
 int * FUNC_10 () ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *,unsigned int,int ,int ) ;
 int FUNC_13 (int *,int ) ;
 int * FUNC_14 () ;
 int FUNC_15 (int *,int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_16 (int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_17 (TYPE_2__*,int *,int ,int *,int ,int *,int *) ;

__attribute__((used)) static int FUNC_18(DH *VAR_9)
{
    int VAR_10 = 0;
    int VAR_11 = 0;
    unsigned VAR_12;
    BN_CTX *VAR_13 = ((void*)0);
    BN_MONT_CTX *VAR_14 = ((void*)0);
    BIGNUM *VAR_15 = ((void*)0), *VAR_16 = ((void*)0);

    if (FUNC_11(VAR_9->p) > VAR_8) {
        FUNC_16(VAR_4, VAR_6);
        return 0;
    }

    VAR_13 = FUNC_1();
    if (VAR_13 == ((void*)0))
        goto err;

    if (VAR_9->priv_key == ((void*)0)) {
        VAR_16 = FUNC_14();
        if (VAR_16 == ((void*)0))
            goto err;
        VAR_11 = 1;
    } else
        VAR_16 = VAR_9->priv_key;

    if (VAR_9->pub_key == ((void*)0)) {
        VAR_15 = FUNC_10();
        if (VAR_15 == ((void*)0))
            goto err;
    } else
        VAR_15 = VAR_9->pub_key;

    if (VAR_9->flags & VAR_3) {
        VAR_14 = FUNC_2(&VAR_9->method_mont_p,
                                      VAR_9->lock, VAR_9->p, VAR_13);
        if (!VAR_14)
            goto err;
    }

    if (VAR_11) {
        if (VAR_9->q) {
            do {
                if (!FUNC_13(VAR_16, VAR_9->q))
                    goto err;
            }
            while (FUNC_9(VAR_16) || FUNC_7(VAR_16));
        } else {

            VAR_12 = VAR_9->length ? VAR_9->length : FUNC_11(VAR_9->p) - 1;
            if (!FUNC_12(VAR_16, VAR_12, VAR_2, VAR_1))
                goto err;




            if (FUNC_8(VAR_9->g, VAR_5) && !FUNC_6(VAR_9->p, 2)) {

                if (!FUNC_3(VAR_16, 0))
                    goto err;
            }
        }
    }

    {
        BIGNUM *VAR_17 = FUNC_10();

        if (VAR_17 == ((void*)0))
            goto err;
        FUNC_15(VAR_17, VAR_16, VAR_0);

        if (!VAR_9->meth->bn_mod_exp(VAR_9, VAR_15, VAR_9->g, VAR_17, VAR_9->p, VAR_13, VAR_14)) {
            FUNC_4(VAR_17);
            goto err;
        }

        FUNC_4(VAR_17);
    }

    VAR_9->pub_key = VAR_15;
    VAR_9->priv_key = VAR_16;
    VAR_10 = 1;
 err:
    if (VAR_10 != 1)
        FUNC_16(VAR_4, VAR_7);

    if (VAR_15 != VAR_9->pub_key)
        FUNC_5(VAR_15);
    if (VAR_16 != VAR_9->priv_key)
        FUNC_5(VAR_16);
    FUNC_0(VAR_13);
    return VAR_10;
}
