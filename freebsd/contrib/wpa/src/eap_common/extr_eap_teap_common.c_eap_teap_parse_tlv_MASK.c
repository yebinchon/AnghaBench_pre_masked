
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct teap_tlv_hdr {int dummy; } ;
struct teap_tlv_crypto_binding {int dummy; } ;
struct eap_teap_tlv_parse {void* result; void** nak; size_t nak_len; void* iresult; void** eap_payload_tlv; size_t eap_payload_tlv_len; void** pac; size_t pac_len; int crypto_binding_len; void** basic_auth_req; size_t basic_auth_req_len; void** basic_auth_resp; size_t basic_auth_resp_len; struct teap_tlv_crypto_binding* crypto_binding; void* request_action; void* request_action_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* FUNC_0 (void**) ;
 int FUNC_1 (int ,char*,void**,size_t) ;
 int FUNC_2 (int ,char*,void**,size_t) ;
 int FUNC_3 (int ,char*,...) ;

int FUNC_4(struct eap_teap_tlv_parse *VAR_5,
         int VAR_6, u8 *VAR_7, size_t VAR_8)
{
 switch (VAR_6) {
 case 128:
  FUNC_1(VAR_2, "EAP-TEAP: Result TLV", VAR_7, VAR_8);
  if (VAR_5->result) {
   FUNC_3(VAR_1,
       "EAP-TEAP: More than one Result TLV in the message");
   VAR_5->result = VAR_3;
   return -2;
  }
  if (VAR_8 < 2) {
   FUNC_3(VAR_1, "EAP-TEAP: Too short Result TLV");
   VAR_5->result = VAR_3;
   break;
  }
  VAR_5->result = FUNC_0(VAR_7);
  if (VAR_5->result != VAR_4 &&
      VAR_5->result != VAR_3) {
   FUNC_3(VAR_1, "EAP-TEAP: Unknown Result %d",
       VAR_5->result);
   VAR_5->result = VAR_3;
  }
  FUNC_3(VAR_0, "EAP-TEAP: Result: %s",
      VAR_5->result == VAR_4 ?
      "Success" : "Failure");
  break;
 case 131:
  FUNC_1(VAR_2, "EAP-TEAP: NAK TLV", VAR_7, VAR_8);
  if (VAR_8 < 6) {
   FUNC_3(VAR_1, "EAP-TEAP: Too short NAK TLV");
   VAR_5->result = VAR_3;
   break;
  }
  VAR_5->nak = VAR_7;
  VAR_5->nak_len = VAR_8;
  break;
 case 129:
  FUNC_1(VAR_2, "EAP-TEAP: Request-Action TLV",
       VAR_7, VAR_8);
  if (VAR_5->request_action) {
   FUNC_3(VAR_1,
       "EAP-TEAP: More than one Request-Action TLV in the message");
   VAR_5->iresult = VAR_3;
   return -2;
  }
  if (VAR_8 < 2) {
   FUNC_3(VAR_1,
       "EAP-TEAP: Too short Request-Action TLV");
   VAR_5->iresult = VAR_3;
   break;
  }
  VAR_5->request_action_status = VAR_7[0];
  VAR_5->request_action = VAR_7[1];
  FUNC_3(VAR_0,
      "EAP-TEAP: Request-Action: Status=%u Action=%u",
      VAR_5->request_action_status, VAR_5->request_action);
  break;
 case 133:
  FUNC_1(VAR_2, "EAP-TEAP: EAP-Payload TLV",
       VAR_7, VAR_8);
  if (VAR_5->eap_payload_tlv) {
   FUNC_3(VAR_1,
       "EAP-TEAP: More than one EAP-Payload TLV in the message");
   VAR_5->iresult = VAR_3;
   return -2;
  }
  VAR_5->eap_payload_tlv = VAR_7;
  VAR_5->eap_payload_tlv_len = VAR_8;
  break;
 case 132:
  FUNC_1(VAR_2, "EAP-TEAP: Intermediate-Result TLV",
       VAR_7, VAR_8);
  if (VAR_8 < 2) {
   FUNC_3(VAR_1,
       "EAP-TEAP: Too short Intermediate-Result TLV");
   VAR_5->iresult = VAR_3;
   break;
  }
  if (VAR_5->iresult) {
   FUNC_3(VAR_1,
       "EAP-TEAP: More than one Intermediate-Result TLV in the message");
   VAR_5->iresult = VAR_3;
   return -2;
  }
  VAR_5->iresult = FUNC_0(VAR_7);
  if (VAR_5->iresult != VAR_4 &&
      VAR_5->iresult != VAR_3) {
   FUNC_3(VAR_1,
       "EAP-TEAP: Unknown Intermediate Result %d",
       VAR_5->iresult);
   VAR_5->iresult = VAR_3;
  }
  FUNC_3(VAR_0, "EAP-TEAP: Intermediate Result: %s",
      VAR_5->iresult == VAR_4 ?
      "Success" : "Failure");
  break;
 case 130:
  FUNC_1(VAR_2, "EAP-TEAP: PAC TLV", VAR_7, VAR_8);
  if (VAR_5->pac) {
   FUNC_3(VAR_1,
       "EAP-TEAP: More than one PAC TLV in the message");
   VAR_5->iresult = VAR_3;
   return -2;
  }
  VAR_5->pac = VAR_7;
  VAR_5->pac_len = VAR_8;
  break;
 case 134:
  FUNC_1(VAR_2, "EAP-TEAP: Crypto-Binding TLV",
       VAR_7, VAR_8);
  if (VAR_5->crypto_binding) {
   FUNC_3(VAR_1,
       "EAP-TEAP: More than one Crypto-Binding TLV in the message");
   VAR_5->iresult = VAR_3;
   return -2;
  }
  VAR_5->crypto_binding_len = sizeof(struct teap_tlv_hdr) + VAR_8;
  if (VAR_5->crypto_binding_len < sizeof(*VAR_5->crypto_binding)) {
   FUNC_3(VAR_1,
       "EAP-TEAP: Too short Crypto-Binding TLV");
   VAR_5->iresult = VAR_3;
   return -2;
  }
  VAR_5->crypto_binding = (struct teap_tlv_crypto_binding *)
   (VAR_7 - sizeof(struct teap_tlv_hdr));
  break;
 case 136:
  FUNC_2(VAR_2,
      "EAP-TEAP: Basic-Password-Auth-Req TLV",
      VAR_7, VAR_8);
  if (VAR_5->basic_auth_req) {
   FUNC_3(VAR_1,
       "EAP-TEAP: More than one Basic-Password-Auth-Req TLV in the message");
   VAR_5->iresult = VAR_3;
   return -2;
  }
  VAR_5->basic_auth_req = VAR_7;
  VAR_5->basic_auth_req_len = VAR_8;
  break;
 case 135:
  FUNC_2(VAR_2,
      "EAP-TEAP: Basic-Password-Auth-Resp TLV",
      VAR_7, VAR_8);
  if (VAR_5->basic_auth_resp) {
   FUNC_3(VAR_1,
       "EAP-TEAP: More than one Basic-Password-Auth-Resp TLV in the message");
   VAR_5->iresult = VAR_3;
   return -2;
  }
  VAR_5->basic_auth_resp = VAR_7;
  VAR_5->basic_auth_resp_len = VAR_8;
  break;
 default:

  return -1;
 }

 return 0;
}
