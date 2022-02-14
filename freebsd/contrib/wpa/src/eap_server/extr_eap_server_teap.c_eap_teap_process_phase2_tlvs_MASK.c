
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct wpabuf {int dummy; } ;
struct eap_teap_tlv_parse {scalar_t__ result; int pac_len; scalar_t__ iresult; scalar_t__ request_action; int eap_payload_tlv_len; scalar_t__ eap_payload_tlv; int basic_auth_resp_len; scalar_t__ basic_auth_resp; scalar_t__ pac; int crypto_binding_len; int crypto_binding; scalar_t__ nak; } ;
struct eap_teap_data {scalar_t__ state; scalar_t__ final_result; scalar_t__ send_new_pac; scalar_t__ anon_provisioning; } ;
struct eap_sm {scalar_t__ eap_fast_prov; int eap_teap_auth; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,int,int ) ;
 scalar_t__ FUNC_3 (struct wpabuf*,struct eap_teap_tlv_parse*) ;
 int FUNC_4 (struct eap_sm*,struct eap_teap_data*,scalar_t__,int ) ;
 int FUNC_5 (struct eap_sm*,struct eap_teap_data*,scalar_t__,int ) ;
 int FUNC_6 (struct eap_teap_data*,scalar_t__) ;
 scalar_t__ FUNC_7 (struct eap_teap_data*,int ,int ) ;
 int FUNC_8 (int ,char*,...) ;

__attribute__((used)) static void FUNC_9(struct eap_sm *VAR_14,
      struct eap_teap_data *VAR_15,
      struct wpabuf *VAR_16)
{
 struct eap_teap_tlv_parse VAR_17;
 int VAR_18 = VAR_15->state == VAR_3;

 if (FUNC_3(VAR_16, &VAR_17) < 0) {
  FUNC_8(VAR_6,
      "EAP-TEAP: Failed to parse received Phase 2 TLVs");
  return;
 }

 if (VAR_17.result == VAR_12) {
  FUNC_8(VAR_6, "EAP-TEAP: Result TLV indicated failure");
  FUNC_6(VAR_15, VAR_4);
  return;
 }

 if (VAR_17.nak) {
  FUNC_8(VAR_6,
      "EAP-TEAP: Peer NAK'ed Vendor-Id %u NAK-Type %u",
      FUNC_1(VAR_17.nak), FUNC_0(VAR_17.nak + 4));
  FUNC_6(VAR_15, VAR_5);
  return;
 }

 if (VAR_15->state == VAR_9) {
  u16 VAR_19, VAR_20, VAR_21;

  if (!VAR_17.pac || VAR_17.pac_len < 6) {
   FUNC_8(VAR_6,
       "EAP-TEAP: No PAC Acknowledgement received");
   FUNC_6(VAR_15, VAR_4);
   return;
  }

  VAR_19 = FUNC_0(VAR_17.pac);
  VAR_20 = FUNC_0(VAR_17.pac + 2);
  VAR_21 = FUNC_0(VAR_17.pac + 4);

  if (VAR_19 != VAR_7 || VAR_20 != 2 ||
      VAR_21 != VAR_13) {
   FUNC_8(VAR_6,
       "EAP-TEAP: PAC TLV did not contain acknowledgement");
   FUNC_6(VAR_15, VAR_4);
   return;
  }

  FUNC_8(VAR_6,
      "EAP-TEAP: PAC-Acknowledgement received - PAC provisioning succeeded");
  FUNC_6(VAR_15, VAR_10);
  return;
 }

 if (VAR_18) {
  if (!VAR_17.crypto_binding) {
   FUNC_8(VAR_6,
       "EAP-TEAP: No Crypto-Binding TLV received");
   FUNC_6(VAR_15, VAR_4);
   return;
  }

  if (VAR_15->final_result &&
      VAR_17.result != VAR_13) {
   FUNC_8(VAR_6,
       "EAP-TEAP: Crypto-Binding TLV without Success Result");
   FUNC_6(VAR_15, VAR_4);
   return;
  }

  if (!VAR_15->final_result &&
      VAR_17.iresult != VAR_13) {
   FUNC_8(VAR_6,
       "EAP-TEAP: Crypto-Binding TLV without intermediate Success Result");
   FUNC_6(VAR_15, VAR_4);
   return;
  }

  if (FUNC_7(VAR_15, VAR_17.crypto_binding,
           VAR_17.crypto_binding_len)) {
   FUNC_6(VAR_15, VAR_4);
   return;
  }

  FUNC_8(VAR_6,
      "EAP-TEAP: Valid Crypto-Binding TLV received");
  if (VAR_15->final_result) {
   FUNC_8(VAR_6,
       "EAP-TEAP: Authentication completed successfully");
  }

  if (VAR_15->anon_provisioning &&
      VAR_14->eap_fast_prov != VAR_0 &&
      VAR_14->eap_fast_prov != VAR_2) {
   FUNC_8(VAR_6,
       "EAP-TEAP: Client is trying to use unauthenticated provisioning which is disabled");
   FUNC_6(VAR_15, VAR_4);
   return;
  }

  if (VAR_14->eap_fast_prov != VAR_1 &&
      VAR_14->eap_fast_prov != VAR_2 &&
      VAR_17.request_action == VAR_11 &&
      FUNC_2(VAR_17.pac, VAR_17.pac_len,
          VAR_8)) {
   FUNC_8(VAR_6,
       "EAP-TEAP: Client is trying to use authenticated provisioning which is disabled");
   FUNC_6(VAR_15, VAR_4);
   return;
  }

  if (VAR_15->anon_provisioning ||
      (VAR_17.request_action == VAR_11 &&
       FUNC_2(VAR_17.pac, VAR_17.pac_len,
           VAR_8))) {
   FUNC_8(VAR_6,
       "EAP-TEAP: Requested a new Tunnel PAC");
   FUNC_6(VAR_15, VAR_9);
  } else if (VAR_15->send_new_pac) {
   FUNC_8(VAR_6,
       "EAP-TEAP: Server triggered re-keying of Tunnel PAC");
   FUNC_6(VAR_15, VAR_9);
  } else if (VAR_15->final_result)
   FUNC_6(VAR_15, VAR_10);
 }

 if (VAR_17.basic_auth_resp) {
  if (VAR_14->eap_teap_auth != 1) {
   FUNC_8(VAR_6,
       "EAP-TEAP: Unexpected Basic-Password-Auth-Resp when trying to use inner EAP");
   FUNC_6(VAR_15, VAR_4);
   return;
  }
  FUNC_4(VAR_14, VAR_15, VAR_17.basic_auth_resp,
       VAR_17.basic_auth_resp_len);
 }

 if (VAR_17.eap_payload_tlv) {
  if (VAR_14->eap_teap_auth == 1) {
   FUNC_8(VAR_6,
       "EAP-TEAP: Unexpected EAP Payload TLV when trying to use Basic-Password-Auth");
   FUNC_6(VAR_15, VAR_4);
   return;
  }
  FUNC_5(VAR_14, VAR_15, VAR_17.eap_payload_tlv,
         VAR_17.eap_payload_tlv_len);
 }
}
