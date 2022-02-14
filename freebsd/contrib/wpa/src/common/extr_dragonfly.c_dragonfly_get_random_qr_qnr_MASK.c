
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_bignum {int dummy; } ;


 int FUNC_0 (struct crypto_bignum*,int ) ;
 struct crypto_bignum* FUNC_1 () ;
 int FUNC_2 (struct crypto_bignum*,struct crypto_bignum const*) ;
 scalar_t__ FUNC_3 (struct crypto_bignum*,struct crypto_bignum const*) ;

int FUNC_4(const struct crypto_bignum *VAR_0,
    struct crypto_bignum **VAR_1,
    struct crypto_bignum **VAR_2)
{
 *VAR_1 = *VAR_2 = ((void*)0);

 while (!(*VAR_1) || !(*VAR_2)) {
  struct crypto_bignum *VAR_3;
  int VAR_4;

  VAR_3 = FUNC_1();
  if (!VAR_3 || FUNC_3(VAR_3, VAR_0) < 0) {
   FUNC_0(VAR_3, 0);
   break;
  }

  VAR_4 = FUNC_2(VAR_3, VAR_0);
  if (VAR_4 == 1 && !(*VAR_1))
   *VAR_1 = VAR_3;
  else if (VAR_4 == -1 && !(*VAR_2))
   *VAR_2 = VAR_3;
  else
   FUNC_0(VAR_3, 0);
 }

 if (*VAR_1 && *VAR_2)
  return 0;
 FUNC_0(*VAR_1, 0);
 FUNC_0(*VAR_2, 0);
 *VAR_1 = *VAR_2 = ((void*)0);
 return -1;
}
