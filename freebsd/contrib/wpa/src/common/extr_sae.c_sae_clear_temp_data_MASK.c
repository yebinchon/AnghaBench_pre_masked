
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sae_temporary_data {int pw_id; int anti_clogging_token; int peer_commit_element_ecc; int own_commit_element_ecc; int pwe_ecc; int peer_commit_element_ffc; int own_commit_element_ffc; int own_commit_scalar; int pwe_ffc; int sae_rand; int order_buf; int prime_buf; int ec; } ;
struct sae_data {struct sae_temporary_data* tmp; } ;


 int FUNC_0 (struct sae_temporary_data*,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

void FUNC_6(struct sae_data *VAR_0)
{
 struct sae_temporary_data *VAR_1;
 if (VAR_0 == ((void*)0) || VAR_0->tmp == ((void*)0))
  return;
 VAR_1 = VAR_0->tmp;
 FUNC_2(VAR_1->ec);
 FUNC_1(VAR_1->prime_buf, 0);
 FUNC_1(VAR_1->order_buf, 0);
 FUNC_1(VAR_1->sae_rand, 1);
 FUNC_1(VAR_1->pwe_ffc, 1);
 FUNC_1(VAR_1->own_commit_scalar, 0);
 FUNC_1(VAR_1->own_commit_element_ffc, 0);
 FUNC_1(VAR_1->peer_commit_element_ffc, 0);
 FUNC_3(VAR_1->pwe_ecc, 1);
 FUNC_3(VAR_1->own_commit_element_ecc, 0);
 FUNC_3(VAR_1->peer_commit_element_ecc, 0);
 FUNC_5(VAR_1->anti_clogging_token);
 FUNC_4(VAR_1->pw_id);
 FUNC_0(VAR_1, sizeof(*VAR_1));
 VAR_0->tmp = ((void*)0);
}
