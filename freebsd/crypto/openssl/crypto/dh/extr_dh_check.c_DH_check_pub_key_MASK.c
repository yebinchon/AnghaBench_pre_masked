
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int p; int * q; } ;
typedef TYPE_1__ DH ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int const*,int *) ;
 int * FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int const*,int *,int ,int *) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_11(const DH *VAR_3, const BIGNUM *VAR_4, int *VAR_5)
{
    int VAR_6 = 0;
    BIGNUM *VAR_7 = ((void*)0);
    BN_CTX *VAR_8 = ((void*)0);

    *VAR_5 = 0;
    VAR_8 = FUNC_3();
    if (VAR_8 == ((void*)0))
        goto err;
    FUNC_4(VAR_8);
    VAR_7 = FUNC_2(VAR_8);
    if (VAR_7 == ((void*)0) || !FUNC_9(VAR_7, 1))
        goto err;
    if (FUNC_5(VAR_4, VAR_7) <= 0)
        *VAR_5 |= VAR_2;
    if (FUNC_6(VAR_7, VAR_3->p) == ((void*)0) || !FUNC_10(VAR_7, 1))
        goto err;
    if (FUNC_5(VAR_4, VAR_7) >= 0)
        *VAR_5 |= VAR_1;

    if (VAR_3->q != ((void*)0)) {

        if (!FUNC_8(VAR_7, VAR_4, VAR_3->q, VAR_3->p, VAR_8))
            goto err;
        if (!FUNC_7(VAR_7))
            *VAR_5 |= VAR_0;
    }

    VAR_6 = 1;
 err:
    FUNC_0(VAR_8);
    FUNC_1(VAR_8);
    return VAR_6;
}
