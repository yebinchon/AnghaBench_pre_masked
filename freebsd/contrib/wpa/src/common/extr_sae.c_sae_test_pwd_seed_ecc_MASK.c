
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int const u8 ;
struct sae_data {TYPE_1__* tmp; } ;
struct crypto_bignum {int dummy; } ;
struct TYPE_2__ {int ec; int prime_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*,int ,int) ;
 unsigned int FUNC_1 (unsigned int) ;
 int FUNC_2 (int const*,int const*,int ) ;
 int FUNC_3 (unsigned int,int,int ) ;
 int FUNC_4 (struct crypto_bignum*,int) ;
 struct crypto_bignum* FUNC_5 (int const*,int ) ;
 struct crypto_bignum* FUNC_6 (int ,struct crypto_bignum*) ;
 size_t FUNC_7 (int ) ;
 int FUNC_8 (int ,int const*,int const*,struct crypto_bignum*) ;
 scalar_t__ FUNC_9 (int const*,int ,char*,int const*,int ,int const*,size_t) ;
 int FUNC_10 (int ,char*,int const*,int ) ;

__attribute__((used)) static int FUNC_11(struct sae_data *VAR_2, const u8 *VAR_3,
     const u8 *VAR_4, const u8 *VAR_5, const u8 *VAR_6,
     u8 *VAR_7)
{
 struct crypto_bignum *VAR_8, *VAR_9;
 int VAR_10;
 size_t VAR_11;
 int VAR_12;
 unsigned int VAR_13;

 FUNC_10(VAR_0, "SAE: pwd-seed", VAR_3, VAR_1);


 VAR_11 = FUNC_7(VAR_2->tmp->ec);
 if (FUNC_9(VAR_3, VAR_1, "SAE Hunting and Pecking",
       VAR_4, VAR_2->tmp->prime_len, VAR_7, VAR_11) < 0)
  return -1;
 if (VAR_11 % 8)
  FUNC_0(VAR_7, VAR_2->tmp->prime_len, 8 - VAR_11 % 8);
 FUNC_10(VAR_0, "SAE: pwd-value",
   VAR_7, VAR_2->tmp->prime_len);

 VAR_12 = FUNC_2(VAR_7, VAR_4, VAR_2->tmp->prime_len);


 VAR_13 = FUNC_1((unsigned int) VAR_12);




 VAR_9 = FUNC_5(VAR_7, VAR_2->tmp->prime_len);
 if (!VAR_9)
  return -1;
 VAR_8 = FUNC_6(VAR_2->tmp->ec, VAR_9);
 FUNC_4(VAR_9, 1);
 if (!VAR_8)
  return -1;

 VAR_10 = FUNC_8(VAR_2->tmp->ec, VAR_5, VAR_6,
         VAR_8);
 FUNC_4(VAR_8, 1);
 if (VAR_10 < 0)
  return VAR_10;
 return FUNC_3(VAR_13, VAR_10, 0);
}
