
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int * generator; TYPE_1__* meth; } ;
struct TYPE_10__ {int flags; } ;
typedef int EC_POINT ;
typedef TYPE_2__ EC_GROUP ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 scalar_t__ FUNC_2 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (TYPE_2__ const*,int *) ;
 int * FUNC_4 (TYPE_2__ const*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__ const*,int *) ;
 scalar_t__ FUNC_7 (TYPE_2__ const*,int *,int *) ;
 int FUNC_8 (TYPE_2__ const*,int *,int const*,int *,int *,int *) ;
 int * FUNC_9 (TYPE_2__ const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_10 (int ,int ) ;
 int VAR_7 ;

int FUNC_11(const EC_GROUP *VAR_8, BN_CTX *VAR_9)
{
    int VAR_10 = 0;
    const BIGNUM *VAR_11;
    BN_CTX *VAR_12 = ((void*)0);
    EC_POINT *VAR_13 = ((void*)0);


    if ((VAR_8->meth->flags & VAR_0) != 0)
        return 1;

    if (VAR_9 == ((void*)0)) {
        VAR_9 = VAR_12 = FUNC_1();
        if (VAR_9 == ((void*)0)) {
            FUNC_10(VAR_1, VAR_7);
            goto err;
        }
    }


    if (!FUNC_3(VAR_8, VAR_9)) {
        FUNC_10(VAR_1, VAR_2);
        goto err;
    }


    if (VAR_8->generator == ((void*)0)) {
        FUNC_10(VAR_1, VAR_5);
        goto err;
    }
    if (FUNC_7(VAR_8, VAR_8->generator, VAR_9) <= 0) {
        FUNC_10(VAR_1, VAR_4);
        goto err;
    }


    if ((VAR_13 = FUNC_9(VAR_8)) == ((void*)0))
        goto err;
    VAR_11 = FUNC_4(VAR_8);
    if (VAR_11 == ((void*)0))
        goto err;
    if (FUNC_2(VAR_11)) {
        FUNC_10(VAR_1, VAR_6);
        goto err;
    }

    if (!FUNC_8(VAR_8, VAR_13, VAR_11, ((void*)0), ((void*)0), VAR_9))
        goto err;
    if (!FUNC_6(VAR_8, VAR_13)) {
        FUNC_10(VAR_1, VAR_3);
        goto err;
    }

    VAR_10 = 1;

 err:
    FUNC_0(VAR_12);
    FUNC_5(VAR_13);
    return VAR_10;
}
