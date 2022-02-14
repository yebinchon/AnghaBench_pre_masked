
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct teap_tlv_hdr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct wpabuf*,int,struct wpabuf*) ;
 int FUNC_1 (int ,char*) ;
 struct wpabuf* FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct wpabuf*) ;
 scalar_t__ FUNC_4 (struct wpabuf*) ;

struct wpabuf * FUNC_5(struct wpabuf *VAR_4)
{
 struct wpabuf *VAR_5;

 if (!VAR_4)
  return ((void*)0);


 FUNC_1(VAR_0, "EAP-TEAP: Add EAP-Payload TLV");
 VAR_5 = FUNC_2(sizeof(struct teap_tlv_hdr) + FUNC_4(VAR_4));
 if (!VAR_5) {
  FUNC_1(VAR_1,
      "EAP-TEAP: Failed to allocate memory for TLV encapsulation");
  FUNC_3(VAR_4);
  return ((void*)0);
 }
 FUNC_0(VAR_5, VAR_3 | VAR_2, VAR_4);
 FUNC_3(VAR_4);



 return VAR_5;
}
