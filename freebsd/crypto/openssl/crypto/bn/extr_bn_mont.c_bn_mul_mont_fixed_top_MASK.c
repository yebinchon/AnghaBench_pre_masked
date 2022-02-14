
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


struct TYPE_24__ {int top; int neg; int flags; int d; } ;
struct TYPE_22__ {int top; int d; } ;
struct TYPE_23__ {int n0; TYPE_1__ N; } ;
typedef TYPE_2__ BN_MONT_CTX ;
typedef int BN_CTX ;
typedef TYPE_3__ BIGNUM ;


 int FUNC_0 (int *) ;
 TYPE_3__* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_3__*,TYPE_3__*,TYPE_2__*,int *) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,TYPE_3__*,TYPE_2__*) ;
 int FUNC_6 (TYPE_3__*,TYPE_3__ const*,TYPE_3__ const*,int *) ;
 scalar_t__ FUNC_7 (int ,int ,int ,int ,int ,int) ;
 int FUNC_8 (TYPE_3__*,TYPE_3__ const*,int *) ;
 int * FUNC_9 (TYPE_3__*,int) ;

int FUNC_10(BIGNUM *VAR_1, const BIGNUM *VAR_2, const BIGNUM *VAR_3,
                          BN_MONT_CTX *VAR_4, BN_CTX *VAR_5)
{
    BIGNUM *VAR_6;
    int VAR_7 = 0;
    int VAR_8 = VAR_4->N.top;
    if ((VAR_2->top + VAR_3->top) > 2 * VAR_8)
        return 0;

    FUNC_2(VAR_5);
    VAR_6 = FUNC_1(VAR_5);
    if (VAR_6 == ((void*)0))
        goto err;

    FUNC_4(VAR_6);
    if (VAR_2 == VAR_3) {
        if (!FUNC_8(VAR_6, VAR_2, VAR_5))
            goto err;
    } else {
        if (!FUNC_6(VAR_6, VAR_2, VAR_3, VAR_5))
            goto err;
    }





    if (!FUNC_3(VAR_1, VAR_6, VAR_4, VAR_5))
        goto err;

    VAR_7 = 1;
 err:
    FUNC_0(VAR_5);
    return VAR_7;
}
