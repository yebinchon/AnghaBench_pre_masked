
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int * field; } ;
struct TYPE_8__ {TYPE_2__* group; } ;
typedef int EC_POINT ;
typedef TYPE_1__ EC_KEY ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_2__*,int *,int *,int *,int *) ;
 int * FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*,int *,int *,int *,int *) ;
 int VAR_1 ;
 int FUNC_12 (int ,int ) ;
 int VAR_2 ;

int FUNC_13(EC_KEY *VAR_3, BIGNUM *VAR_4,
                                             BIGNUM *VAR_5)
{
    BN_CTX *VAR_6 = ((void*)0);
    BIGNUM *VAR_7, *VAR_8;
    EC_POINT *VAR_9 = ((void*)0);
    int VAR_10 = 0;

    if (VAR_3 == ((void*)0) || VAR_3->group == ((void*)0) || VAR_4 == ((void*)0) || VAR_5 == ((void*)0)) {
        FUNC_12(VAR_0,
              VAR_2);
        return 0;
    }
    VAR_6 = FUNC_3();
    if (VAR_6 == ((void*)0))
        return 0;

    FUNC_4(VAR_6);
    VAR_9 = FUNC_10(VAR_3->group);

    if (VAR_9 == ((void*)0))
        goto err;

    VAR_7 = FUNC_2(VAR_6);
    VAR_8 = FUNC_2(VAR_6);
    if (VAR_8 == ((void*)0))
        goto err;

    if (!FUNC_11(VAR_3->group, VAR_9, VAR_4, VAR_5, VAR_6))
        goto err;
    if (!FUNC_9(VAR_3->group, VAR_9, VAR_7, VAR_8, VAR_6))
        goto err;





    if (FUNC_5(VAR_4, VAR_7) || FUNC_5(VAR_5, VAR_8)
        || (FUNC_5(VAR_4, VAR_3->group->field) >= 0)
        || (FUNC_5(VAR_5, VAR_3->group->field) >= 0)) {
        FUNC_12(VAR_0,
              VAR_1);
        goto err;
    }

    if (!FUNC_7(VAR_3, VAR_9))
        goto err;

    if (FUNC_6(VAR_3) == 0)
        goto err;

    VAR_10 = 1;

 err:
    FUNC_0(VAR_6);
    FUNC_1(VAR_6);
    FUNC_8(VAR_9);
    return VAR_10;

}
