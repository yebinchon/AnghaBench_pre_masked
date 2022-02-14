
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct wpabuf {int dummy; } ;
struct eap_sm {scalar_t__ eap_fast_prov; } ;
struct eap_fast_tlv_parse {scalar_t__ result; int pac_len; scalar_t__ iresult; scalar_t__ request_action; int eap_payload_tlv_len; scalar_t__ eap_payload_tlv; int * pac; int crypto_binding_len; int * crypto_binding; } ;
struct eap_fast_data {scalar_t__ state; int send_new_pac; scalar_t__ final_result; scalar_t__ anon_provisioning; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int,int ) ;
 scalar_t__ FUNC_2 (struct wpabuf*,struct eap_fast_tlv_parse*) ;
 int FUNC_3 (struct eap_sm*,struct eap_fast_data*,scalar_t__,int ) ;
 int FUNC_4 (struct eap_fast_data*,scalar_t__) ;
 scalar_t__ FUNC_5 (struct eap_fast_data*,int *,int ) ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static void FUNC_7(struct eap_sm *VAR_13,
      struct eap_fast_data *VAR_14,
      struct wpabuf *VAR_15)
{
 struct eap_fast_tlv_parse VAR_16;
 int VAR_17 = VAR_14->state == VAR_3;

 if (FUNC_2(VAR_15, &VAR_16) < 0) {
  FUNC_6(VAR_8, "EAP-FAST: Failed to parse received "
      "Phase 2 TLVs");
  return;
 }

 if (VAR_16.result == VAR_5) {
  FUNC_6(VAR_8, "EAP-FAST: Result TLV indicated "
      "failure");
  FUNC_4(VAR_14, VAR_7);
  return;
 }

 if (VAR_14->state == VAR_11) {
  u16 VAR_18, VAR_19, VAR_20;
  if (VAR_16.pac == ((void*)0) || VAR_16.pac_len < 6) {
   FUNC_6(VAR_8, "EAP-FAST: No PAC "
       "Acknowledgement received");
   FUNC_4(VAR_14, VAR_7);
   return;
  }

  VAR_18 = FUNC_0(VAR_16.pac);
  VAR_19 = FUNC_0(VAR_16.pac + 2);
  VAR_20 = FUNC_0(VAR_16.pac + 4);

  if (VAR_18 != VAR_9 || VAR_19 != 2 ||
      VAR_20 != VAR_6) {
   FUNC_6(VAR_8, "EAP-FAST: PAC TLV did not "
       "contain acknowledgement");
   FUNC_4(VAR_14, VAR_7);
   return;
  }

  FUNC_6(VAR_8, "EAP-FAST: PAC-Acknowledgement received "
      "- PAC provisioning succeeded");
  FUNC_4(VAR_14, (VAR_14->anon_provisioning ||
          VAR_14->send_new_pac == 2) ?
          VAR_7 : VAR_12);
  return;
 }

 if (VAR_17) {
  if (VAR_16.crypto_binding == ((void*)0)) {
   FUNC_6(VAR_8, "EAP-FAST: No Crypto-Binding "
       "TLV received");
   FUNC_4(VAR_14, VAR_7);
   return;
  }

  if (VAR_14->final_result &&
      VAR_16.result != VAR_6) {
   FUNC_6(VAR_8, "EAP-FAST: Crypto-Binding TLV "
       "without Success Result");
   FUNC_4(VAR_14, VAR_7);
   return;
  }

  if (!VAR_14->final_result &&
      VAR_16.iresult != VAR_6) {
   FUNC_6(VAR_8, "EAP-FAST: Crypto-Binding TLV "
       "without intermediate Success Result");
   FUNC_4(VAR_14, VAR_7);
   return;
  }

  if (FUNC_5(VAR_14, VAR_16.crypto_binding,
           VAR_16.crypto_binding_len)) {
   FUNC_4(VAR_14, VAR_7);
   return;
  }

  FUNC_6(VAR_8, "EAP-FAST: Valid Crypto-Binding TLV "
      "received");
  if (VAR_14->final_result) {
   FUNC_6(VAR_8, "EAP-FAST: Authentication "
       "completed successfully");
  }

  if (VAR_14->anon_provisioning &&
      VAR_13->eap_fast_prov != VAR_0 &&
      VAR_13->eap_fast_prov != VAR_2) {
   FUNC_6(VAR_8, "EAP-FAST: Client is trying to "
       "use unauthenticated provisioning which is "
       "disabled");
   FUNC_4(VAR_14, VAR_7);
   return;
  }

  if (VAR_13->eap_fast_prov != VAR_1 &&
      VAR_13->eap_fast_prov != VAR_2 &&
      VAR_16.request_action == VAR_4 &&
      FUNC_1(VAR_16.pac, VAR_16.pac_len,
          VAR_10)) {
   FUNC_6(VAR_8, "EAP-FAST: Client is trying to "
       "use authenticated provisioning which is "
       "disabled");
   FUNC_4(VAR_14, VAR_7);
   return;
  }

  if (VAR_14->anon_provisioning ||
      (VAR_16.request_action == VAR_4 &&
       FUNC_1(VAR_16.pac, VAR_16.pac_len,
           VAR_10))) {
   FUNC_6(VAR_8, "EAP-FAST: Requested a new "
       "Tunnel PAC");
   FUNC_4(VAR_14, VAR_11);
  } else if (VAR_14->send_new_pac) {
   FUNC_6(VAR_8, "EAP-FAST: Server triggered "
       "re-keying of Tunnel PAC");
   FUNC_4(VAR_14, VAR_11);
  } else if (VAR_14->final_result)
   FUNC_4(VAR_14, VAR_12);
 }

 if (VAR_16.eap_payload_tlv) {
  FUNC_3(VAR_13, VAR_14, VAR_16.eap_payload_tlv,
         VAR_16.eap_payload_tlv_len);
 }
}
