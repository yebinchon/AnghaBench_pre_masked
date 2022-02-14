
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * p; int * q; scalar_t__ j; scalar_t__ g; } ;
typedef TYPE_1__ DH ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (scalar_t__,int *) ;
 int FUNC_6 (int *,int *,int *,int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,int *,int *) ;
 int FUNC_9 (int *,scalar_t__,int *,int *,int *) ;
 int FUNC_10 (int *,int *) ;
 int * FUNC_11 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_12 (TYPE_1__ const*,int*) ;

int FUNC_13(const DH *VAR_7, int *VAR_8)
{
    int VAR_9 = 0, VAR_10;
    BN_CTX *VAR_11 = ((void*)0);
    BIGNUM *VAR_12 = ((void*)0), *VAR_13 = ((void*)0);

    if (!FUNC_12(VAR_7, VAR_8))
        return 0;

    VAR_11 = FUNC_3();
    if (VAR_11 == ((void*)0))
        goto err;
    FUNC_4(VAR_11);
    VAR_12 = FUNC_2(VAR_11);
    VAR_13 = FUNC_2(VAR_11);
    if (VAR_13 == ((void*)0))
        goto err;

    if (VAR_7->q) {
        if (FUNC_5(VAR_7->g, FUNC_11()) <= 0)
            *VAR_8 |= VAR_5;
        else if (FUNC_5(VAR_7->g, VAR_7->p) >= 0)
            *VAR_8 |= VAR_5;
        else {

            if (!FUNC_9(VAR_12, VAR_7->g, VAR_7->q, VAR_7->p, VAR_11))
                goto err;
            if (!FUNC_7(VAR_12))
                *VAR_8 |= VAR_5;
        }
        VAR_10 = FUNC_8(VAR_7->q, VAR_6, VAR_11, ((void*)0));
        if (VAR_10 < 0)
            goto err;
        if (!VAR_10)
            *VAR_8 |= VAR_4;

        if (!FUNC_6(VAR_12, VAR_13, VAR_7->p, VAR_7->q, VAR_11))
            goto err;
        if (!FUNC_7(VAR_13))
            *VAR_8 |= VAR_1;
        if (VAR_7->j && FUNC_5(VAR_7->j, VAR_12))
            *VAR_8 |= VAR_0;
    }

    VAR_10 = FUNC_8(VAR_7->p, VAR_6, VAR_11, ((void*)0));
    if (VAR_10 < 0)
        goto err;
    if (!VAR_10)
        *VAR_8 |= VAR_2;
    else if (!VAR_7->q) {
        if (!FUNC_10(VAR_12, VAR_7->p))
            goto err;
        VAR_10 = FUNC_8(VAR_12, VAR_6, VAR_11, ((void*)0));
        if (VAR_10 < 0)
            goto err;
        if (!VAR_10)
            *VAR_8 |= VAR_3;
    }
    VAR_9 = 1;
 err:
    FUNC_0(VAR_11);
    FUNC_1(VAR_11);
    return VAR_9;
}
