
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct teap_tlv_request_action {int action; int status; void* length; void* tlv_type; } ;
struct teap_tlv_hdr {void* length; void* tlv_type; } ;
struct teap_attr_pac_type {void* pac_type; void* length; void* type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 struct wpabuf* FUNC_2 (int) ;
 void* FUNC_3 (struct wpabuf*,int) ;

__attribute__((used)) static struct wpabuf * FUNC_4(void)
{
 struct wpabuf *VAR_7;
 struct teap_tlv_request_action *VAR_8;
 struct teap_tlv_hdr *VAR_9;
 struct teap_attr_pac_type *VAR_10;

 VAR_7 = FUNC_2(sizeof(*VAR_8) + sizeof(*VAR_9) + sizeof(*VAR_10));
 if (!VAR_7)
  return ((void*)0);

 FUNC_1(VAR_0, "EAP-TEAP: Add Request Action TLV (Process TLV)");
 VAR_8 = FUNC_3(VAR_7, sizeof(*VAR_8));
 VAR_8->tlv_type = FUNC_0(VAR_6);
 VAR_8->length = FUNC_0(2);
 VAR_8->status = VAR_4;
 VAR_8->action = VAR_3;

 FUNC_1(VAR_0, "EAP-TEAP: Add PAC TLV (PAC-Type = Tunnel)");
 VAR_9 = FUNC_3(VAR_7, sizeof(*VAR_9));
 VAR_9->tlv_type = FUNC_0(VAR_5);
 VAR_9->length = FUNC_0(sizeof(*VAR_10));

 VAR_10 = FUNC_3(VAR_7, sizeof(*VAR_10));
 VAR_10->type = FUNC_0(VAR_1);
 VAR_10->length = FUNC_0(2);
 VAR_10->pac_type = FUNC_0(VAR_2);

 return VAR_7;
}
