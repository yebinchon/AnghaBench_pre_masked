
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* meth; } ;
struct TYPE_8__ {int (* mul ) (TYPE_2__ const*,int const*,int const*,size_t,int const**,int const**,int *) ;} ;
typedef int const EC_POINT ;
typedef TYPE_2__ EC_GROUP ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (TYPE_2__ const*,int const*) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ) ;
 int VAR_2 ;
 int FUNC_4 (int const*,TYPE_2__ const*) ;
 int FUNC_5 (TYPE_2__ const*,int const*,int const*,size_t,int const**,int const**,int *) ;
 int FUNC_6 (TYPE_2__ const*,int const*,int const*,size_t,int const**,int const**,int *) ;

int FUNC_7(const EC_GROUP *VAR_3, EC_POINT *VAR_4, const BIGNUM *VAR_5,
                  size_t VAR_6, const EC_POINT *VAR_7[],
                  const BIGNUM *VAR_8[], BN_CTX *VAR_9)
{
    int VAR_10 = 0;
    size_t VAR_11 = 0;
    BN_CTX *VAR_12 = ((void*)0);

    if ((VAR_5 == ((void*)0)) && (VAR_6 == 0)) {
        return FUNC_2(VAR_3, VAR_4);
    }

    if (!FUNC_4(VAR_4, VAR_3)) {
        FUNC_3(VAR_0, VAR_1);
        return 0;
    }
    for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++) {
        if (!FUNC_4(VAR_7[VAR_11], VAR_3)) {
            FUNC_3(VAR_0, VAR_1);
            return 0;
        }
    }

    if (VAR_9 == ((void*)0) && (VAR_9 = VAR_12 = FUNC_1()) == ((void*)0)) {
        FUNC_3(VAR_0, VAR_2);
        return 0;
    }

    if (VAR_3->meth->mul != ((void*)0))
        VAR_10 = VAR_3->meth->mul(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
    else

        VAR_10 = FUNC_5(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);

    FUNC_0(VAR_12);
    return VAR_10;
}
