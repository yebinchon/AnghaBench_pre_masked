
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ver_list ;
typedef char u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {char* identity; size_t identity_len; char* imsi; int method_pending; int eap_sim_db_priv; } ;
struct eap_sim_data {scalar_t__ start_round; char* permanent; char* mk; int num_chal; char* nonce_mt; int notification; int emsk; int msk; int k_aut; int k_encr; scalar_t__ kc; scalar_t__ sres; scalar_t__ rand; TYPE_1__* reauth; scalar_t__ counter; } ;
struct eap_sim_attrs {size_t identity_len; int selected_version; int * nonce_mt; int * identity; } ;
struct TYPE_2__ {char* permanent; int * mk; scalar_t__ counter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 char VAR_6 ;
 char VAR_7 ;
 char VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,char*,int ,char*,char*,char*,struct eap_sm*) ;
 char* FUNC_2 (int ,char*) ;
 TYPE_1__* FUNC_3 (int ,char*) ;
 int FUNC_4 (char*,int ,int ,int ,int ) ;
 int FUNC_5 (char*,size_t,int *,int ,char*,int,int,char const*,char*) ;
 int FUNC_6 (struct eap_sim_data*,int ) ;
 int FUNC_7 (struct eap_sim_data*,int ) ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (size_t) ;
 int FUNC_10 (char*,int *,size_t) ;
 int FUNC_11 (char*,char const*,int) ;
 char* FUNC_12 (char*,size_t) ;
 int FUNC_13 (int ,char*,char*,size_t) ;
 int FUNC_14 (int ,char*,...) ;

__attribute__((used)) static void FUNC_15(struct eap_sm *VAR_15,
      struct eap_sim_data *VAR_16,
      struct wpabuf *VAR_17,
      struct eap_sim_attrs *VAR_18)
{
 size_t VAR_19;
 u8 VAR_20[2];
 u8 *VAR_21;
 char *VAR_22;

 FUNC_14(VAR_11, "EAP-SIM: Receive start response");

 if (VAR_16->start_round == 0) {




  goto skip_id_update;
 }





 if (!VAR_18->identity || VAR_18->identity_len == 0) {
  FUNC_14(VAR_11, "EAP-SIM: Peer did not provide any "
      "identity");
  goto failed;
 }

 VAR_21 = FUNC_9(VAR_18->identity_len);
 if (VAR_21 == ((void*)0))
  goto failed;
 FUNC_8(VAR_15->identity);
 VAR_15->identity = VAR_21;
 FUNC_10(VAR_15->identity, VAR_18->identity, VAR_18->identity_len);
 VAR_15->identity_len = VAR_18->identity_len;

 FUNC_13(VAR_11, "EAP-SIM: Identity",
     VAR_15->identity, VAR_15->identity_len);
 VAR_22 = FUNC_12(VAR_15->identity, VAR_15->identity_len);
 if (VAR_22 == ((void*)0))
  goto failed;

 if (VAR_22[0] == VAR_8) {
  FUNC_14(VAR_11, "EAP-SIM: Reauth username '%s'",
      VAR_22);
  VAR_16->reauth = FUNC_3(
   VAR_15->eap_sim_db_priv, VAR_22);
  FUNC_8(VAR_22);
  if (VAR_16->reauth == ((void*)0)) {
   FUNC_14(VAR_11, "EAP-SIM: Unknown reauth "
       "identity - request full auth identity");

   return;
  }
  FUNC_14(VAR_11, "EAP-SIM: Using fast re-authentication");
  FUNC_11(VAR_16->permanent, VAR_16->reauth->permanent,
      sizeof(VAR_16->permanent));
  VAR_16->counter = VAR_16->reauth->counter;
  FUNC_10(VAR_16->mk, VAR_16->reauth->mk, VAR_4);
  FUNC_6(VAR_16, VAR_14);
  return;
 }

 if (VAR_22[0] == VAR_7) {
  const char *VAR_23;
  FUNC_14(VAR_11, "EAP-SIM: Pseudonym username '%s'",
      VAR_22);
  VAR_23 = FUNC_2(
   VAR_15->eap_sim_db_priv, VAR_22);
  FUNC_8(VAR_22);
  if (VAR_23 == ((void*)0)) {
   FUNC_14(VAR_11, "EAP-SIM: Unknown pseudonym "
       "identity - request permanent identity");

   return;
  }
  FUNC_11(VAR_16->permanent, VAR_23,
      sizeof(VAR_16->permanent));
 } else if (VAR_22[0] == VAR_6) {
  FUNC_14(VAR_11, "EAP-SIM: Permanent username '%s'",
      VAR_22);
  FUNC_11(VAR_16->permanent, VAR_22, sizeof(VAR_16->permanent));
  FUNC_8(VAR_22);
 } else {
  FUNC_14(VAR_11, "EAP-SIM: Unrecognized username '%s'",
      VAR_22);
  FUNC_8(VAR_22);
  goto failed;
 }

skip_id_update:


 if (VAR_18->nonce_mt == ((void*)0) || VAR_18->selected_version < 0) {
  FUNC_14(VAR_11, "EAP-SIM: Start/Response missing "
      "required attributes");
  goto failed;
 }

 if (!FUNC_7(VAR_16, VAR_18->selected_version)) {
  FUNC_14(VAR_11, "EAP-SIM: Peer selected unsupported "
      "version %d", VAR_18->selected_version);
  goto failed;
 }

 VAR_16->counter = 0;
 VAR_16->reauth = ((void*)0);

 VAR_16->num_chal = FUNC_1(
  VAR_15->eap_sim_db_priv, VAR_16->permanent, VAR_3,
  (u8 *) VAR_16->rand, (u8 *) VAR_16->kc, (u8 *) VAR_16->sres, VAR_15);
 if (VAR_16->num_chal == VAR_1) {
  FUNC_14(VAR_11, "EAP-SIM: GSM authentication triplets "
      "not yet available - pending request");
  VAR_15->method_pending = VAR_10;
  return;
 }
 if (VAR_16->num_chal < 2) {
  FUNC_14(VAR_12, "EAP-SIM: Failed to get GSM "
      "authentication triplets for the peer");
  goto failed;
 }

 if (VAR_16->permanent[0] == VAR_6)
  FUNC_11(VAR_15->imsi, &VAR_16->permanent[1], sizeof(VAR_15->imsi));

 VAR_19 = VAR_15->identity_len;
 while (VAR_19 > 0 && VAR_15->identity[VAR_19 - 1] == '\0') {
  FUNC_14(VAR_11, "EAP-SIM: Workaround - drop last null "
      "character from identity");
  VAR_19--;
 }
 FUNC_13(VAR_11, "EAP-SIM: Identity for MK derivation",
     VAR_15->identity, VAR_19);

 FUNC_10(VAR_16->nonce_mt, VAR_18->nonce_mt, VAR_5);
 FUNC_0(VAR_20, VAR_9);
 FUNC_5(VAR_15->identity, VAR_19, VAR_18->nonce_mt,
     VAR_18->selected_version, VAR_20, sizeof(VAR_20),
     VAR_16->num_chal, (const u8 *) VAR_16->kc, VAR_16->mk);
 FUNC_4(VAR_16->mk, VAR_16->k_encr, VAR_16->k_aut, VAR_16->msk,
       VAR_16->emsk);

 FUNC_6(VAR_16, VAR_0);
 return;

failed:
 VAR_16->notification = VAR_2;
 FUNC_6(VAR_16, VAR_13);
}
