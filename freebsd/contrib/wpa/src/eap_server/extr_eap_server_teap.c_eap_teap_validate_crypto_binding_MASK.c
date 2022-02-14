
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct teap_tlv_crypto_binding {int subtype; scalar_t__ version; scalar_t__ received_version; int* nonce; int* emsk_compound_mac; int* msk_compound_mac; } ;
struct eap_teap_data {scalar_t__ peer_version; int* crypto_binding_nonce; scalar_t__ cmk_emsk_available; int cmk_emsk; int peer_outer_tlvs; int server_outer_tlvs; int tls_cs; int cmk_msk; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int ,struct teap_tlv_crypto_binding const*,int ,int ,int ,int*) ;
 scalar_t__ FUNC_1 (int*,int*,int) ;
 int FUNC_2 (int ,char*,int*,int) ;
 int FUNC_3 (int ,char*,...) ;

__attribute__((used)) static int FUNC_4(
 struct eap_teap_data *VAR_10, const struct teap_tlv_crypto_binding *VAR_11,
 size_t VAR_12)
{
 u8 VAR_13, VAR_14;

 VAR_14 = VAR_11->subtype & 0x0f;
 VAR_13 = VAR_11->subtype >> 4;

 FUNC_3(VAR_3,
     "EAP-TEAP: Reply Crypto-Binding TLV: Version %u Received Version %u Flags %u Sub-Type %u",
     VAR_11->version, VAR_11->received_version, VAR_13, VAR_14);
 FUNC_2(VAR_5, "EAP-TEAP: Nonce",
      VAR_11->nonce, sizeof(VAR_11->nonce));
 FUNC_2(VAR_5, "EAP-TEAP: EMSK Compound MAC",
      VAR_11->emsk_compound_mac, sizeof(VAR_11->emsk_compound_mac));
 FUNC_2(VAR_5, "EAP-TEAP: MSK Compound MAC",
      VAR_11->msk_compound_mac, sizeof(VAR_11->msk_compound_mac));

 if (VAR_11->version != VAR_2 ||
     VAR_11->received_version != VAR_10->peer_version) {
  FUNC_3(VAR_3,
      "EAP-TEAP: Unexpected version in Crypto-Binding: Version %u Received Version %u",
      VAR_11->version, VAR_11->received_version);
  return -1;
 }

 if (VAR_13 < 1 || VAR_13 > 3) {
  FUNC_3(VAR_3,
      "EAP-TEAP: Unexpected Flags in Crypto-Binding: %u",
      VAR_13);
  return -1;
 }

 if (VAR_14 != VAR_9) {
  FUNC_3(VAR_3,
      "EAP-TEAP: Unexpected Sub-Type in Crypto-Binding: %u",
      VAR_14);
  return -1;
 }

 if (FUNC_1(VAR_10->crypto_binding_nonce, VAR_11->nonce,
       VAR_1 - 1) != 0 ||
     (VAR_10->crypto_binding_nonce[VAR_1 - 1] | 1) !=
     VAR_11->nonce[VAR_1 - 1]) {
  FUNC_3(VAR_3,
      "EAP-TEAP: Invalid Nonce in Crypto-Binding");
  return -1;
 }

 if (VAR_13 == VAR_8 ||
     VAR_13 == VAR_6) {
  u8 VAR_15[VAR_0];

  if (FUNC_0(VAR_10->tls_cs, VAR_11,
       VAR_10->server_outer_tlvs,
       VAR_10->peer_outer_tlvs, VAR_10->cmk_msk,
       VAR_15) < 0)
   return -1;
  if (FUNC_1(VAR_15, VAR_11->msk_compound_mac,
        VAR_0) != 0) {
   FUNC_2(VAR_3,
        "EAP-TEAP: Calculated MSK Compound MAC",
        VAR_15,
        VAR_0);
   FUNC_3(VAR_4,
       "EAP-TEAP: MSK Compound MAC did not match");
   return -1;
  }
 }

 if ((VAR_13 == VAR_7 ||
      VAR_13 == VAR_6) &&
     VAR_10->cmk_emsk_available) {
  u8 VAR_16[VAR_0];

  if (FUNC_0(VAR_10->tls_cs, VAR_11,
       VAR_10->server_outer_tlvs,
       VAR_10->peer_outer_tlvs, VAR_10->cmk_emsk,
       VAR_16) < 0)
   return -1;
  if (FUNC_1(VAR_16, VAR_11->emsk_compound_mac,
        VAR_0) != 0) {
   FUNC_2(VAR_3,
        "EAP-TEAP: Calculated EMSK Compound MAC",
        VAR_16,
        VAR_0);
   FUNC_3(VAR_4,
       "EAP-TEAP: EMSK Compound MAC did not match");
   return -1;
  }
 }

 if (VAR_13 == VAR_7 &&
     !VAR_10->cmk_emsk_available) {
  FUNC_3(VAR_4,
      "EAP-TEAP: Peer included only EMSK Compound MAC, but no locally generated inner EAP EMSK to validate this");
  return -1;
 }

 return 0;
}
