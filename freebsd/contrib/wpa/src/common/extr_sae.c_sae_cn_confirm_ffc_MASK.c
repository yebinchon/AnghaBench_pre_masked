
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sae_data {TYPE_1__* tmp; } ;
struct crypto_bignum {int dummy; } ;
typedef int element_b2 ;
typedef int element_b1 ;
struct TYPE_2__ {int prime_len; } ;


 int VAR_0 ;
 int FUNC_0 (struct crypto_bignum const*,int *,int,int ) ;
 int FUNC_1 (struct sae_data*,int const*,struct crypto_bignum const*,int *,int ,struct crypto_bignum const*,int *,int ,int *) ;

__attribute__((used)) static void FUNC_2(struct sae_data *VAR_1, const u8 *VAR_2,
          const struct crypto_bignum *VAR_3,
          const struct crypto_bignum *VAR_4,
          const struct crypto_bignum *VAR_5,
          const struct crypto_bignum *VAR_6,
          u8 *VAR_7)
{
 u8 VAR_8[VAR_0];
 u8 VAR_9[VAR_0];

 FUNC_0(VAR_4, VAR_8, sizeof(VAR_8),
        VAR_1->tmp->prime_len);
 FUNC_0(VAR_6, VAR_9, sizeof(VAR_9),
        VAR_1->tmp->prime_len);

 FUNC_1(VAR_1, VAR_2, VAR_3, VAR_8, VAR_1->tmp->prime_len,
         VAR_5, VAR_9, VAR_1->tmp->prime_len, VAR_7);
}
