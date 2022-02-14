
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int g; int p; } ;
typedef TYPE_1__ DH ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 int * FUNC_6 (int *,int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_12(const DH *VAR_2, int *VAR_3)
{
    int VAR_4 = 0;
    BIGNUM *VAR_5 = ((void*)0);
    BN_CTX *VAR_6 = ((void*)0);

    *VAR_3 = 0;
    VAR_6 = FUNC_3();
    if (VAR_6 == ((void*)0))
        goto err;
    FUNC_4(VAR_6);
    VAR_5 = FUNC_2(VAR_6);
    if (VAR_5 == ((void*)0))
        goto err;

    if (!FUNC_8(VAR_2->p))
        *VAR_3 |= VAR_0;
    if (FUNC_7(VAR_2->g) || FUNC_10(VAR_2->g) || FUNC_9(VAR_2->g))
        *VAR_3 |= VAR_1;
    if (FUNC_6(VAR_5, VAR_2->p) == ((void*)0) || !FUNC_11(VAR_5, 1))
        goto err;
    if (FUNC_5(VAR_2->g, VAR_5) >= 0)
        *VAR_3 |= VAR_1;

    VAR_4 = 1;
 err:
    FUNC_0(VAR_6);
    FUNC_1(VAR_6);
    return VAR_4;
}
