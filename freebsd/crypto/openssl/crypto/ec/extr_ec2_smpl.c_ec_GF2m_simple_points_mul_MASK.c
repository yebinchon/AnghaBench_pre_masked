
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int cofactor; int order; } ;
typedef int EC_POINT ;
typedef TYPE_1__ EC_GROUP ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__ const*,int *,int *,int *,int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (TYPE_1__ const*) ;
 int FUNC_4 (int ,int ) ;
 int VAR_1 ;
 int FUNC_5 (TYPE_1__ const*,int *,int const*,int const*,int *) ;
 int FUNC_6 (TYPE_1__ const*,int *,int const*,size_t,int const**,int const**,int *) ;

__attribute__((used)) static
int FUNC_7(const EC_GROUP *VAR_2, EC_POINT *VAR_3,
                              const BIGNUM *VAR_4, size_t VAR_5,
                              const EC_POINT *VAR_6[],
                              const BIGNUM *VAR_7[],
                              BN_CTX *VAR_8)
{
    int VAR_9 = 0;
    EC_POINT *VAR_10 = ((void*)0);
    if (VAR_5 > 1 || FUNC_0(VAR_2->order) || FUNC_0(VAR_2->cofactor))
        return FUNC_6(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);

    if (VAR_4 != ((void*)0) && VAR_5 == 0)

        return FUNC_5(VAR_2, VAR_3, VAR_4, ((void*)0), VAR_8);

    if (VAR_4 == ((void*)0) && VAR_5 == 1)

        return FUNC_5(VAR_2, VAR_3, VAR_7[0], VAR_6[0], VAR_8);






    if ((VAR_10 = FUNC_3(VAR_2)) == ((void*)0)) {
        FUNC_4(VAR_0, VAR_1);
        return 0;
    }

    if (!FUNC_5(VAR_2, VAR_10, VAR_4, ((void*)0), VAR_8)
        || !FUNC_5(VAR_2, VAR_3, VAR_7[0], VAR_6[0], VAR_8)
        || !FUNC_1(VAR_2, VAR_3, VAR_10, VAR_3, VAR_8))
        goto err;

    VAR_9 = 1;

 err:
    FUNC_2(VAR_10);
    return VAR_9;
}
