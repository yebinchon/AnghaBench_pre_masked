
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_bignum {int dummy; } ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int const*,int const*,int const*,int *) ;
 scalar_t__ FUNC_3 () ;

int FUNC_4(const struct crypto_bignum *VAR_0,
    const struct crypto_bignum *VAR_1,
    const struct crypto_bignum *VAR_2,
    struct crypto_bignum *VAR_3)
{
 int VAR_4;

 BN_CTX *VAR_5;

 if (FUNC_3())
  return -1;

 VAR_5 = FUNC_1();
 if (VAR_5 == ((void*)0))
  return -1;
 VAR_4 = FUNC_2((BIGNUM *) VAR_3, (const BIGNUM *) VAR_0, (const BIGNUM *) VAR_1,
    (const BIGNUM *) VAR_2, VAR_5);
 FUNC_0(VAR_5);

 return VAR_4 ? 0 : -1;
}
