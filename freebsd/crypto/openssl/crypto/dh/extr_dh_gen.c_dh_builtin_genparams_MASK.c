
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * g; int * p; } ;
typedef TYPE_1__ DH ;
typedef int BN_GENCB ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int,int ) ;
 int FUNC_6 (int *,int,int,int *,int *,int *) ;
 void* FUNC_7 () ;
 int FUNC_8 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_9 (int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_10(DH *VAR_5, int VAR_6, int VAR_7,
                                BN_GENCB *VAR_8)
{
    BIGNUM *VAR_9, *VAR_10;
    int VAR_11, VAR_12 = -1;
    BN_CTX *VAR_13 = ((void*)0);

    VAR_13 = FUNC_3();
    if (VAR_13 == ((void*)0))
        goto err;
    FUNC_4(VAR_13);
    VAR_9 = FUNC_2(VAR_13);
    VAR_10 = FUNC_2(VAR_13);
    if (VAR_10 == ((void*)0))
        goto err;


    if (!VAR_5->p && ((VAR_5->p = FUNC_7()) == ((void*)0)))
        goto err;
    if (!VAR_5->g && ((VAR_5->g = FUNC_7()) == ((void*)0)))
        goto err;

    if (VAR_7 <= 1) {
        FUNC_9(VAR_0, VAR_3);
        goto err;
    }
    if (VAR_7 == VAR_1) {
        if (!FUNC_8(VAR_9, 24))
            goto err;
        if (!FUNC_8(VAR_10, 11))
            goto err;
        VAR_11 = 2;
    } else if (VAR_7 == VAR_2) {
        if (!FUNC_8(VAR_9, 60))
            goto err;
        if (!FUNC_8(VAR_10, 23))
            goto err;
        VAR_11 = 5;
    } else {





        if (!FUNC_8(VAR_9, 12))
            goto err;
        if (!FUNC_8(VAR_10, 11))
            goto err;
        VAR_11 = VAR_7;
    }

    if (!FUNC_6(VAR_5->p, VAR_6, 1, VAR_9, VAR_10, VAR_8))
        goto err;
    if (!FUNC_5(VAR_8, 3, 0))
        goto err;
    if (!FUNC_8(VAR_5->g, VAR_11))
        goto err;
    VAR_12 = 1;
 err:
    if (VAR_12 == -1) {
        FUNC_9(VAR_0, VAR_4);
        VAR_12 = 0;
    }

    FUNC_0(VAR_13);
    FUNC_1(VAR_13);
    return VAR_12;
}
