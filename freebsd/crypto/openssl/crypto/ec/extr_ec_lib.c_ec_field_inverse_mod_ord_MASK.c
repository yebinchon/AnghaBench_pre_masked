
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * mont_data; int order; } ;
typedef TYPE_1__ EC_GROUP ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int const*,int *,int ,int *,int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int ,int *) ;

__attribute__((used)) static int FUNC_8(const EC_GROUP *VAR_0, BIGNUM *VAR_1,
                                    const BIGNUM *VAR_2, BN_CTX *VAR_3)
{
    BIGNUM *VAR_4 = ((void*)0);
    BN_CTX *VAR_5 = ((void*)0);
    int VAR_6 = 0;

    if (VAR_0->mont_data == ((void*)0))
        return 0;

    if (VAR_3 == ((void*)0) && (VAR_3 = VAR_5 = FUNC_3()) == ((void*)0))
        return 0;

    FUNC_4(VAR_3);
    if ((VAR_4 = FUNC_2(VAR_3)) == ((void*)0))
        goto err;





    if (!FUNC_6(VAR_4, 2))
        goto err;
    if (!FUNC_7(VAR_4, VAR_0->order, VAR_4))
        goto err;




    if (!FUNC_5(VAR_1, VAR_2, VAR_4, VAR_0->order, VAR_3, VAR_0->mont_data))
        goto err;

    VAR_6 = 1;

 err:
    FUNC_0(VAR_3);
    FUNC_1(VAR_5);
    return VAR_6;
}
