
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_bignum {int dummy; } ;


 scalar_t__ FUNC_0 (struct crypto_bignum*,struct crypto_bignum const*) ;
 int FUNC_1 (struct crypto_bignum*,int ) ;
 struct crypto_bignum* FUNC_2 (int const*,size_t) ;
 scalar_t__ FUNC_3 (struct crypto_bignum*) ;

__attribute__((used)) static int FUNC_4(const struct crypto_bignum *VAR_0,
        const u8 *VAR_1, size_t VAR_2)
{
 struct crypto_bignum *VAR_3;
 int VAR_4 = 1;

 VAR_3 = FUNC_2(VAR_1, VAR_2);
 if (!VAR_3 || FUNC_3(VAR_3) ||
     FUNC_0(VAR_3, VAR_0) >= 0)
  VAR_4 = 0;
 FUNC_1(VAR_3, 0);
 return VAR_4;
}
