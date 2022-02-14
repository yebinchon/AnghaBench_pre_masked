
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int b; int a; TYPE_1__* meth; int field; } ;
struct TYPE_6__ {int (* field_decode ) (TYPE_2__ const*,int *,int ,int *) ;} ;
typedef TYPE_2__ EC_GROUP ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_2__ const*,int *,int ,int *) ;
 int FUNC_4 (TYPE_2__ const*,int *,int ,int *) ;

int FUNC_5(const EC_GROUP *VAR_0, BIGNUM *VAR_1, BIGNUM *VAR_2,
                                  BIGNUM *VAR_3, BN_CTX *VAR_4)
{
    int VAR_5 = 0;
    BN_CTX *VAR_6 = ((void*)0);

    if (VAR_1 != ((void*)0)) {
        if (!FUNC_2(VAR_1, VAR_0->field))
            return 0;
    }

    if (VAR_2 != ((void*)0) || VAR_3 != ((void*)0)) {
        if (VAR_0->meth->field_decode) {
            if (VAR_4 == ((void*)0)) {
                VAR_4 = VAR_6 = FUNC_1();
                if (VAR_4 == ((void*)0))
                    return 0;
            }
            if (VAR_2 != ((void*)0)) {
                if (!VAR_0->meth->field_decode(VAR_0, VAR_2, VAR_0->a, VAR_4))
                    goto err;
            }
            if (VAR_3 != ((void*)0)) {
                if (!VAR_0->meth->field_decode(VAR_0, VAR_3, VAR_0->b, VAR_4))
                    goto err;
            }
        } else {
            if (VAR_2 != ((void*)0)) {
                if (!FUNC_2(VAR_2, VAR_0->a))
                    goto err;
            }
            if (VAR_3 != ((void*)0)) {
                if (!FUNC_2(VAR_3, VAR_0->b))
                    goto err;
            }
        }
    }

    VAR_5 = 1;

 err:
    FUNC_0(VAR_6);
    return VAR_5;
}
