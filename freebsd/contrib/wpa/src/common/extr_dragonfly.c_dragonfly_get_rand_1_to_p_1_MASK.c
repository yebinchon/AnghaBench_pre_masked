
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_bignum {int dummy; } ;


 scalar_t__ FUNC_0 (struct crypto_bignum*,struct crypto_bignum*,struct crypto_bignum*) ;
 int FUNC_1 (struct crypto_bignum*,int ) ;
 struct crypto_bignum* FUNC_2 () ;
 struct crypto_bignum* FUNC_3 (int const*,int) ;
 scalar_t__ FUNC_4 (struct crypto_bignum*,struct crypto_bignum*) ;
 scalar_t__ FUNC_5 (struct crypto_bignum const*,struct crypto_bignum*,struct crypto_bignum*) ;

__attribute__((used)) static struct crypto_bignum *
FUNC_6(const struct crypto_bignum *VAR_0)
{
 struct crypto_bignum *VAR_1, *VAR_2, *VAR_3;

 VAR_1 = FUNC_2();
 VAR_2 = FUNC_2();
 VAR_3 = FUNC_3((const u8 *) "\x01", 1);
 if (!VAR_1 || !VAR_2 || !VAR_3 ||
     FUNC_5(VAR_0, VAR_3, VAR_2) < 0 ||
     FUNC_4(VAR_1, VAR_2) < 0 ||
     FUNC_0(VAR_1, VAR_3, VAR_1) < 0) {
  FUNC_1(VAR_1, 0);
  VAR_1 = ((void*)0);
 }

 FUNC_1(VAR_2, 0);
 FUNC_1(VAR_3, 0);
 return VAR_1;
}
