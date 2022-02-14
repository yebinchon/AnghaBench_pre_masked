
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_tlv_crypto_binding_tlv {scalar_t__ version; scalar_t__ received_version; scalar_t__ subtype; int compound_mac; int nonce; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int ,int) ;
 int FUNC_1 (int ,char*,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_2(
 struct eap_tlv_crypto_binding_tlv *VAR_5)
{
 FUNC_1(VAR_2, "EAP-FAST: Crypto-Binding TLV: Version %d "
     "Received Version %d SubType %d",
     VAR_5->version, VAR_5->received_version, VAR_5->subtype);
 FUNC_0(VAR_4, "EAP-FAST: NONCE",
      VAR_5->nonce, sizeof(VAR_5->nonce));
 FUNC_0(VAR_4, "EAP-FAST: Compound MAC",
      VAR_5->compound_mac, sizeof(VAR_5->compound_mac));

 if (VAR_5->version != VAR_0 ||
     VAR_5->received_version != VAR_0 ||
     VAR_5->subtype != VAR_1) {
  FUNC_1(VAR_3, "EAP-FAST: Invalid version/subtype in "
      "Crypto-Binding TLV: Version %d "
      "Received Version %d SubType %d",
      VAR_5->version, VAR_5->received_version,
      VAR_5->subtype);
  return -1;
 }

 return 0;
}
