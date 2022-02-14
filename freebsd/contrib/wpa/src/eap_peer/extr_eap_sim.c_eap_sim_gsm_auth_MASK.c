
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eap_sm {int scard_ctx; scalar_t__ external_sim; } ;
struct eap_sim_data {int** rand; int num_chal; int * sres; int * kc; } ;
struct eap_peer_config {int password_len; scalar_t__ password; scalar_t__ pcsc; scalar_t__ external_sim_resp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct eap_peer_config* FUNC_0 (struct eap_sm*) ;
 int FUNC_1 (struct eap_sm*,struct eap_sim_data*) ;
 int FUNC_2 (struct eap_sm*,struct eap_sim_data*,struct eap_peer_config*) ;
 scalar_t__ FUNC_3 (int *,int *,int*,int ,int ) ;
 scalar_t__ FUNC_4 (char const*,int *,int) ;
 int FUNC_5 (int ,char*,int ) ;
 scalar_t__ FUNC_6 (int ,int*,int ,int ) ;
 int FUNC_7 (int ,char*,int*,int ) ;
 int FUNC_8 (int ,char*,int ,int ) ;
 int FUNC_9 (int ,char*) ;

__attribute__((used)) static int FUNC_10(struct eap_sm *VAR_4, struct eap_sim_data *VAR_5)
{
 struct eap_peer_config *VAR_6;

 FUNC_9(VAR_3, "EAP-SIM: GSM authentication algorithm");

 VAR_6 = FUNC_0(VAR_4);
 if (VAR_6 == ((void*)0))
  return -1;

 if (VAR_4->external_sim) {
  if (VAR_6->external_sim_resp)
   return FUNC_2(VAR_4, VAR_5, VAR_6);
  else
   return FUNC_1(VAR_4, VAR_5);
 }
 FUNC_9(VAR_3, "EAP-SIM: No GSM authentication algorithm "
     "enabled");
 return -1;


}
