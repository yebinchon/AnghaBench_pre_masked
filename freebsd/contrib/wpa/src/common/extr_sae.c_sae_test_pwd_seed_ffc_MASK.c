
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sae_data {TYPE_2__* tmp; } ;
struct crypto_bignum {int dummy; } ;
typedef int exp ;
struct TYPE_4__ {int prime_len; int prime; int order; TYPE_1__* dh; } ;
struct TYPE_3__ {scalar_t__ safe_prime; int prime; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int*,int ,int) ;
 int FUNC_3 (int,int,int ) ;
 int FUNC_4 (struct crypto_bignum*,int) ;
 scalar_t__ FUNC_5 (struct crypto_bignum*,int ,struct crypto_bignum*) ;
 int FUNC_6 (struct crypto_bignum*,struct crypto_bignum*,int ,struct crypto_bignum*) ;
 struct crypto_bignum* FUNC_7 (int*,int) ;
 int FUNC_8 (struct crypto_bignum*) ;
 int FUNC_9 (struct crypto_bignum*) ;
 scalar_t__ FUNC_10 (int ,struct crypto_bignum*,struct crypto_bignum*) ;
 scalar_t__ FUNC_11 (int const*,int,char*,int ,int,int*,size_t) ;
 int FUNC_12 (int ,char*,int const*,int) ;

__attribute__((used)) static int FUNC_13(struct sae_data *VAR_3, const u8 *VAR_4,
     struct crypto_bignum *VAR_5)
{
 u8 VAR_6[VAR_1];
 size_t VAR_7 = VAR_3->tmp->prime_len * 8;
 u8 VAR_8[1];
 struct crypto_bignum *VAR_9, *VAR_10 = ((void*)0);
 int VAR_11, VAR_12;
 u8 VAR_13;

 FUNC_12(VAR_0, "SAE: pwd-seed", VAR_4, VAR_2);


 if (FUNC_11(VAR_4, VAR_2, "SAE Hunting and Pecking",
       VAR_3->tmp->dh->prime, VAR_3->tmp->prime_len, VAR_6,
       VAR_7) < 0)
  return -1;
 FUNC_12(VAR_0, "SAE: pwd-value", VAR_6,
   VAR_3->tmp->prime_len);


 VAR_11 = FUNC_2(VAR_6, VAR_3->tmp->dh->prime,
    VAR_3->tmp->prime_len);



 VAR_13 = FUNC_0(VAR_11);




 VAR_6[0] = FUNC_3(VAR_13, VAR_6[0], 0);



 VAR_11 = -1;
 VAR_9 = FUNC_7(VAR_6, VAR_3->tmp->prime_len);
 if (!VAR_9)
  goto fail;




 if (VAR_3->tmp->dh->safe_prime) {




  VAR_8[0] = 2;
  VAR_10 = FUNC_7(VAR_8, sizeof(VAR_8));
 } else {

  VAR_8[0] = 1;
  VAR_10 = FUNC_7(VAR_8, sizeof(VAR_8));
  if (VAR_10 == ((void*)0) ||
      FUNC_10(VAR_3->tmp->prime, VAR_10, VAR_10) < 0 ||
      FUNC_5(VAR_10, VAR_3->tmp->order, VAR_10) < 0)
   goto fail;
 }

 if (!VAR_10)
  goto fail;

 VAR_11 = FUNC_6(VAR_9, VAR_10, VAR_3->tmp->prime, VAR_5);
 if (VAR_11 < 0)
  goto fail;
 VAR_11 = FUNC_3(VAR_13, 1, 0);
 VAR_12 = FUNC_9(VAR_5);
 VAR_11 = FUNC_3(FUNC_1(VAR_12), VAR_11, 0);
 VAR_12 = FUNC_8(VAR_5);
 VAR_11 = FUNC_3(FUNC_1(VAR_12), VAR_11, 0);

fail:
 FUNC_4(VAR_9, 1);
 FUNC_4(VAR_10, 1);
 return VAR_11;
}
