
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_bignum {int dummy; } ;
typedef int BIGNUM ;


 scalar_t__ FUNC_0 (int *,int const*,int const*) ;

int FUNC_1(const struct crypto_bignum *VAR_0,
        const struct crypto_bignum *VAR_1,
        struct crypto_bignum *VAR_2)
{
 return FUNC_0((BIGNUM *) VAR_2, (const BIGNUM *) VAR_0, (const BIGNUM *) VAR_1) ?
  0 : -1;
}
