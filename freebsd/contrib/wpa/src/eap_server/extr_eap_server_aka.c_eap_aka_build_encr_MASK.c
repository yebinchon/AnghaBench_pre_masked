
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u8 ;
typedef scalar_t__ u16 ;
struct eap_sm {int eap_sim_id; int eap_sim_db_priv; } ;
struct eap_sim_msg {int dummy; } ;
struct eap_aka_data {scalar_t__ eap_method; scalar_t__ counter; int k_encr; int * next_reauth_id; int * next_pseudonym; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int * FUNC_0 (int ,int ) ;
 int * FUNC_1 (int ,int ) ;
 int FUNC_2 (struct eap_sim_msg*,int ,scalar_t__,int const*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct eap_sim_msg*,int ,int ) ;
 int FUNC_4 (struct eap_sim_msg*,int ,int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int ,char*,...) ;

__attribute__((used)) static int FUNC_8(struct eap_sm *VAR_14, struct eap_aka_data *VAR_15,
         struct eap_sim_msg *VAR_16, u16 VAR_17,
         const u8 *VAR_18)
{
 FUNC_5(VAR_15->next_pseudonym);
 if (!(VAR_14->eap_sim_id & 0x01)) {

  VAR_15->next_pseudonym = ((void*)0);
 } else if (!VAR_18) {
  VAR_15->next_pseudonym =
   FUNC_0(
    VAR_14->eap_sim_db_priv,
    VAR_15->eap_method == VAR_11 ?
    VAR_9 : VAR_8);
 } else {

  VAR_15->next_pseudonym = ((void*)0);
 }
 FUNC_5(VAR_15->next_reauth_id);
 if (!(VAR_14->eap_sim_id & 0x02)) {

  VAR_15->next_reauth_id = ((void*)0);
 } else if (VAR_15->counter <= VAR_0) {
  VAR_15->next_reauth_id =
   FUNC_1(
    VAR_14->eap_sim_db_priv,
    VAR_15->eap_method == VAR_11 ?
    VAR_9 : VAR_8);
 } else {
  FUNC_7(VAR_12, "EAP-AKA: Max fast re-authentication "
      "count exceeded - force full authentication");
  VAR_15->next_reauth_id = ((void*)0);
 }

 if (VAR_15->next_pseudonym == ((void*)0) && VAR_15->next_reauth_id == ((void*)0) &&
     VAR_17 == 0 && VAR_18 == ((void*)0))
  return 0;

 FUNC_7(VAR_12, "   AT_IV");
 FUNC_7(VAR_12, "   AT_ENCR_DATA");
 FUNC_4(VAR_16, VAR_3, VAR_2);

 if (VAR_17 > 0) {
  FUNC_7(VAR_12, "   *AT_COUNTER (%u)", VAR_17);
  FUNC_2(VAR_16, VAR_1, VAR_17, ((void*)0), 0);
 }

 if (VAR_18) {
  FUNC_7(VAR_12, "   *AT_NONCE_S");
  FUNC_2(VAR_16, VAR_6, 0, VAR_18,
    VAR_10);
 }

 if (VAR_15->next_pseudonym) {
  FUNC_7(VAR_12, "   *AT_NEXT_PSEUDONYM (%s)",
      VAR_15->next_pseudonym);
  FUNC_2(VAR_16, VAR_4,
    FUNC_6(VAR_15->next_pseudonym),
    (u8 *) VAR_15->next_pseudonym,
    FUNC_6(VAR_15->next_pseudonym));
 }

 if (VAR_15->next_reauth_id) {
  FUNC_7(VAR_12, "   *AT_NEXT_REAUTH_ID (%s)",
      VAR_15->next_reauth_id);
  FUNC_2(VAR_16, VAR_5,
    FUNC_6(VAR_15->next_reauth_id),
    (u8 *) VAR_15->next_reauth_id,
    FUNC_6(VAR_15->next_reauth_id));
 }

 if (FUNC_3(VAR_16, VAR_15->k_encr, VAR_7)) {
  FUNC_7(VAR_13, "EAP-AKA: Failed to encrypt "
      "AT_ENCR_DATA");
  return -1;
 }

 return 0;
}
