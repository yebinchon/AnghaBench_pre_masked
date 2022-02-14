
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sae_data {TYPE_1__* tmp; } ;
struct crypto_bignum {int dummy; } ;
typedef int scalar_b2 ;
typedef int scalar_b1 ;
struct TYPE_2__ {size_t prime_len; int kck; } ;


 int VAR_0 ;
 int FUNC_0 (struct crypto_bignum const*,int *,int,size_t) ;
 int FUNC_1 (int ,int,int,int const**,size_t*,int *) ;

__attribute__((used)) static void FUNC_2(struct sae_data *VAR_1, const u8 *VAR_2,
      const struct crypto_bignum *VAR_3,
      const u8 *VAR_4, size_t VAR_5,
      const struct crypto_bignum *VAR_6,
      const u8 *VAR_7, size_t VAR_8,
      u8 *VAR_9)
{
 const u8 *VAR_10[5];
 size_t VAR_11[5];
 u8 VAR_12[VAR_0], VAR_13[VAR_0];
 VAR_10[0] = VAR_2;
 VAR_11[0] = 2;
 FUNC_0(VAR_3, VAR_12, sizeof(VAR_12),
        VAR_1->tmp->prime_len);
 VAR_10[1] = VAR_12;
 VAR_11[1] = VAR_1->tmp->prime_len;
 VAR_10[2] = VAR_4;
 VAR_11[2] = VAR_5;
 FUNC_0(VAR_6, VAR_13, sizeof(VAR_13),
        VAR_1->tmp->prime_len);
 VAR_10[3] = VAR_13;
 VAR_11[3] = VAR_1->tmp->prime_len;
 VAR_10[4] = VAR_7;
 VAR_11[4] = VAR_8;
 FUNC_1(VAR_1->tmp->kck, sizeof(VAR_1->tmp->kck), 5, VAR_10, VAR_11,
      VAR_9);
}
