
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int expected_failure; } ;
struct eap_method_ret {int decision; void* methodState; } ;
struct eap_fast_tlv_parse {scalar_t__ result; scalar_t__ iresult; scalar_t__ crypto_binding; scalar_t__ pac; int pac_len; int eap_payload_tlv_len; scalar_t__ eap_payload_tlv; int crypto_binding_len; } ;
struct eap_fast_data {scalar_t__ provisioning; scalar_t__ anon_provisioning; scalar_t__ phase2_success; int * current_pac; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct eap_sm*,struct eap_fast_data*,struct wpabuf*,int ,struct wpabuf**) ;
 struct wpabuf* FUNC_1 () ;
 scalar_t__ FUNC_2 (struct wpabuf*,struct eap_fast_tlv_parse*,struct wpabuf**) ;
 struct wpabuf* FUNC_3 (struct eap_sm*,struct eap_fast_data*,struct eap_method_ret*,scalar_t__,int ) ;
 struct wpabuf* FUNC_4 (struct eap_sm*,struct eap_fast_data*,struct eap_method_ret*,scalar_t__,int ) ;
 struct wpabuf* FUNC_5 (struct eap_sm*,struct eap_fast_data*,struct eap_method_ret*,scalar_t__,int ) ;
 struct wpabuf* FUNC_6 (scalar_t__,int) ;
 int FUNC_7 (int ,char*) ;
 struct wpabuf* FUNC_8 (int) ;
 struct wpabuf* FUNC_9 (struct wpabuf*,struct wpabuf*) ;

__attribute__((used)) static int FUNC_10(struct eap_sm *VAR_7,
          struct eap_fast_data *VAR_8,
          struct eap_method_ret *VAR_9,
          u8 VAR_10,
          struct wpabuf *VAR_11,
          struct wpabuf **VAR_12)
{
 struct wpabuf *VAR_13 = ((void*)0), *VAR_14;
 struct eap_fast_tlv_parse VAR_15;
 int VAR_16 = 0;

 if (FUNC_2(VAR_11, &VAR_15, &VAR_13) < 0)
  return 0;
 if (VAR_13)
  return FUNC_0(VAR_7, VAR_8, VAR_13,
       VAR_10, VAR_12);

 if (VAR_15.result == VAR_2) {
  VAR_13 = FUNC_6(VAR_2, 0);
  return FUNC_0(VAR_7, VAR_8, VAR_13,
       VAR_10, VAR_12);
 }

 if (VAR_15.iresult == VAR_2) {
  VAR_13 = FUNC_6(VAR_2, 1);
  return FUNC_0(VAR_7, VAR_8, VAR_13,
       VAR_10, VAR_12);
 }

 if (VAR_15.crypto_binding) {
  VAR_14 = FUNC_3(VAR_7, VAR_8, VAR_9,
            VAR_15.crypto_binding,
            VAR_15.crypto_binding_len);
  if (VAR_14 == ((void*)0))
   VAR_16 = 1;
  else
   VAR_13 = FUNC_9(VAR_13, VAR_14);
 }

 if (VAR_15.iresult == VAR_3) {
  VAR_14 = FUNC_6(VAR_16 ? VAR_2 :
       VAR_3, 1);
  VAR_13 = FUNC_9(VAR_13, VAR_14);
 }

 if (VAR_15.eap_payload_tlv) {
  VAR_14 = FUNC_4(
   VAR_7, VAR_8, VAR_9, VAR_15.eap_payload_tlv,
   VAR_15.eap_payload_tlv_len);
  VAR_13 = FUNC_9(VAR_13, VAR_14);
 }

 if (VAR_15.pac && VAR_15.result != VAR_3) {
  FUNC_7(VAR_6, "EAP-FAST: PAC TLV without Result TLV "
      "acknowledging success");
  VAR_16 = 1;
 } else if (VAR_15.pac && VAR_15.result == VAR_3) {
  VAR_14 = FUNC_5(VAR_7, VAR_8, VAR_9, VAR_15.pac,
        VAR_15.pac_len);
  VAR_13 = FUNC_9(VAR_13, VAR_14);
 }

 if (VAR_8->current_pac == ((void*)0) && VAR_8->provisioning &&
     !VAR_8->anon_provisioning && !VAR_15.pac &&
     (VAR_15.iresult == VAR_3 ||
      VAR_15.result == VAR_3)) {




  FUNC_7(VAR_6, "EAP-FAST: Request Tunnel PAC");
  VAR_14 = FUNC_1();
  VAR_13 = FUNC_9(VAR_13, VAR_14);
 }

 if (VAR_15.result == VAR_3 && !VAR_16) {
  VAR_14 = FUNC_6(VAR_3, 0);
  VAR_13 = FUNC_9(VAR_14, VAR_13);
 } else if (VAR_16) {
  VAR_14 = FUNC_6(VAR_2, 0);
  VAR_13 = FUNC_9(VAR_14, VAR_13);
 }

 if (VAR_13 && VAR_15.result == VAR_3 && !VAR_16 &&
     VAR_15.crypto_binding && VAR_8->phase2_success) {
  if (VAR_8->anon_provisioning) {
   FUNC_7(VAR_6, "EAP-FAST: Unauthenticated "
       "provisioning completed successfully.");
   VAR_9->methodState = VAR_4;
   VAR_9->decision = VAR_0;
   VAR_7->expected_failure = 1;
  } else {
   FUNC_7(VAR_6, "EAP-FAST: Authentication "
       "completed successfully.");
   if (VAR_8->provisioning)
    VAR_9->methodState = VAR_5;
   else
    VAR_9->methodState = VAR_4;
   VAR_9->decision = VAR_1;
  }
 }

 if (VAR_13 == ((void*)0)) {
  FUNC_7(VAR_6, "EAP-FAST: No recognized TLVs - send "
      "empty response packet");
  VAR_13 = FUNC_8(1);
 }

 return FUNC_0(VAR_7, VAR_8, VAR_13, VAR_10,
      VAR_12);
}
