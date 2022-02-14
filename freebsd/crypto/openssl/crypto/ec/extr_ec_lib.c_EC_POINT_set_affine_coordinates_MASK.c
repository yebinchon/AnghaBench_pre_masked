
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* meth; } ;
struct TYPE_7__ {int (* point_set_affine_coordinates ) (TYPE_2__ const*,int *,int const*,int const*,int *) ;} ;
typedef int EC_POINT ;
typedef TYPE_2__ EC_GROUP ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__ const*,int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;
 int FUNC_2 (int *,TYPE_2__ const*) ;
 int FUNC_3 (TYPE_2__ const*,int *,int const*,int const*,int *) ;

int FUNC_4(const EC_GROUP *VAR_4, EC_POINT *VAR_5,
                                    const BIGNUM *VAR_6, const BIGNUM *VAR_7,
                                    BN_CTX *VAR_8)
{
    if (VAR_4->meth->point_set_affine_coordinates == ((void*)0)) {
        FUNC_1(VAR_0,
              VAR_3);
        return 0;
    }
    if (!FUNC_2(VAR_5, VAR_4)) {
        FUNC_1(VAR_0, VAR_1);
        return 0;
    }
    if (!VAR_4->meth->point_set_affine_coordinates(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8))
        return 0;

    if (FUNC_0(VAR_4, VAR_5, VAR_8) <= 0) {
        FUNC_1(VAR_0, VAR_2);
        return 0;
    }
    return 1;
}
