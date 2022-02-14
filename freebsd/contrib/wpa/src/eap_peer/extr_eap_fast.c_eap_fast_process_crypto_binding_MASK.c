
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_tlv_crypto_binding_tlv {int * compound_mac; } ;
struct eap_sm {int dummy; } ;
struct eap_method_ret {int decision; int methodState; } ;
struct eap_fast_data {int id_len; int * session_id; int ssl; scalar_t__ phase2_success; int anon_provisioning; } ;
typedef int cmac ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct eap_fast_data*) ;
 scalar_t__ FUNC_1 (struct eap_sm*,struct eap_fast_data*,int *) ;
 scalar_t__ FUNC_2 (struct eap_tlv_crypto_binding_tlv*) ;
 int FUNC_3 (struct eap_tlv_crypto_binding_tlv*,struct eap_tlv_crypto_binding_tlv*,int *) ;
 int * FUNC_4 (struct eap_sm*,int *,int ,int*) ;
 int FUNC_5 (int *,int,int *,size_t,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,int) ;
 int FUNC_8 (int *,int *,int) ;
 int FUNC_9 (int *,int ,int) ;
 int FUNC_10 (int ,char*,int *,int) ;
 int FUNC_11 (int ,char*) ;
 struct wpabuf* FUNC_12 (size_t) ;
 int FUNC_13 (struct wpabuf*) ;
 int * FUNC_14 (struct wpabuf*,int) ;

__attribute__((used)) static struct wpabuf * FUNC_15(
 struct eap_sm *VAR_9, struct eap_fast_data *VAR_10,
 struct eap_method_ret *VAR_11,
 struct eap_tlv_crypto_binding_tlv *VAR_12, size_t VAR_13)
{
 struct wpabuf *VAR_14;
 u8 *VAR_15;
 u8 VAR_16[VAR_1], VAR_17[VAR_8];
 int VAR_18;
 size_t VAR_19;

 if (FUNC_2(VAR_12) < 0)
  return ((void*)0);

 if (FUNC_1(VAR_9, VAR_10, VAR_16) < 0)
  return ((void*)0);


 FUNC_8(VAR_17, VAR_12->compound_mac, sizeof(VAR_17));
 FUNC_9(VAR_12->compound_mac, 0, sizeof(VAR_17));
 FUNC_10(VAR_7, "EAP-FAST: Crypto-Binding TLV for Compound "
      "MAC calculation", (u8 *) VAR_12, VAR_13);
 FUNC_5(VAR_16, VAR_1, (u8 *) VAR_12, VAR_13,
    VAR_12->compound_mac);
 VAR_18 = FUNC_7(VAR_17, VAR_12->compound_mac, sizeof(VAR_17));
 FUNC_10(VAR_7, "EAP-FAST: Received Compound MAC",
      VAR_17, sizeof(VAR_17));
 FUNC_10(VAR_7, "EAP-FAST: Calculated Compound MAC",
      VAR_12->compound_mac, sizeof(VAR_17));
 if (VAR_18 != 0) {
  FUNC_11(VAR_6, "EAP-FAST: Compound MAC did not match");
  FUNC_8(VAR_12->compound_mac, VAR_17, sizeof(VAR_17));
  return ((void*)0);
 }






 VAR_19 = sizeof(struct eap_tlv_crypto_binding_tlv);
 VAR_14 = FUNC_12(VAR_19);
 if (VAR_14 == ((void*)0))
  return ((void*)0);

 if (!VAR_10->anon_provisioning && VAR_10->phase2_success &&
     FUNC_0(VAR_10) < 0) {
  FUNC_11(VAR_6, "EAP-FAST: Failed to generate MSK");
  VAR_11->methodState = VAR_3;
  VAR_11->decision = VAR_0;
  VAR_10->phase2_success = 0;
  FUNC_13(VAR_14);
  return ((void*)0);
 }

 if (!VAR_10->anon_provisioning && VAR_10->phase2_success) {
  FUNC_6(VAR_10->session_id);
  VAR_10->session_id = FUNC_4(
   VAR_9, &VAR_10->ssl, VAR_2, &VAR_10->id_len);
  if (VAR_10->session_id) {
   FUNC_10(VAR_4, "EAP-FAST: Derived Session-Id",
        VAR_10->session_id, VAR_10->id_len);
  } else {
   FUNC_11(VAR_5, "EAP-FAST: Failed to derive "
       "Session-Id");
   FUNC_13(VAR_14);
   return ((void*)0);
  }
 }

 VAR_15 = FUNC_14(VAR_14, sizeof(struct eap_tlv_crypto_binding_tlv));
 FUNC_3((struct eap_tlv_crypto_binding_tlv *)
          VAR_15, VAR_12, VAR_16);

 return VAR_14;
}
