
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int const u8 ;
struct sae_data {TYPE_1__* tmp; int peer_commit_scalar; } ;
struct TYPE_2__ {int own_commit_element_ffc; int own_commit_scalar; int peer_commit_element_ffc; int own_commit_element_ecc; int peer_commit_element_ecc; scalar_t__ ec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int const*,int const*,int) ;
 int FUNC_2 (struct sae_data*,int const*,int ,int ,int ,int ,int const*) ;
 int FUNC_3 (struct sae_data*,int const*,int ,int ,int ,int ,int const*) ;
 int FUNC_4 (int ,char*,int const*,int) ;
 int FUNC_5 (int ,char*,...) ;

int FUNC_6(struct sae_data *VAR_2, const u8 *VAR_3, size_t VAR_4)
{
 u8 VAR_5[VAR_1];

 if (VAR_4 < 2 + VAR_1) {
  FUNC_5(VAR_0, "SAE: Too short confirm message");
  return -1;
 }

 FUNC_5(VAR_0, "SAE: peer-send-confirm %u", FUNC_0(VAR_3));

 if (!VAR_2->tmp || !VAR_2->peer_commit_scalar ||
     !VAR_2->tmp->own_commit_scalar) {
  FUNC_5(VAR_0, "SAE: Temporary data not yet available");
  return -1;
 }

 if (VAR_2->tmp->ec) {
  if (!VAR_2->tmp->peer_commit_element_ecc ||
      !VAR_2->tmp->own_commit_element_ecc)
   return -1;
  FUNC_2(VAR_2, VAR_3, VAR_2->peer_commit_scalar,
       VAR_2->tmp->peer_commit_element_ecc,
       VAR_2->tmp->own_commit_scalar,
       VAR_2->tmp->own_commit_element_ecc,
       VAR_5);
 } else {
  if (!VAR_2->tmp->peer_commit_element_ffc ||
      !VAR_2->tmp->own_commit_element_ffc)
   return -1;
  FUNC_3(VAR_2, VAR_3, VAR_2->peer_commit_scalar,
       VAR_2->tmp->peer_commit_element_ffc,
       VAR_2->tmp->own_commit_scalar,
       VAR_2->tmp->own_commit_element_ffc,
       VAR_5);
 }

 if (FUNC_1(VAR_5, VAR_3 + 2, VAR_1) != 0) {
  FUNC_5(VAR_0, "SAE: Confirm mismatch");
  FUNC_4(VAR_0, "SAE: Received confirm",
       VAR_3 + 2, VAR_1);
  FUNC_4(VAR_0, "SAE: Calculated verifier",
       VAR_5, VAR_1);
  return -1;
 }

 return 0;
}
