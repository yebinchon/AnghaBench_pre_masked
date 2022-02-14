
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct pac_tlv_hdr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct wpabuf*,int,struct wpabuf*) ;
 int FUNC_1 (int ,char*) ;
 struct wpabuf* FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct wpabuf*) ;
 scalar_t__ FUNC_4 (struct wpabuf*) ;

struct wpabuf * FUNC_5(struct wpabuf *VAR_3)
{
 struct wpabuf *VAR_4;

 if (VAR_3 == ((void*)0))
  return ((void*)0);


 FUNC_1(VAR_2, "EAP-FAST: Add EAP-Payload TLV");
 VAR_4 = FUNC_2(sizeof(struct pac_tlv_hdr) + FUNC_4(VAR_3));
 if (VAR_4 == ((void*)0)) {
  FUNC_1(VAR_2, "EAP-FAST: Failed to allocate memory "
      "for TLV encapsulation");
  FUNC_3(VAR_3);
  return ((void*)0);
 }
 FUNC_0(VAR_4,
        VAR_1 | VAR_0,
        VAR_3);
 FUNC_3(VAR_3);
 return VAR_4;
}
