
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_teap_tlv_parse {scalar_t__ result; scalar_t__ iresult; scalar_t__ crypto_binding; scalar_t__ pac; int pac_len; int crypto_binding_len; int eap_payload_tlv_len; scalar_t__ eap_payload_tlv; int basic_auth_req_len; scalar_t__ basic_auth_req; } ;
struct eap_teap_data {int result_success_done; int teap_version; int ssl; scalar_t__ provisioning; void* on_tx_completion; scalar_t__ phase2_success; TYPE_1__* phase2_method; int tls_cs; int anon_provisioning; int current_pac; scalar_t__ session_ticket_used; scalar_t__ inner_method_done; } ;
struct eap_sm {int dummy; } ;
struct eap_method_ret {void* decision; void* methodState; } ;
typedef enum teap_error_codes { ____Placeholder_teap_error_codes } teap_error_codes ;
struct TYPE_2__ {scalar_t__ vendor; int method; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_0 (struct eap_sm*,int *,int ,int ,int ,struct wpabuf*,struct wpabuf**) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct eap_teap_data*) ;
 struct wpabuf* FUNC_4 () ;
 scalar_t__ FUNC_5 (struct wpabuf*,struct eap_teap_tlv_parse*,struct wpabuf**) ;
 struct wpabuf* FUNC_6 (struct eap_sm*,struct eap_teap_data*,scalar_t__,int ) ;
 struct wpabuf* FUNC_7 (struct eap_sm*,struct eap_teap_data*,struct eap_method_ret*,scalar_t__,int ) ;
 struct wpabuf* FUNC_8 (struct eap_sm*,struct eap_teap_data*,struct eap_method_ret*,scalar_t__,int ) ;
 struct wpabuf* FUNC_9 (struct eap_sm*,struct eap_teap_data*,struct eap_method_ret*,scalar_t__,int ) ;
 struct wpabuf* FUNC_10 (int) ;
 struct wpabuf* FUNC_11 (scalar_t__,int) ;
 int FUNC_12 (int ,char*,struct wpabuf*) ;
 int FUNC_13 (int ,char*) ;
 struct wpabuf* FUNC_14 (int) ;
 struct wpabuf* FUNC_15 (struct wpabuf*,struct wpabuf*) ;
 int FUNC_16 (struct wpabuf*) ;

__attribute__((used)) static int FUNC_17(struct eap_sm *VAR_12,
          struct eap_teap_data *VAR_13,
          struct eap_method_ret *VAR_14,
          u8 VAR_15,
          struct wpabuf *VAR_16,
          struct wpabuf **VAR_17)
{
 struct wpabuf *VAR_18 = ((void*)0), *VAR_19;
 struct eap_teap_tlv_parse VAR_20;
 int VAR_21 = 0;
 enum teap_error_codes VAR_22 = 0;

 if (FUNC_5(VAR_16, &VAR_20, &VAR_18) < 0) {

  return 0;
 }

 if (VAR_18) {

  goto send_resp;
 }

 if (VAR_20.result == VAR_10) {



  FUNC_13(VAR_6,
      "EAP-TEAP: Server rejected authentication");
  VAR_18 = FUNC_11(VAR_10, 0);
  VAR_14->methodState = VAR_4;
  VAR_14->decision = VAR_1;
  goto send_resp;
 }

 if ((VAR_20.iresult == VAR_11 ||
      (!VAR_13->result_success_done &&
       VAR_20.result == VAR_11)) &&
     !VAR_20.crypto_binding) {


  FUNC_13(VAR_6,
      "EAP-TEAP: Result TLV or Intermediate-Result TLV indicating success, but no Crypto-Binding TLV");
  VAR_21 = 1;
  VAR_22 = VAR_8;
  goto done;
 }

 if (VAR_20.iresult != VAR_11 &&
     VAR_20.iresult != VAR_10 &&
     VAR_13->inner_method_done) {
  FUNC_13(VAR_6,
      "EAP-TEAP: Inner EAP method exchange completed, but no Intermediate-Result TLV included");
  VAR_21 = 1;
  VAR_22 = VAR_8;
  goto done;
 }

 if (VAR_20.basic_auth_req) {
  VAR_19 = FUNC_6(VAR_12, VAR_13,
            VAR_20.basic_auth_req,
            VAR_20.basic_auth_req_len);
  if (!VAR_19)
   VAR_21 = 1;
  VAR_18 = FUNC_15(VAR_18, VAR_19);
 } else if (VAR_20.eap_payload_tlv) {
  VAR_19 = FUNC_8(VAR_12, VAR_13, VAR_14,
             VAR_20.eap_payload_tlv,
             VAR_20.eap_payload_tlv_len);
  if (!VAR_19)
   VAR_21 = 1;
  VAR_18 = FUNC_15(VAR_18, VAR_19);

  if (VAR_20.iresult == VAR_11 ||
      VAR_20.iresult == VAR_10) {
   VAR_19 = FUNC_11(VAR_21 ?
        VAR_10 :
        VAR_11, 1);
   VAR_18 = FUNC_15(VAR_18, VAR_19);
   if (VAR_20.iresult == VAR_10)
    VAR_21 = 1;
  }
 }

 if (VAR_20.crypto_binding) {
  if (VAR_20.iresult != VAR_11 &&
      VAR_20.result != VAR_11) {
   FUNC_13(VAR_6,
       "EAP-TEAP: Unexpected Crypto-Binding TLV without Result TLV or Intermediate-Result TLV indicating success");
   VAR_21 = 1;
   VAR_22 = VAR_9;
   goto done;
  }

  VAR_19 = FUNC_7(VAR_12, VAR_13, VAR_14,
            VAR_20.crypto_binding,
            VAR_20.crypto_binding_len);
  if (!VAR_19) {
   VAR_21 = 1;
   VAR_22 = VAR_8;
  } else {
   VAR_18 = FUNC_15(VAR_18, VAR_19);
   if (VAR_20.result == VAR_11 && !VAR_21)
    VAR_13->result_success_done = 1;
   if (VAR_20.iresult == VAR_11 && !VAR_21)
    VAR_13->inner_method_done = 0;
  }
 }

 if (VAR_13->result_success_done && VAR_13->session_ticket_used &&
     FUNC_3(VAR_13) == 0) {


  FUNC_13(VAR_6,
      "EAP-TEAP: PAC used - server may decide to skip inner authentication");
  VAR_14->methodState = VAR_5;
  VAR_14->decision = VAR_0;
 }

 if (VAR_20.pac) {
  if (VAR_20.result == VAR_11) {
   VAR_19 = FUNC_9(VAR_12, VAR_13, VAR_14,
         VAR_20.pac, VAR_20.pac_len);
   VAR_18 = FUNC_15(VAR_18, VAR_19);
  } else {
   FUNC_13(VAR_6,
       "EAP-TEAP: PAC TLV without Result TLV acknowledging success");
   VAR_21 = 1;
   VAR_22 = VAR_9;
  }
 }

 if (!VAR_13->current_pac && VAR_13->provisioning && !VAR_21 && !VAR_20.pac &&
     VAR_20.crypto_binding &&
     (!VAR_13->anon_provisioning ||
      (VAR_13->phase2_success && VAR_13->phase2_method &&
       VAR_13->phase2_method->vendor == 0 &&
       FUNC_1(VAR_13->tls_cs) &&
       FUNC_2(
        VAR_13->phase2_method->method))) &&
     (VAR_20.iresult == VAR_11 ||
      VAR_20.result == VAR_11)) {




  FUNC_13(VAR_6, "EAP-TEAP: Request Tunnel PAC");
  VAR_19 = FUNC_4();
  VAR_18 = FUNC_15(VAR_18, VAR_19);
 }

done:
 if (VAR_21) {
  VAR_19 = FUNC_11(VAR_10, 0);
  VAR_18 = FUNC_15(VAR_19, VAR_18);

  if (VAR_22 != 0) {
   VAR_19 = FUNC_10(VAR_22);
   VAR_18 = FUNC_15(VAR_19, VAR_18);
  }

  VAR_14->methodState = VAR_4;
  VAR_14->decision = VAR_1;
 } else if (VAR_20.result == VAR_11) {
  VAR_19 = FUNC_11(VAR_11, 0);
  VAR_18 = FUNC_15(VAR_19, VAR_18);
 }

 if (VAR_18 && VAR_20.result == VAR_11 && !VAR_21 &&
     VAR_20.crypto_binding && VAR_13->phase2_success) {

  FUNC_13(VAR_6,
      "EAP-TEAP: Authentication completed successfully");
  VAR_14->methodState = VAR_5;
  VAR_13->on_tx_completion = VAR_13->provisioning ?
   VAR_5 : VAR_4;
  VAR_14->decision = VAR_2;
 }

 if (!VAR_18) {
  FUNC_13(VAR_6,
      "EAP-TEAP: No recognized TLVs - send empty response packet");
  VAR_18 = FUNC_14(1);
 }

send_resp:
 if (!VAR_18)
  return 0;

 FUNC_12(VAR_6, "EAP-TEAP: Encrypting Phase 2 data", VAR_18);
 if (FUNC_0(VAR_12, &VAR_13->ssl, VAR_3,
     VAR_13->teap_version, VAR_15,
     VAR_18, VAR_17)) {
  FUNC_13(VAR_7,
      "EAP-TEAP: Failed to encrypt a Phase 2 frame");
 }
 FUNC_16(VAR_18);

 return 0;
}
