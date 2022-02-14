
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sae_data {TYPE_1__* tmp; int peer_commit_scalar; } ;
struct crypto_bignum {int dummy; } ;
struct TYPE_2__ {int prime_len; int prime; int sae_rand; int peer_commit_element_ffc; struct crypto_bignum* pwe_ffc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct crypto_bignum*,int) ;
 scalar_t__ FUNC_1 (struct crypto_bignum*,int ,int ,struct crypto_bignum*) ;
 struct crypto_bignum* FUNC_2 () ;
 scalar_t__ FUNC_3 (struct crypto_bignum*) ;
 scalar_t__ FUNC_4 (struct crypto_bignum*,int ,int ,struct crypto_bignum*) ;
 scalar_t__ FUNC_5 (struct crypto_bignum*,int *,int ,int ) ;
 int FUNC_6 (int ,char*,int *,int ) ;
 int FUNC_7 (int ,char*) ;

__attribute__((used)) static int FUNC_8(struct sae_data *VAR_2, u8 *VAR_3)
{
 struct crypto_bignum *VAR_4;
 int VAR_5 = -1;

 VAR_4 = FUNC_2();
 if (VAR_4 == ((void*)0))
  goto fail;
 if (FUNC_1(VAR_2->tmp->pwe_ffc, VAR_2->peer_commit_scalar,
      VAR_2->tmp->prime, VAR_4) < 0 ||
     FUNC_4(VAR_4, VAR_2->tmp->peer_commit_element_ffc,
     VAR_2->tmp->prime, VAR_4) < 0 ||
     FUNC_1(VAR_4, VAR_2->tmp->sae_rand, VAR_2->tmp->prime, VAR_4) < 0
     ||
     FUNC_3(VAR_4) ||
     FUNC_5(VAR_4, VAR_3, VAR_1, VAR_2->tmp->prime_len) <
     0) {
  FUNC_7(VAR_0, "SAE: Failed to calculate K and k");
  goto fail;
 }

 FUNC_6(VAR_0, "SAE: k", VAR_3, VAR_2->tmp->prime_len);

 VAR_5 = 0;
fail:
 FUNC_0(VAR_4, 1);
 return VAR_5;
}
