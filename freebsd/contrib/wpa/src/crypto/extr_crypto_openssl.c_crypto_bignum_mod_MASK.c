
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_bignum {int dummy; } ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int const*,int const*,int *) ;

int FUNC_3(const struct crypto_bignum *VAR_0,
        const struct crypto_bignum *VAR_1,
        struct crypto_bignum *VAR_2)
{
 int VAR_3;
 BN_CTX *VAR_4;

 VAR_4 = FUNC_1();
 if (VAR_4 == ((void*)0))
  return -1;
 VAR_3 = FUNC_2((BIGNUM *) VAR_2, (const BIGNUM *) VAR_0, (const BIGNUM *) VAR_1,
       VAR_4);
 FUNC_0(VAR_4);

 return VAR_3 ? 0 : -1;
}
