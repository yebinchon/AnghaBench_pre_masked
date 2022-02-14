
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_teap_data {int dummy; } ;
struct eap_sm {int dummy; } ;
struct eap_method_ret {int dummy; } ;
struct eap_hdr {int code; int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct eap_sm*,struct eap_teap_data*,struct eap_method_ret*,struct eap_hdr*,struct wpabuf**) ;
 struct wpabuf* FUNC_2 (struct wpabuf*) ;
 int FUNC_3 (int ,char*,...) ;

__attribute__((used)) static struct wpabuf * FUNC_4(
 struct eap_sm *VAR_3, struct eap_teap_data *VAR_4,
 struct eap_method_ret *VAR_5,
 u8 *VAR_6, size_t VAR_7)
{
 struct eap_hdr *VAR_8;
 struct wpabuf *VAR_9 = ((void*)0);

 if (VAR_7 < sizeof(*VAR_8)) {
  FUNC_3(VAR_1,
      "EAP-TEAP: too short EAP Payload TLV (len=%lu)",
      (unsigned long) VAR_7);
  return ((void*)0);
 }

 VAR_8 = (struct eap_hdr *) VAR_6;
 if (FUNC_0(VAR_8->length) > VAR_7) {
  FUNC_3(VAR_1,
      "EAP-TEAP: EAP packet overflow in EAP Payload TLV");
  return ((void*)0);
 }

 if (VAR_8->code != VAR_0) {
  FUNC_3(VAR_2,
      "EAP-TEAP: Unexpected code=%d in Phase 2 EAP header",
      VAR_8->code);
  return ((void*)0);
 }

 if (FUNC_1(VAR_3, VAR_4, VAR_5, VAR_8, &VAR_9)) {
  FUNC_3(VAR_2,
      "EAP-TEAP: Phase 2 Request processing failed");
  return ((void*)0);
 }

 return FUNC_2(VAR_9);
}
