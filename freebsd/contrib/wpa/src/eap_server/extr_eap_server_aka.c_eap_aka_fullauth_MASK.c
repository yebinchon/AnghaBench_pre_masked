
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_sm {scalar_t__ method_pending; size_t identity_len; char* identity; int imsi; int eap_sim_db_priv; } ;
struct eap_aka_data {scalar_t__* permanent; scalar_t__ eap_method; int emsk; int msk; int k_aut; int k_encr; int mk; int ck; int ik; int k_re; int notification; scalar_t__ counter; int * reauth; int network_name_len; int network_name; int autn; int res_len; int res; int rand; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (char*,size_t,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;
 int FUNC_2 (char*,size_t,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (struct eap_aka_data*,int ) ;
 int FUNC_4 (int ,scalar_t__*,int ,int ,int ,int ,int ,int *,struct eap_sm*) ;
 int FUNC_5 (int ,int ,int ,int ,int ) ;
 int FUNC_6 (int ,scalar_t__*,int) ;
 int FUNC_7 (int ,char*,char*,size_t) ;
 int FUNC_8 (int ,char*) ;

__attribute__((used)) static void FUNC_9(struct eap_sm *VAR_11, struct eap_aka_data *VAR_12)
{
 size_t VAR_13;
 int VAR_14;

 VAR_14 = FUNC_4(VAR_11->eap_sim_db_priv, VAR_12->permanent,
          VAR_12->rand, VAR_12->autn, VAR_12->ik,
          VAR_12->ck, VAR_12->res, &VAR_12->res_len, VAR_11);
 if (VAR_14 == VAR_3) {
  FUNC_8(VAR_8, "EAP-AKA: AKA authentication data "
      "not yet available - pending request");
  VAR_11->method_pending = VAR_7;
  return;
 }

 if (VAR_12->permanent[0] == VAR_1 ||
     VAR_12->permanent[0] == VAR_2)
  FUNC_6(VAR_11->imsi, &VAR_12->permanent[1], sizeof(VAR_11->imsi));
 VAR_12->reauth = ((void*)0);
 VAR_12->counter = 0;

 if (VAR_14 != 0) {
  FUNC_8(VAR_9, "EAP-AKA: Failed to get AKA "
      "authentication data for the peer");
  VAR_12->notification = VAR_4;
  FUNC_3(VAR_12, VAR_10);
  return;
 }
 if (VAR_11->method_pending == VAR_7) {
  FUNC_8(VAR_8, "EAP-AKA: AKA authentication data "
      "available - abort pending wait");
  VAR_11->method_pending = VAR_6;
 }

 VAR_13 = VAR_11->identity_len;
 while (VAR_13 > 0 && VAR_11->identity[VAR_13 - 1] == '\0') {
  FUNC_8(VAR_8, "EAP-AKA: Workaround - drop last null "
      "character from identity");
  VAR_13--;
 }
 FUNC_7(VAR_8, "EAP-AKA: Identity for MK derivation",
     VAR_11->identity, VAR_13);

 if (VAR_12->eap_method == VAR_5) {
  FUNC_2(VAR_11->identity, VAR_13, VAR_12->ik,
       VAR_12->ck, VAR_12->k_encr, VAR_12->k_aut,
       VAR_12->k_re, VAR_12->msk, VAR_12->emsk);
 } else {
  FUNC_0(VAR_11->identity, VAR_13, VAR_12->ik,
      VAR_12->ck, VAR_12->mk);
  FUNC_5(VAR_12->mk, VAR_12->k_encr, VAR_12->k_aut,
        VAR_12->msk, VAR_12->emsk);
 }

 FUNC_3(VAR_12, VAR_0);
}
