
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct teap_tlv_crypto_binding {int subtype; int* msk_compound_mac; int* emsk_compound_mac; } ;
struct eap_teap_data {scalar_t__ phase2_success; scalar_t__ cmk_emsk_available; int peer_outer_tlvs; int server_outer_tlvs; int tls_cs; } ;
struct eap_sm {int dummy; } ;
struct eap_method_ret {int decision; int methodState; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ,struct teap_tlv_crypto_binding const*,int ,int ,int*,int*) ;
 scalar_t__ FUNC_1 (struct eap_teap_data*) ;
 scalar_t__ FUNC_2 (struct eap_sm*,struct eap_teap_data*,int*,int*) ;
 scalar_t__ FUNC_3 (struct eap_teap_data*) ;
 scalar_t__ FUNC_4 (struct eap_teap_data*,struct teap_tlv_crypto_binding const*) ;
 scalar_t__ FUNC_5 (struct eap_teap_data*,struct teap_tlv_crypto_binding*,struct teap_tlv_crypto_binding const*,int*,int const*) ;
 int FUNC_6 (int*,int*,int) ;
 int FUNC_7 (int ,char*,int*,int) ;
 int FUNC_8 (int ,char*) ;
 struct wpabuf* FUNC_9 (size_t) ;
 int FUNC_10 (struct wpabuf*) ;
 int* FUNC_11 (struct wpabuf*,int) ;

__attribute__((used)) static struct wpabuf * FUNC_12(
 struct eap_sm *VAR_9, struct eap_teap_data *VAR_10,
 struct eap_method_ret *VAR_11,
 const struct teap_tlv_crypto_binding *VAR_12, size_t VAR_13)
{
 struct wpabuf *VAR_14;
 u8 *VAR_15;
 u8 VAR_16[VAR_1];
 u8 VAR_17[VAR_1];
 const u8 *VAR_18 = ((void*)0);
 int VAR_19;
 size_t VAR_20;
 u8 VAR_21;

 if (FUNC_4(VAR_10, VAR_12) < 0 ||
     FUNC_2(VAR_9, VAR_10, VAR_16, VAR_17) < 0)
  return ((void*)0);


 VAR_21 = VAR_12->subtype >> 4;

 if (VAR_21 == VAR_8 ||
     VAR_21 == VAR_6) {
  u8 VAR_22[VAR_2];

  if (FUNC_0(VAR_10->tls_cs, VAR_12,
       VAR_10->server_outer_tlvs,
       VAR_10->peer_outer_tlvs, VAR_16,
       VAR_22) < 0)
   return ((void*)0);
  VAR_19 = FUNC_6(VAR_22, VAR_12->msk_compound_mac,
          VAR_2);
  FUNC_7(VAR_5, "EAP-TEAP: Received MSK Compound MAC",
       VAR_12->msk_compound_mac, VAR_2);
  FUNC_7(VAR_5,
       "EAP-TEAP: Calculated MSK Compound MAC",
       VAR_22, VAR_2);
  if (VAR_19 != 0) {
   FUNC_8(VAR_4,
       "EAP-TEAP: MSK Compound MAC did not match");
   return ((void*)0);
  }
 }

 if ((VAR_21 == VAR_7 ||
      VAR_21 == VAR_6) &&
     VAR_10->cmk_emsk_available) {
  u8 VAR_23[VAR_2];

  if (FUNC_0(VAR_10->tls_cs, VAR_12,
       VAR_10->server_outer_tlvs,
       VAR_10->peer_outer_tlvs, VAR_17,
       VAR_23) < 0)
   return ((void*)0);
  VAR_19 = FUNC_6(VAR_23, VAR_12->emsk_compound_mac,
          VAR_2);
  FUNC_7(VAR_5, "EAP-TEAP: Received EMSK Compound MAC",
       VAR_12->emsk_compound_mac, VAR_2);
  FUNC_7(VAR_5,
       "EAP-TEAP: Calculated EMSK Compound MAC",
       VAR_23, VAR_2);
  if (VAR_19 != 0) {
   FUNC_8(VAR_4,
       "EAP-TEAP: EMSK Compound MAC did not match");
   return ((void*)0);
  }

  VAR_18 = VAR_17;
 }

 if (VAR_21 == VAR_7 &&
     !VAR_10->cmk_emsk_available) {
  FUNC_8(VAR_4,
      "EAP-TEAP: Server included only EMSK Compound MAC, but no locally generated inner EAP EMSK to validate this");
  return ((void*)0);
 }






 VAR_20 = sizeof(struct teap_tlv_crypto_binding);
 VAR_14 = FUNC_9(VAR_20);
 if (!VAR_14)
  return ((void*)0);

 if (VAR_10->phase2_success && FUNC_1(VAR_10) < 0) {
  FUNC_8(VAR_4, "EAP-TEAP: Failed to generate MSK");
  VAR_11->methodState = VAR_3;
  VAR_11->decision = VAR_0;
  VAR_10->phase2_success = 0;
  FUNC_10(VAR_14);
  return ((void*)0);
 }

 if (VAR_10->phase2_success && FUNC_3(VAR_10) < 0) {
  FUNC_10(VAR_14);
  return ((void*)0);
 }

 VAR_15 = FUNC_11(VAR_14, sizeof(struct teap_tlv_crypto_binding));
 if (FUNC_5(
      VAR_10, (struct teap_tlv_crypto_binding *) VAR_15,
      VAR_12, VAR_16, VAR_18) < 0) {
  FUNC_10(VAR_14);
  return ((void*)0);
 }

 return VAR_14;
}
