
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int * order; } ;
struct TYPE_8__ {int * pub_key; TYPE_3__* group; int * priv_key; } ;
typedef int EC_POINT ;
typedef TYPE_1__ EC_KEY ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 scalar_t__ FUNC_2 (int *,int const*) ;
 scalar_t__ FUNC_3 (int const*) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (TYPE_3__*,int *,int *,int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (TYPE_3__*,int *) ;
 scalar_t__ FUNC_7 (TYPE_3__*,int *,int *) ;
 int FUNC_8 (TYPE_3__*,int *,int *,int *,int const*,int *) ;
 int * FUNC_9 (TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_10 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;

int FUNC_11(const EC_KEY *VAR_8)
{
    int VAR_9 = 0;
    BN_CTX *VAR_10 = ((void*)0);
    const BIGNUM *VAR_11 = ((void*)0);
    EC_POINT *VAR_12 = ((void*)0);

    if (VAR_8 == ((void*)0) || VAR_8->group == ((void*)0) || VAR_8->pub_key == ((void*)0)) {
        FUNC_10(VAR_0, VAR_7);
        return 0;
    }

    if (FUNC_6(VAR_8->group, VAR_8->pub_key)) {
        FUNC_10(VAR_0, VAR_3);
        goto err;
    }

    if ((VAR_10 = FUNC_1()) == ((void*)0))
        goto err;
    if ((VAR_12 = FUNC_9(VAR_8->group)) == ((void*)0))
        goto err;


    if (FUNC_7(VAR_8->group, VAR_8->pub_key, VAR_10) <= 0) {
        FUNC_10(VAR_0, VAR_4);
        goto err;
    }

    VAR_11 = VAR_8->group->order;
    if (FUNC_3(VAR_11)) {
        FUNC_10(VAR_0, VAR_1);
        goto err;
    }
    if (!FUNC_8(VAR_8->group, VAR_12, ((void*)0), VAR_8->pub_key, VAR_11, VAR_10)) {
        FUNC_10(VAR_0, VAR_6);
        goto err;
    }
    if (!FUNC_6(VAR_8->group, VAR_12)) {
        FUNC_10(VAR_0, VAR_5);
        goto err;
    }




    if (VAR_8->priv_key != ((void*)0)) {
        if (FUNC_2(VAR_8->priv_key, VAR_11) >= 0) {
            FUNC_10(VAR_0, VAR_5);
            goto err;
        }
        if (!FUNC_8(VAR_8->group, VAR_12, VAR_8->priv_key,
                          ((void*)0), ((void*)0), VAR_10)) {
            FUNC_10(VAR_0, VAR_6);
            goto err;
        }
        if (FUNC_4(VAR_8->group, VAR_12, VAR_8->pub_key, VAR_10) != 0) {
            FUNC_10(VAR_0, VAR_2);
            goto err;
        }
    }
    VAR_9 = 1;
 err:
    FUNC_0(VAR_10);
    FUNC_5(VAR_12);
    return VAR_9;
}
