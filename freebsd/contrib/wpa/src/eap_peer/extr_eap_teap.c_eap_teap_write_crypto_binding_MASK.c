
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct teap_tlv_hdr {int dummy; } ;
struct teap_tlv_crypto_binding {int subtype; int msk_compound_mac; int emsk_compound_mac; int nonce; int received_version; int version; void* length; void* tlv_type; } ;
struct eap_teap_data {int peer_outer_tlvs; int server_outer_tlvs; int tls_cs; int received_version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ,struct teap_tlv_crypto_binding*,int ,int ,int const*,int ) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,char*,int ,int) ;
 int FUNC_6 (int ,char*,int ,int ,int,int) ;

__attribute__((used)) static int FUNC_7(
 struct eap_teap_data *VAR_9,
 struct teap_tlv_crypto_binding *VAR_10,
 const struct teap_tlv_crypto_binding *VAR_11,
 const u8 *VAR_12, const u8 *VAR_13)
{
 u8 VAR_14, VAR_15;

 VAR_10->tlv_type = FUNC_1(VAR_8 |
           VAR_7);
 VAR_10->length = FUNC_1(sizeof(*VAR_10) -
         sizeof(struct teap_tlv_hdr));
 VAR_10->version = VAR_1;
 VAR_10->received_version = VAR_9->received_version;


 VAR_15 = VAR_13 ? VAR_4 :
  VAR_5;
 VAR_14 = VAR_6;
 VAR_10->subtype = (VAR_15 << 4) | VAR_14;
 FUNC_3(VAR_10->nonce, VAR_11->nonce, sizeof(VAR_11->nonce));
 FUNC_2(VAR_10->nonce, sizeof(VAR_10->nonce));
 FUNC_4(VAR_10->emsk_compound_mac, 0, VAR_0);
 FUNC_4(VAR_10->msk_compound_mac, 0, VAR_0);

 if (FUNC_0(VAR_9->tls_cs, VAR_10, VAR_9->server_outer_tlvs,
      VAR_9->peer_outer_tlvs, VAR_12,
      VAR_10->msk_compound_mac) < 0)
  return -1;
 if (VAR_13 &&
     FUNC_0(VAR_9->tls_cs, VAR_10, VAR_9->server_outer_tlvs,
      VAR_9->peer_outer_tlvs, VAR_13,
      VAR_10->emsk_compound_mac) < 0)
  return -1;

 FUNC_6(VAR_2,
     "EAP-TEAP: Reply Crypto-Binding TLV: Version %u Received Version %u Flags %u SubType %u",
     VAR_10->version, VAR_10->received_version, VAR_15, VAR_14);
 FUNC_5(VAR_3, "EAP-TEAP: Nonce",
      VAR_10->nonce, sizeof(VAR_10->nonce));
 FUNC_5(VAR_3, "EAP-TEAP: EMSK Compound MAC",
      VAR_10->emsk_compound_mac, sizeof(VAR_10->emsk_compound_mac));
 FUNC_5(VAR_3, "EAP-TEAP: MSK Compound MAC",
      VAR_10->msk_compound_mac, sizeof(VAR_10->msk_compound_mac));

 return 0;
}
