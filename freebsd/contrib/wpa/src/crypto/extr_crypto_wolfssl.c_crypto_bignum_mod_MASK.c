
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_bignum {int dummy; } ;
typedef int mp_int ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *,int *) ;

int FUNC_1(const struct crypto_bignum *VAR_1,
        const struct crypto_bignum *VAR_2,
        struct crypto_bignum *VAR_3)
{
 return FUNC_0((mp_int *) VAR_1, (mp_int *) VAR_2,
        (mp_int *) VAR_3) == VAR_0 ? 0 : -1;
}
