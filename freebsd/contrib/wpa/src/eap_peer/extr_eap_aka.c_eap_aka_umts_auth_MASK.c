
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eap_sm {int scard_ctx; scalar_t__ external_sim; } ;
struct eap_peer_config {int password_len; scalar_t__ password; scalar_t__ pcsc; scalar_t__ external_sim_resp; } ;
struct eap_aka_data {int res_len; int autn; int * ck; int * ik; int * res; int auts; int rand; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct eap_sm*,struct eap_aka_data*) ;
 int FUNC_1 (struct eap_sm*,struct eap_aka_data*,struct eap_peer_config*) ;
 struct eap_peer_config* FUNC_2 (struct eap_sm*) ;
 scalar_t__ FUNC_3 (char const*,int *,int) ;
 int FUNC_4 (int *,int *,int *,int ,int ,int *,int *,int *,int*,int ) ;
 scalar_t__ FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int *,char,int) ;
 int FUNC_7 (int ,int ,int ,int *,int*,int *,int *,int ) ;
 int FUNC_8 (int ,char*) ;

__attribute__((used)) static int FUNC_9(struct eap_sm *VAR_6, struct eap_aka_data *VAR_7)
{
 struct eap_peer_config *VAR_8;

 FUNC_8(VAR_4, "EAP-AKA: UMTS authentication algorithm");

 VAR_8 = FUNC_2(VAR_6);
 if (VAR_8 == ((void*)0))
  return -1;

 if (VAR_6->external_sim) {
  if (VAR_8->external_sim_resp)
   return FUNC_1(VAR_6, VAR_7, VAR_8);
  else
   return FUNC_0(VAR_6, VAR_7);
 }

 if (VAR_8->pcsc) {
  return FUNC_7(VAR_6->scard_ctx, VAR_7->rand,
           VAR_7->autn, VAR_7->res, &VAR_7->res_len,
           VAR_7->ik, VAR_7->ck, VAR_7->auts);
 }
 FUNC_8(VAR_4, "EAP-AKA: No UMTS authentication algorithm "
     "enabled");
 return -1;


}
