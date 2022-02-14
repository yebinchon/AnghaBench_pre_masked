
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u8 ;
typedef scalar_t__ u16 ;
struct eap_sm {int eap_sim_id; int eap_sim_db_priv; } ;
struct eap_sim_msg {int dummy; } ;
struct eap_sim_data {scalar_t__ counter; int k_encr; int * next_reauth_id; int * next_pseudonym; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int * FUNC_0 (int ,int ) ;
 int * FUNC_1 (int ,int ) ;
 int FUNC_2 (struct eap_sim_msg*,int ,scalar_t__,int const*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct eap_sim_msg*,int ,int ) ;
 int FUNC_4 (struct eap_sim_msg*,int ,int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int ,char*,...) ;

__attribute__((used)) static int FUNC_8(struct eap_sm *VAR_12, struct eap_sim_data *VAR_13,
         struct eap_sim_msg *VAR_14, u16 VAR_15,
         const u8 *VAR_16)
{
 FUNC_5(VAR_13->next_pseudonym);
 if (!(VAR_12->eap_sim_id & 0x01)) {

  VAR_13->next_pseudonym = ((void*)0);
 } else if (!VAR_16) {
  VAR_13->next_pseudonym =
   FUNC_0(VAR_12->eap_sim_db_priv,
            VAR_7);
 } else {

  VAR_13->next_pseudonym = ((void*)0);
 }
 FUNC_5(VAR_13->next_reauth_id);
 if (!(VAR_12->eap_sim_id & 0x02)) {

  VAR_13->next_reauth_id = ((void*)0);
 } else if (VAR_13->counter <= VAR_8) {
  VAR_13->next_reauth_id =
   FUNC_1(VAR_12->eap_sim_db_priv,
            VAR_7);
 } else {
  FUNC_7(VAR_10, "EAP-SIM: Max fast re-authentication "
      "count exceeded - force full authentication");
  VAR_13->next_reauth_id = ((void*)0);
 }

 if (VAR_13->next_pseudonym == ((void*)0) && VAR_13->next_reauth_id == ((void*)0) &&
     VAR_15 == 0 && VAR_16 == ((void*)0))
  return 0;

 FUNC_7(VAR_10, "   AT_IV");
 FUNC_7(VAR_10, "   AT_ENCR_DATA");
 FUNC_4(VAR_14, VAR_2, VAR_1);

 if (VAR_15 > 0) {
  FUNC_7(VAR_10, "   *AT_COUNTER (%u)", VAR_15);
  FUNC_2(VAR_14, VAR_0, VAR_15, ((void*)0), 0);
 }

 if (VAR_16) {
  FUNC_7(VAR_10, "   *AT_NONCE_S");
  FUNC_2(VAR_14, VAR_5, 0, VAR_16,
    VAR_9);
 }

 if (VAR_13->next_pseudonym) {
  FUNC_7(VAR_10, "   *AT_NEXT_PSEUDONYM (%s)",
      VAR_13->next_pseudonym);
  FUNC_2(VAR_14, VAR_3,
    FUNC_6(VAR_13->next_pseudonym),
    (u8 *) VAR_13->next_pseudonym,
    FUNC_6(VAR_13->next_pseudonym));
 }

 if (VAR_13->next_reauth_id) {
  FUNC_7(VAR_10, "   *AT_NEXT_REAUTH_ID (%s)",
      VAR_13->next_reauth_id);
  FUNC_2(VAR_14, VAR_4,
    FUNC_6(VAR_13->next_reauth_id),
    (u8 *) VAR_13->next_reauth_id,
    FUNC_6(VAR_13->next_reauth_id));
 }

 if (FUNC_3(VAR_14, VAR_13->k_encr, VAR_6)) {
  FUNC_7(VAR_11, "EAP-SIM: Failed to encrypt "
      "AT_ENCR_DATA");
  return -1;
 }

 return 0;
}
