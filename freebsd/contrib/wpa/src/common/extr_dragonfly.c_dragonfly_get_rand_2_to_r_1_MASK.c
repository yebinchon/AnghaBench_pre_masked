
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_bignum {int dummy; } ;


 int FUNC_0 (struct crypto_bignum*) ;
 int FUNC_1 (struct crypto_bignum*) ;
 scalar_t__ FUNC_2 (struct crypto_bignum*,struct crypto_bignum const*) ;

__attribute__((used)) static int FUNC_3(struct crypto_bignum *VAR_0,
           const struct crypto_bignum *VAR_1)
{
 return FUNC_2(VAR_0, VAR_1) == 0 &&
  !FUNC_1(VAR_0) &&
  !FUNC_0(VAR_0);
}
