
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sae_data {TYPE_1__* tmp; } ;
struct crypto_bignum {int dummy; } ;
struct TYPE_2__ {scalar_t__ own_commit_element_ecc; int ec; int pwe_ecc; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int ,struct crypto_bignum*,scalar_t__) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int FUNC_4(struct sae_data *VAR_1,
      struct crypto_bignum *VAR_2)
{

 if (!VAR_1->tmp->own_commit_element_ecc) {
  VAR_1->tmp->own_commit_element_ecc =
   FUNC_0(VAR_1->tmp->ec);
  if (!VAR_1->tmp->own_commit_element_ecc)
   return -1;
 }

 if (FUNC_2(VAR_1->tmp->ec, VAR_1->tmp->pwe_ecc, VAR_2,
    VAR_1->tmp->own_commit_element_ecc) < 0 ||
     FUNC_1(VAR_1->tmp->ec,
       VAR_1->tmp->own_commit_element_ecc) < 0) {
  FUNC_3(VAR_0, "SAE: Could not compute commit-element");
  return -1;
 }

 return 0;
}
