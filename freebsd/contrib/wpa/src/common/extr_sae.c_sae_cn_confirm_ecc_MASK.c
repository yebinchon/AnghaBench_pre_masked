
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sae_data {TYPE_1__* tmp; } ;
struct crypto_ec_point {int dummy; } ;
struct crypto_bignum {int dummy; } ;
struct TYPE_2__ {int prime_len; int ec; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct crypto_ec_point const*,int *,int *) ;
 int FUNC_1 (struct sae_data*,int const*,struct crypto_bignum const*,int *,int,struct crypto_bignum const*,int *,int,int *) ;

__attribute__((used)) static void FUNC_2(struct sae_data *VAR_1, const u8 *VAR_2,
          const struct crypto_bignum *VAR_3,
          const struct crypto_ec_point *VAR_4,
          const struct crypto_bignum *VAR_5,
          const struct crypto_ec_point *VAR_6,
          u8 *VAR_7)
{
 u8 VAR_8[2 * VAR_0];
 u8 VAR_9[2 * VAR_0];

 FUNC_0(VAR_1->tmp->ec, VAR_4, VAR_8,
          VAR_8 + VAR_1->tmp->prime_len);
 FUNC_0(VAR_1->tmp->ec, VAR_6, VAR_9,
          VAR_9 + VAR_1->tmp->prime_len);

 FUNC_1(VAR_1, VAR_2, VAR_3, VAR_8, 2 * VAR_1->tmp->prime_len,
         VAR_5, VAR_9, 2 * VAR_1->tmp->prime_len, VAR_7);
}
