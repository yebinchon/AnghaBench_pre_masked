
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eap_tlv_crypto_binding_tlv {scalar_t__ version; scalar_t__ received_version; scalar_t__ subtype; int* nonce; int* compound_mac; } ;
struct eap_fast_data {int* crypto_binding_nonce; int cmk; } ;
typedef int cmac ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int*,size_t,int*) ;
 scalar_t__ FUNC_1 (int*,int*,int) ;
 int FUNC_2 (int*,int*,int) ;
 int FUNC_3 (int*,int ,int) ;
 int FUNC_4 (int ,char*,int*,int) ;
 int FUNC_5 (int ,char*,...) ;

__attribute__((used)) static int FUNC_6(
 struct eap_fast_data *VAR_7, struct eap_tlv_crypto_binding_tlv *VAR_8,
 size_t VAR_9)
{
 u8 VAR_10[VAR_6];

 FUNC_5(VAR_3, "EAP-FAST: Reply Crypto-Binding TLV: "
     "Version %d Received Version %d SubType %d",
     VAR_8->version, VAR_8->received_version, VAR_8->subtype);
 FUNC_4(VAR_5, "EAP-FAST: NONCE",
      VAR_8->nonce, sizeof(VAR_8->nonce));
 FUNC_4(VAR_5, "EAP-FAST: Compound MAC",
      VAR_8->compound_mac, sizeof(VAR_8->compound_mac));

 if (VAR_8->version != VAR_1 ||
     VAR_8->received_version != VAR_1) {
  FUNC_5(VAR_3, "EAP-FAST: Unexpected version "
      "in Crypto-Binding: version %d "
      "received_version %d", VAR_8->version,
      VAR_8->received_version);
  return -1;
 }

 if (VAR_8->subtype != VAR_2) {
  FUNC_5(VAR_3, "EAP-FAST: Unexpected subtype in "
      "Crypto-Binding: %d", VAR_8->subtype);
  return -1;
 }

 if (FUNC_1(VAR_7->crypto_binding_nonce, VAR_8->nonce, 31) != 0 ||
     (VAR_7->crypto_binding_nonce[31] | 1) != VAR_8->nonce[31]) {
  FUNC_5(VAR_3, "EAP-FAST: Invalid nonce in "
      "Crypto-Binding");
  return -1;
 }

 FUNC_2(VAR_10, VAR_8->compound_mac, sizeof(VAR_10));
 FUNC_3(VAR_8->compound_mac, 0, sizeof(VAR_10));
 FUNC_4(VAR_5, "EAP-FAST: Crypto-Binding TLV for "
      "Compound MAC calculation",
      (u8 *) VAR_8, VAR_9);
 FUNC_0(VAR_7->cmk, VAR_0, (u8 *) VAR_8, VAR_9,
    VAR_8->compound_mac);
 if (FUNC_1(VAR_10, VAR_8->compound_mac, sizeof(VAR_10)) != 0) {
  FUNC_4(VAR_5,
       "EAP-FAST: Calculated Compound MAC",
       VAR_8->compound_mac, sizeof(VAR_10));
  FUNC_5(VAR_4, "EAP-FAST: Compound MAC did not "
      "match");
  return -1;
 }

 return 0;
}
