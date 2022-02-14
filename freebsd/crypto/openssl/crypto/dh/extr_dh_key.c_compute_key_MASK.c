
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int flags; int p; int * priv_key; TYPE_1__* meth; int lock; int method_mont_p; } ;
struct TYPE_6__ {int (* bn_mod_exp ) (TYPE_2__*,int *,int const*,int *,int ,int *,int *) ;} ;
typedef TYPE_2__ DH ;
typedef int BN_MONT_CTX ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int * FUNC_5 (int *,int ,int ,int *) ;
 int FUNC_6 (int *,unsigned char*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (TYPE_2__*,int const*,int*) ;
 int FUNC_10 (int ,int ) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_11 (TYPE_2__*,int *,int const*,int *,int ,int *,int *) ;

__attribute__((used)) static int FUNC_12(unsigned char *VAR_8, const BIGNUM *VAR_9, DH *VAR_10)
{
    BN_CTX *VAR_11 = ((void*)0);
    BN_MONT_CTX *VAR_12 = ((void*)0);
    BIGNUM *VAR_13;
    int VAR_14 = -1;
    int VAR_15;

    if (FUNC_7(VAR_10->p) > VAR_7) {
        FUNC_10(VAR_2, VAR_4);
        goto err;
    }

    VAR_11 = FUNC_3();
    if (VAR_11 == ((void*)0))
        goto err;
    FUNC_4(VAR_11);
    VAR_13 = FUNC_2(VAR_11);
    if (VAR_13 == ((void*)0))
        goto err;

    if (VAR_10->priv_key == ((void*)0)) {
        FUNC_10(VAR_2, VAR_5);
        goto err;
    }

    if (VAR_10->flags & VAR_1) {
        VAR_12 = FUNC_5(&VAR_10->method_mont_p,
                                      VAR_10->lock, VAR_10->p, VAR_11);
        FUNC_8(VAR_10->priv_key, VAR_0);
        if (!VAR_12)
            goto err;
    }

    if (!FUNC_9(VAR_10, VAR_9, &VAR_15) || VAR_15) {
        FUNC_10(VAR_2, VAR_3);
        goto err;
    }

    if (!VAR_10->
        meth->bn_mod_exp(VAR_10, VAR_13, VAR_9, VAR_10->priv_key, VAR_10->p, VAR_11, VAR_12)) {
        FUNC_10(VAR_2, VAR_6);
        goto err;
    }

    VAR_14 = FUNC_6(VAR_13, VAR_8);
 err:
    FUNC_0(VAR_11);
    FUNC_1(VAR_11);
    return VAR_14;
}
