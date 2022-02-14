
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct eap_tlv_intermediate_result_tlv {void* status; void* length; void* tlv_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*,int) ;
 struct wpabuf* FUNC_2 (int) ;
 struct eap_tlv_intermediate_result_tlv* FUNC_3 (struct wpabuf*,int) ;

__attribute__((used)) static struct wpabuf * FUNC_4(int VAR_4, int VAR_5)
{
 struct wpabuf *VAR_6;
 struct eap_tlv_intermediate_result_tlv *VAR_7;
 VAR_6 = FUNC_2(sizeof(*VAR_7));
 if (VAR_6 == ((void*)0))
  return ((void*)0);
 FUNC_1(VAR_3, "EAP-FAST: Add %sResult TLV(status=%d)",
     VAR_5 ? "Intermediate " : "", VAR_4);
 VAR_7 = FUNC_3(VAR_6, sizeof(*VAR_7));
 VAR_7->tlv_type = FUNC_0(VAR_2 |
     (VAR_5 ?
      VAR_0 :
      VAR_1));
 VAR_7->length = FUNC_0(2);
 VAR_7->status = FUNC_0(VAR_4);
 return VAR_6;
}
