
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sae_data {TYPE_1__* tmp; int peer_commit_scalar; } ;
struct crypto_ec_point {int dummy; } ;
struct TYPE_2__ {int prime_len; int ec; int sae_rand; int peer_commit_element_ecc; struct crypto_ec_point* pwe_ecc; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,struct crypto_ec_point*,int ,struct crypto_ec_point*) ;
 int FUNC_1 (struct crypto_ec_point*,int) ;
 struct crypto_ec_point* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,struct crypto_ec_point*) ;
 scalar_t__ FUNC_4 (int ,struct crypto_ec_point*,int ,struct crypto_ec_point*) ;
 scalar_t__ FUNC_5 (int ,struct crypto_ec_point*,int *,int *) ;
 int FUNC_6 (int ,char*,int *,int ) ;
 int FUNC_7 (int ,char*) ;

__attribute__((used)) static int FUNC_8(struct sae_data *VAR_1, u8 *VAR_2)
{
 struct crypto_ec_point *VAR_3;
 int VAR_4 = -1;

 VAR_3 = FUNC_2(VAR_1->tmp->ec);
 if (VAR_3 == ((void*)0))
  goto fail;
 if (FUNC_4(VAR_1->tmp->ec, VAR_1->tmp->pwe_ecc,
    VAR_1->peer_commit_scalar, VAR_3) < 0 ||
     FUNC_0(VAR_1->tmp->ec, VAR_3,
    VAR_1->tmp->peer_commit_element_ecc, VAR_3) < 0 ||
     FUNC_4(VAR_1->tmp->ec, VAR_3, VAR_1->tmp->sae_rand, VAR_3) < 0 ||
     FUNC_3(VAR_1->tmp->ec, VAR_3) ||
     FUNC_5(VAR_1->tmp->ec, VAR_3, VAR_2, ((void*)0)) < 0) {
  FUNC_7(VAR_0, "SAE: Failed to calculate K and k");
  goto fail;
 }

 FUNC_6(VAR_0, "SAE: k", VAR_2, VAR_1->tmp->prime_len);

 VAR_4 = 0;
fail:
 FUNC_1(VAR_3, 1);
 return VAR_4;
}
