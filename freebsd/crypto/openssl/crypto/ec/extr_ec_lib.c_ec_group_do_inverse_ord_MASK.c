
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* meth; } ;
struct TYPE_6__ {int (* field_inverse_mod_ord ) (TYPE_2__ const*,int *,int const*,int *) ;} ;
typedef TYPE_2__ EC_GROUP ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (TYPE_2__ const*,int *,int const*,int *) ;
 int FUNC_1 (TYPE_2__ const*,int *,int const*,int *) ;

int FUNC_2(const EC_GROUP *VAR_0, BIGNUM *VAR_1,
                            const BIGNUM *VAR_2, BN_CTX *VAR_3)
{
    if (VAR_0->meth->field_inverse_mod_ord != ((void*)0))
        return VAR_0->meth->field_inverse_mod_ord(VAR_0, VAR_1, VAR_2, VAR_3);
    else
        return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
}
