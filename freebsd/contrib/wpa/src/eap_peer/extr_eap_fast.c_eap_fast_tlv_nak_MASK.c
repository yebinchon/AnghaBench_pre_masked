
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct eap_tlv_nak_tlv {void* nak_type; int vendor_id; void* length; void* tlv_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int) ;
 struct wpabuf* FUNC_2 (int) ;
 struct eap_tlv_nak_tlv* FUNC_3 (struct wpabuf*,int) ;

__attribute__((used)) static struct wpabuf * FUNC_4(int VAR_2, int VAR_3)
{
 struct wpabuf *VAR_4;
 struct eap_tlv_nak_tlv *VAR_5;
 VAR_4 = FUNC_2(sizeof(*VAR_5));
 if (VAR_4 == ((void*)0))
  return ((void*)0);
 VAR_5 = FUNC_3(VAR_4, sizeof(*VAR_5));
 VAR_5->tlv_type = FUNC_0(VAR_1 | VAR_0);
 VAR_5->length = FUNC_0(6);
 VAR_5->vendor_id = FUNC_1(VAR_2);
 VAR_5->nak_type = FUNC_0(VAR_3);
 return VAR_4;
}
