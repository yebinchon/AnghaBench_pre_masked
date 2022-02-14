
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct teap_tlv_nak {void* nak_type; int vendor_id; void* length; void* tlv_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int,int) ;
 struct wpabuf* FUNC_3 (int) ;
 struct teap_tlv_nak* FUNC_4 (struct wpabuf*,int) ;

__attribute__((used)) static struct wpabuf * FUNC_5(int VAR_3, int VAR_4)
{
 struct wpabuf *VAR_5;
 struct teap_tlv_nak *VAR_6;

 FUNC_2(VAR_0,
     "EAP-TEAP: Add NAK TLV (Vendor-Id %u NAK-Type %u)",
     VAR_3, VAR_4);
 VAR_5 = FUNC_3(sizeof(*VAR_6));
 if (!VAR_5)
  return ((void*)0);
 VAR_6 = FUNC_4(VAR_5, sizeof(*VAR_6));
 VAR_6->tlv_type = FUNC_0(VAR_1 | VAR_2);
 VAR_6->length = FUNC_0(6);
 VAR_6->vendor_id = FUNC_1(VAR_3);
 VAR_6->nak_type = FUNC_0(VAR_4);
 return VAR_5;
}
