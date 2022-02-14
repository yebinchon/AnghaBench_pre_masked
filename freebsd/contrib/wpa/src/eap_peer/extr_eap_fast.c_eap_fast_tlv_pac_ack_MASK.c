
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct eap_tlv_result_tlv {int dummy; } ;
struct eap_tlv_pac_ack_tlv {void* result; void* pac_len; void* pac_type; void* length; void* tlv_type; } ;
struct eap_tlv_hdr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 struct wpabuf* FUNC_2 (int) ;
 struct eap_tlv_pac_ack_tlv* FUNC_3 (struct wpabuf*,int) ;

__attribute__((used)) static struct wpabuf * FUNC_4(void)
{
 struct wpabuf *VAR_5;
 struct eap_tlv_result_tlv *VAR_6;
 struct eap_tlv_pac_ack_tlv *VAR_7;

 VAR_5 = FUNC_2(sizeof(*VAR_6) + sizeof(*VAR_7));
 if (VAR_5 == ((void*)0))
  return ((void*)0);

 FUNC_1(VAR_3, "EAP-FAST: Add PAC TLV (ack)");
 VAR_7 = FUNC_3(VAR_5, sizeof(*VAR_7));
 VAR_7->tlv_type = FUNC_0(VAR_0 |
         VAR_2);
 VAR_7->length = FUNC_0(sizeof(*VAR_7) - sizeof(struct eap_tlv_hdr));
 VAR_7->pac_type = FUNC_0(VAR_4);
 VAR_7->pac_len = FUNC_0(2);
 VAR_7->result = FUNC_0(VAR_1);

 return VAR_5;
}
