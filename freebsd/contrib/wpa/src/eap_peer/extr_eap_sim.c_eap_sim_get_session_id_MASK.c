
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eap_sm {int dummy; } ;
struct eap_sim_data {scalar_t__ state; int num_chal; int reauth_mac; int nonce_s; int nonce_mt; int rand; int reauth; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int * FUNC_0 (size_t) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int ,char*,int *,size_t) ;

__attribute__((used)) static u8 * FUNC_3(struct eap_sm *VAR_7, void *VAR_8, size_t *VAR_9)
{
 struct eap_sim_data *VAR_10 = VAR_8;
 u8 *VAR_11;

 if (VAR_10->state != VAR_6)
  return ((void*)0);

 if (!VAR_10->reauth)
  *VAR_9 = 1 + VAR_10->num_chal * VAR_4 + VAR_1;
 else
  *VAR_9 = 1 + VAR_2 + VAR_0;
 VAR_11 = FUNC_0(*VAR_9);
 if (VAR_11 == ((void*)0))
  return ((void*)0);

 VAR_11[0] = VAR_3;
 if (!VAR_10->reauth) {
  FUNC_1(VAR_11 + 1, VAR_10->rand, VAR_10->num_chal * VAR_4);
  FUNC_1(VAR_11 + 1 + VAR_10->num_chal * VAR_4,
     VAR_10->nonce_mt, VAR_1);
 } else {
  FUNC_1(VAR_11 + 1, VAR_10->nonce_s, VAR_2);
  FUNC_1(VAR_11 + 1 + VAR_2, VAR_10->reauth_mac,
     VAR_0);
 }
 FUNC_2(VAR_5, "EAP-SIM: Derived Session-Id", VAR_11, *VAR_9);

 return VAR_11;
}
