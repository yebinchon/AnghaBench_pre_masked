
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * priv_key; int * pub_key; int group; } ;
typedef int EC_POINT ;
typedef TYPE_1__ EC_KEY ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *,int const*) ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int *,int *,int *,int *,int *) ;
 int * FUNC_9 (int ) ;

int FUNC_10(EC_KEY *VAR_0)
{
    int VAR_1 = 0;
    BN_CTX *VAR_2 = ((void*)0);
    BIGNUM *VAR_3 = ((void*)0);
    const BIGNUM *VAR_4 = ((void*)0);
    EC_POINT *VAR_5 = ((void*)0);

    if ((VAR_2 = FUNC_1()) == ((void*)0))
        goto err;

    if (VAR_0->priv_key == ((void*)0)) {
        VAR_3 = FUNC_4();
        if (VAR_3 == ((void*)0))
            goto err;
    } else
        VAR_3 = VAR_0->priv_key;

    VAR_4 = FUNC_6(VAR_0->group);
    if (VAR_4 == ((void*)0))
        goto err;

    do
        if (!FUNC_5(VAR_3, VAR_4))
            goto err;
    while (FUNC_3(VAR_3)) ;

    if (VAR_0->pub_key == ((void*)0)) {
        VAR_5 = FUNC_9(VAR_0->group);
        if (VAR_5 == ((void*)0))
            goto err;
    } else
        VAR_5 = VAR_0->pub_key;

    if (!FUNC_8(VAR_0->group, VAR_5, VAR_3, ((void*)0), ((void*)0), VAR_2))
        goto err;

    VAR_0->priv_key = VAR_3;
    VAR_0->pub_key = VAR_5;

    VAR_1 = 1;

 err:
    if (VAR_0->pub_key == ((void*)0))
        FUNC_7(VAR_5);
    if (VAR_0->priv_key != VAR_3)
        FUNC_2(VAR_3);
    FUNC_0(VAR_2);
    return VAR_1;
}
