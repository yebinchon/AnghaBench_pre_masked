
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct eap_tlv_request_action_tlv {void* action; void* length; void* tlv_type; } ;
struct eap_tlv_pac_type_tlv {void* pac_type; void* length; void* tlv_type; } ;
struct eap_tlv_hdr {void* length; void* tlv_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int) ;

__attribute__((used)) static u8 * FUNC_1(u8 *VAR_4, u16 VAR_5)
{
 struct eap_tlv_hdr *VAR_6;
 struct eap_tlv_request_action_tlv *VAR_7;
 struct eap_tlv_pac_type_tlv *VAR_8;

 VAR_7 = (struct eap_tlv_request_action_tlv *) VAR_4;
 VAR_7->tlv_type = FUNC_0(VAR_2);
 VAR_7->length = FUNC_0(2);
 VAR_7->action = FUNC_0(VAR_0);

 VAR_6 = (struct eap_tlv_hdr *) (VAR_7 + 1);
 VAR_6->tlv_type = FUNC_0(VAR_1);
 VAR_6->length = FUNC_0(sizeof(*VAR_8));

 VAR_8 = (struct eap_tlv_pac_type_tlv *) (VAR_6 + 1);
 VAR_8->tlv_type = FUNC_0(VAR_3);
 VAR_8->length = FUNC_0(2);
 VAR_8->pac_type = FUNC_0(VAR_5);

 return (u8 *) (VAR_8 + 1);
}
