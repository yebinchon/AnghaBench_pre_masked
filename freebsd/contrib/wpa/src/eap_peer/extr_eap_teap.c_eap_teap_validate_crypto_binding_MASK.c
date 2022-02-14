
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct teap_tlv_crypto_binding {int subtype; scalar_t__ version; scalar_t__ received_version; int* nonce; int* emsk_compound_mac; int* msk_compound_mac; } ;
struct eap_teap_data {scalar_t__ received_version; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int*,int) ;
 int FUNC_1 (int ,char*,...) ;

__attribute__((used)) static int
FUNC_2(struct eap_teap_data *VAR_6,
     const struct teap_tlv_crypto_binding *VAR_7)
{
 u8 VAR_8, VAR_9;

 VAR_9 = VAR_7->subtype & 0x0f;
 VAR_8 = VAR_7->subtype >> 4;

 FUNC_1(VAR_2,
     "EAP-TEAP: Crypto-Binding TLV: Version %u Received Version %u Flags %u Sub-Type %u",
     VAR_7->version, VAR_7->received_version, VAR_8, VAR_9);
 FUNC_0(VAR_4, "EAP-TEAP: Nonce",
      VAR_7->nonce, sizeof(VAR_7->nonce));
 FUNC_0(VAR_4, "EAP-TEAP: EMSK Compound MAC",
      VAR_7->emsk_compound_mac, sizeof(VAR_7->emsk_compound_mac));
 FUNC_0(VAR_4, "EAP-TEAP: MSK Compound MAC",
      VAR_7->msk_compound_mac, sizeof(VAR_7->msk_compound_mac));

 if (VAR_7->version != VAR_1 ||
     VAR_7->received_version != VAR_6->received_version ||
     VAR_9 != VAR_5 ||
     VAR_8 < 1 || VAR_8 > 3) {
  FUNC_1(VAR_3,
      "EAP-TEAP: Invalid Version/Flags/Sub-Type in Crypto-Binding TLV: Version %u Received Version %u Flags %u Sub-Type %u",
      VAR_7->version, VAR_7->received_version, VAR_8, VAR_9);
  return -1;
 }

 if (VAR_7->nonce[VAR_0 - 1] & 0x01) {
  FUNC_1(VAR_3,
      "EAP-TEAP: Invalid Crypto-Binding TLV Nonce in request");
  return -1;
 }

 return 0;
}
