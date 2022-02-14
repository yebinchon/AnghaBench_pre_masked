
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_bignum {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct crypto_bignum*,struct crypto_bignum*,struct crypto_bignum*) ;
 int FUNC_1 (struct crypto_bignum*) ;
 int FUNC_2 (struct crypto_bignum*) ;
 scalar_t__ FUNC_3 (struct crypto_bignum*,struct crypto_bignum const*,struct crypto_bignum*) ;
 scalar_t__ FUNC_4 (struct crypto_bignum*,struct crypto_bignum const*) ;
 int FUNC_5 (int ,char*) ;

int FUNC_6(const struct crypto_bignum *VAR_1,
         struct crypto_bignum *VAR_2,
         struct crypto_bignum *VAR_3,
         struct crypto_bignum *VAR_4)
{
 int VAR_5;



 for (VAR_5 = 0; VAR_5 < 100; VAR_5++) {
  if (FUNC_4(VAR_2, VAR_1) &&
      FUNC_4(VAR_3, VAR_1) &&
      FUNC_0(VAR_2, VAR_3, VAR_4) == 0 &&
      FUNC_3(VAR_4, VAR_1, VAR_4) == 0 &&
      !FUNC_2(VAR_4) &&
      !FUNC_1(VAR_4))
   return 0;
 }



 FUNC_5(VAR_0,
     "dragonfly: Unable to get randomness for own scalar");
 return -1;
}
