
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_ec {int dummy; } ;
typedef struct crypto_bignum const crypto_bignum ;


 int VAR_0 ;
 unsigned int FUNC_0 (int,int) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (unsigned int,int const*,int const*,size_t,int *) ;
 int FUNC_3 (unsigned int,int,int) ;
 int FUNC_4 (struct crypto_bignum const*,int) ;
 struct crypto_bignum const* FUNC_5 () ;
 struct crypto_bignum const* FUNC_6 (int *,size_t) ;
 int FUNC_7 (struct crypto_bignum const*) ;
 int FUNC_8 (struct crypto_bignum const*,struct crypto_bignum const*) ;
 scalar_t__ FUNC_9 (struct crypto_bignum const*,struct crypto_bignum const*,struct crypto_bignum const*,struct crypto_bignum const*) ;
 struct crypto_bignum const* FUNC_10 (struct crypto_ec*) ;
 size_t FUNC_11 (struct crypto_ec*) ;
 struct crypto_bignum const* FUNC_12 (struct crypto_bignum const*) ;

int FUNC_13(struct crypto_ec *VAR_1,
      const u8 *VAR_2, const u8 *VAR_3,
      const struct crypto_bignum *VAR_4)
{
 struct crypto_bignum *VAR_5, *VAR_6, *VAR_7 = ((void*)0);
 int VAR_8, VAR_9 = -1;
 u8 VAR_10[VAR_0];
 const struct crypto_bignum *VAR_11;
 size_t VAR_12;
 unsigned int VAR_13;

 VAR_11 = FUNC_10(VAR_1);
 VAR_12 = FUNC_11(VAR_1);
 VAR_5 = FUNC_12(VAR_11);
 if (!VAR_5)
  return -1;

 VAR_6 = FUNC_5();
 if (!VAR_6 ||
     FUNC_9(VAR_4, VAR_5, VAR_11, VAR_6) < 0 ||
     FUNC_9(VAR_6, VAR_5, VAR_11, VAR_6) < 0)
  goto fail;
 VAR_13 = FUNC_1(FUNC_7(VAR_5));
 FUNC_2(VAR_13, VAR_3, VAR_2, VAR_12, VAR_10);
 VAR_7 = FUNC_6(VAR_10, VAR_12);
 if (!VAR_7 ||
     FUNC_9(VAR_6, VAR_7, VAR_11, VAR_6) < 0)
  goto fail;

 VAR_8 = FUNC_3(VAR_13, -1, 1);


 VAR_9 = FUNC_8(VAR_6, VAR_11);
 if (VAR_9 == -2) {
  VAR_9 = -1;
  goto fail;
 }


 VAR_13 = FUNC_0(VAR_9, VAR_8);
 VAR_9 = FUNC_3(VAR_13, 1, 0);
fail:
 FUNC_4(VAR_6, 1);
 FUNC_4(VAR_5, 1);
 FUNC_4(VAR_7, 1);
 return VAR_9;
}
