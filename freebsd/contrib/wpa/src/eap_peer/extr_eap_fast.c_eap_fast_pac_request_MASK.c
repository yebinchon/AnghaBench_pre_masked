
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_tlv_request_action_tlv {int dummy; } ;
struct eap_tlv_pac_type_tlv {int dummy; } ;
struct eap_tlv_hdr {int dummy; } ;


 int VAR_0 ;
 int * FUNC_0 (int *,int ) ;
 struct wpabuf* FUNC_1 (int) ;
 int * FUNC_2 (struct wpabuf*,int) ;

__attribute__((used)) static struct wpabuf * FUNC_3(void)
{
 struct wpabuf *VAR_1;
 u8 *VAR_2, *VAR_3;

 VAR_1 = FUNC_1(sizeof(struct eap_tlv_hdr) +
      sizeof(struct eap_tlv_request_action_tlv) +
      sizeof(struct eap_tlv_pac_type_tlv));
 if (VAR_1 == ((void*)0))
  return ((void*)0);

 VAR_2 = FUNC_2(VAR_1, 0);
 VAR_3 = FUNC_0(VAR_2, VAR_0);
 FUNC_2(VAR_1, VAR_3 - VAR_2);
 return VAR_1;
}
