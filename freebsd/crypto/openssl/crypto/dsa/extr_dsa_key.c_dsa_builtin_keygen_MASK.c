
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * priv_key; int * pub_key; int p; int g; int q; } ;
typedef TYPE_1__ DSA ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int *,int ,int *) ;
 int * FUNC_5 () ;
 int FUNC_6 (int *,int ) ;
 int * FUNC_7 () ;
 int FUNC_8 (int *,int *,int ) ;

__attribute__((used)) static int FUNC_9(DSA *VAR_1)
{
    int VAR_2 = 0;
    BN_CTX *VAR_3 = ((void*)0);
    BIGNUM *VAR_4 = ((void*)0), *VAR_5 = ((void*)0);

    if ((VAR_3 = FUNC_1()) == ((void*)0))
        goto err;

    if (VAR_1->priv_key == ((void*)0)) {
        if ((VAR_5 = FUNC_7()) == ((void*)0))
            goto err;
    } else
        VAR_5 = VAR_1->priv_key;

    do
        if (!FUNC_6(VAR_5, VAR_1->q))
            goto err;
    while (FUNC_3(VAR_5)) ;

    if (VAR_1->pub_key == ((void*)0)) {
        if ((VAR_4 = FUNC_5()) == ((void*)0))
            goto err;
    } else
        VAR_4 = VAR_1->pub_key;

    {
        BIGNUM *VAR_6 = FUNC_5();

        if (VAR_6 == ((void*)0))
            goto err;
        FUNC_8(VAR_6, VAR_5, VAR_0);

        if (!FUNC_4(VAR_4, VAR_1->g, VAR_6, VAR_1->p, VAR_3)) {
            FUNC_2(VAR_6);
            goto err;
        }

        FUNC_2(VAR_6);
    }

    VAR_1->priv_key = VAR_5;
    VAR_1->pub_key = VAR_4;
    VAR_2 = 1;

 err:
    if (VAR_4 != VAR_1->pub_key)
        FUNC_2(VAR_4);
    if (VAR_5 != VAR_1->priv_key)
        FUNC_2(VAR_5);
    FUNC_0(VAR_3);
    return VAR_2;
}
