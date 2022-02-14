
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eap_tlv_hdr {int dummy; } ;
struct eap_tlv_crypto_binding_tlv {int dummy; } ;
struct eap_fast_tlv_parse {void* iresult; size_t eap_payload_tlv_len; void* result; int crypto_binding_len; size_t pac_len; int * pac; void* request_action; struct eap_tlv_crypto_binding_tlv* crypto_binding; int * eap_payload_tlv; } ;







 void* VAR_0 ;
 void* VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int *,size_t) ;
 int FUNC_2 (int ,char*,...) ;

int FUNC_3(struct eap_fast_tlv_parse *VAR_4,
         int VAR_5, u8 *VAR_6, size_t VAR_7)
{
 switch (VAR_5) {
 case 132:
  FUNC_1(VAR_3, "EAP-FAST: EAP-Payload TLV",
       VAR_6, VAR_7);
  if (VAR_4->eap_payload_tlv) {
   FUNC_2(VAR_2, "EAP-FAST: More than one "
       "EAP-Payload TLV in the message");
   VAR_4->iresult = VAR_0;
   return -2;
  }
  VAR_4->eap_payload_tlv = VAR_6;
  VAR_4->eap_payload_tlv_len = VAR_7;
  break;
 case 128:
  FUNC_1(VAR_3, "EAP-FAST: Result TLV", VAR_6, VAR_7);
  if (VAR_4->result) {
   FUNC_2(VAR_2, "EAP-FAST: More than one "
       "Result TLV in the message");
   VAR_4->result = VAR_0;
   return -2;
  }
  if (VAR_7 < 2) {
   FUNC_2(VAR_2, "EAP-FAST: Too short "
       "Result TLV");
   VAR_4->result = VAR_0;
   break;
  }
  VAR_4->result = FUNC_0(VAR_6);
  if (VAR_4->result != VAR_1 &&
      VAR_4->result != VAR_0) {
   FUNC_2(VAR_2, "EAP-FAST: Unknown Result %d",
       VAR_4->result);
   VAR_4->result = VAR_0;
  }
  FUNC_2(VAR_2, "EAP-FAST: Result: %s",
      VAR_4->result == VAR_1 ?
      "Success" : "Failure");
  break;
 case 131:
  FUNC_1(VAR_3, "EAP-FAST: Intermediate Result TLV",
       VAR_6, VAR_7);
  if (VAR_7 < 2) {
   FUNC_2(VAR_2, "EAP-FAST: Too short "
       "Intermediate-Result TLV");
   VAR_4->iresult = VAR_0;
   break;
  }
  if (VAR_4->iresult) {
   FUNC_2(VAR_2, "EAP-FAST: More than one "
       "Intermediate-Result TLV in the message");
   VAR_4->iresult = VAR_0;
   return -2;
  }
  VAR_4->iresult = FUNC_0(VAR_6);
  if (VAR_4->iresult != VAR_1 &&
      VAR_4->iresult != VAR_0) {
   FUNC_2(VAR_2, "EAP-FAST: Unknown Intermediate "
       "Result %d", VAR_4->iresult);
   VAR_4->iresult = VAR_0;
  }
  FUNC_2(VAR_2, "EAP-FAST: Intermediate Result: %s",
      VAR_4->iresult == VAR_1 ?
      "Success" : "Failure");
  break;
 case 133:
  FUNC_1(VAR_3, "EAP-FAST: Crypto-Binding TLV",
       VAR_6, VAR_7);
  if (VAR_4->crypto_binding) {
   FUNC_2(VAR_2, "EAP-FAST: More than one "
       "Crypto-Binding TLV in the message");
   VAR_4->iresult = VAR_0;
   return -2;
  }
  VAR_4->crypto_binding_len = sizeof(struct eap_tlv_hdr) + VAR_7;
  if (VAR_4->crypto_binding_len < sizeof(*VAR_4->crypto_binding)) {
   FUNC_2(VAR_2, "EAP-FAST: Too short "
       "Crypto-Binding TLV");
   VAR_4->iresult = VAR_0;
   return -2;
  }
  VAR_4->crypto_binding = (struct eap_tlv_crypto_binding_tlv *)
   (VAR_6 - sizeof(struct eap_tlv_hdr));
  break;
 case 129:
  FUNC_1(VAR_3, "EAP-FAST: Request-Action TLV",
       VAR_6, VAR_7);
  if (VAR_4->request_action) {
   FUNC_2(VAR_2, "EAP-FAST: More than one "
       "Request-Action TLV in the message");
   VAR_4->iresult = VAR_0;
   return -2;
  }
  if (VAR_7 < 2) {
   FUNC_2(VAR_2, "EAP-FAST: Too short "
       "Request-Action TLV");
   VAR_4->iresult = VAR_0;
   break;
  }
  VAR_4->request_action = FUNC_0(VAR_6);
  FUNC_2(VAR_2, "EAP-FAST: Request-Action: %d",
      VAR_4->request_action);
  break;
 case 130:
  FUNC_1(VAR_3, "EAP-FAST: PAC TLV", VAR_6, VAR_7);
  if (VAR_4->pac) {
   FUNC_2(VAR_2, "EAP-FAST: More than one "
       "PAC TLV in the message");
   VAR_4->iresult = VAR_0;
   return -2;
  }
  VAR_4->pac = VAR_6;
  VAR_4->pac_len = VAR_7;
  break;
 default:

  return -1;
 }

 return 0;
}
