
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_bignum {int dummy; } ;
typedef int BIGNUM ;


 int FUNC_0 (int *,int const*) ;
 scalar_t__ FUNC_1 () ;

int FUNC_2(struct crypto_bignum *VAR_0, const struct crypto_bignum *VAR_1)
{
 if (FUNC_1())
  return -1;
 return FUNC_0((BIGNUM *) VAR_0, (const BIGNUM *) VAR_1) == 1 ? 0 : -1;
}
