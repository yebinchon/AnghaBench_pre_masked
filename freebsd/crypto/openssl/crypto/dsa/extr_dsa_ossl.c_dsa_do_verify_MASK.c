
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int flags; int const* q; int const* p; int pub_key; int g; TYPE_1__* meth; int lock; int method_mont_p; } ;
struct TYPE_5__ {int (* dsa_mod_exp ) (TYPE_2__*,int const*,int ,int const*,int ,int const*,int const*,int *,int *) ;} ;
typedef int DSA_SIG ;
typedef TYPE_2__ DSA ;
typedef int BN_MONT_CTX ;
typedef int BN_CTX ;
typedef int const BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int * FUNC_2 (int *,int ,int const*,int *) ;
 int * FUNC_3 (unsigned char const*,int,int const*) ;
 int FUNC_4 (int const*) ;
 scalar_t__ FUNC_5 (int const*) ;
 scalar_t__ FUNC_6 (int const*) ;
 int FUNC_7 (int const*,int const*,int const*,int *) ;
 int FUNC_8 (int const*,int ,int const*,int ,int const*,int const*,int *,int *) ;
 int * FUNC_9 (int const*,int const*,int const*,int *) ;
 int FUNC_10 (int const*,int const*,int const*,int const*,int *) ;
 int const* FUNC_11 () ;
 int FUNC_12 (int const*) ;
 scalar_t__ FUNC_13 (int const*,int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_14 (int *,int const**,int const**) ;
 int FUNC_15 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_16 (TYPE_2__*,int const*,int ,int const*,int ,int const*,int const*,int *,int *) ;

__attribute__((used)) static int FUNC_17(const unsigned char *VAR_7, int VAR_8,
                         DSA_SIG *VAR_9, DSA *VAR_10)
{
    BN_CTX *VAR_11;
    BIGNUM *VAR_12, *VAR_13, *VAR_14;
    BN_MONT_CTX *VAR_15 = ((void*)0);
    const BIGNUM *VAR_16, *VAR_17;
    int VAR_18 = -1, VAR_19;
    if (!VAR_10->p || !VAR_10->q || !VAR_10->g) {
        FUNC_15(VAR_1, VAR_3);
        return -1;
    }

    VAR_19 = FUNC_12(VAR_10->q);

    if (VAR_19 != 160 && VAR_19 != 224 && VAR_19 != 256) {
        FUNC_15(VAR_1, VAR_2);
        return -1;
    }

    if (FUNC_12(VAR_10->p) > VAR_6) {
        FUNC_15(VAR_1, VAR_4);
        return -1;
    }
    VAR_12 = FUNC_11();
    VAR_13 = FUNC_11();
    VAR_14 = FUNC_11();
    VAR_11 = FUNC_1();
    if (VAR_12 == ((void*)0) || VAR_13 == ((void*)0) || VAR_14 == ((void*)0) || VAR_11 == ((void*)0))
        goto err;

    FUNC_14(VAR_9, &VAR_16, &VAR_17);

    if (FUNC_6(VAR_16) || FUNC_5(VAR_16) ||
        FUNC_13(VAR_16, VAR_10->q) >= 0) {
        VAR_18 = 0;
        goto err;
    }
    if (FUNC_6(VAR_17) || FUNC_5(VAR_17) ||
        FUNC_13(VAR_17, VAR_10->q) >= 0) {
        VAR_18 = 0;
        goto err;
    }




    if ((FUNC_9(VAR_13, VAR_17, VAR_10->q, VAR_11)) == ((void*)0))
        goto err;


    if (VAR_8 > (VAR_19 >> 3))





        VAR_8 = (VAR_19 >> 3);
    if (FUNC_3(VAR_7, VAR_8, VAR_12) == ((void*)0))
        goto err;


    if (!FUNC_10(VAR_12, VAR_12, VAR_13, VAR_10->q, VAR_11))
        goto err;


    if (!FUNC_10(VAR_13, VAR_16, VAR_13, VAR_10->q, VAR_11))
        goto err;

    if (VAR_10->flags & VAR_0) {
        VAR_15 = FUNC_2(&VAR_10->method_mont_p,
                                      VAR_10->lock, VAR_10->p, VAR_11);
        if (!VAR_15)
            goto err;
    }

    if (VAR_10->meth->dsa_mod_exp != ((void*)0)) {
        if (!VAR_10->meth->dsa_mod_exp(VAR_10, VAR_14, VAR_10->g, VAR_12, VAR_10->pub_key, VAR_13,
                                    VAR_10->p, VAR_11, VAR_15))
            goto err;
    } else {
        if (!FUNC_8(VAR_14, VAR_10->g, VAR_12, VAR_10->pub_key, VAR_13, VAR_10->p, VAR_11,
                              VAR_15))
            goto err;
    }


    if (!FUNC_7(VAR_12, VAR_14, VAR_10->q, VAR_11))
        goto err;




    VAR_18 = (FUNC_13(VAR_12, VAR_16) == 0);

 err:
    if (VAR_18 < 0)
        FUNC_15(VAR_1, VAR_5);
    FUNC_0(VAR_11);
    FUNC_4(VAR_12);
    FUNC_4(VAR_13);
    FUNC_4(VAR_14);
    return VAR_18;
}
