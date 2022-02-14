
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eap_tlv_hdr {int dummy; } ;
struct eap_tlv_crypto_binding_tlv {int compound_mac; int nonce; int subtype; int received_version; int version; void* length; void* tlv_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int const*,int ,int *,int,int ) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,char*,int ,int) ;
 int FUNC_5 (int ,char*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_6(
 struct eap_tlv_crypto_binding_tlv *VAR_7,
 struct eap_tlv_crypto_binding_tlv *VAR_8, const u8 *VAR_9)
{
 VAR_7->tlv_type = FUNC_1(VAR_4 |
           VAR_3);
 VAR_7->length = FUNC_1(sizeof(*VAR_7) -
         sizeof(struct eap_tlv_hdr));
 VAR_7->version = VAR_1;
 VAR_7->received_version = VAR_8->version;
 VAR_7->subtype = VAR_2;
 FUNC_3(VAR_7->nonce, VAR_8->nonce, sizeof(VAR_8->nonce));
 FUNC_2(VAR_7->nonce, sizeof(VAR_7->nonce));
 FUNC_0(VAR_9, VAR_0, (u8 *) VAR_7, sizeof(*VAR_7),
    VAR_7->compound_mac);

 FUNC_5(VAR_5, "EAP-FAST: Reply Crypto-Binding TLV: Version %d "
     "Received Version %d SubType %d",
     VAR_7->version, VAR_7->received_version, VAR_7->subtype);
 FUNC_4(VAR_6, "EAP-FAST: NONCE",
      VAR_7->nonce, sizeof(VAR_7->nonce));
 FUNC_4(VAR_6, "EAP-FAST: Compound MAC",
      VAR_7->compound_mac, sizeof(VAR_7->compound_mac));
}
