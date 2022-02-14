
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eap_teap_data {int dummy; } ;
struct eap_sm {int dummy; } ;
struct eap_hdr {long code; int identifier; int length; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (struct eap_sm*,struct eap_teap_data*,int *,size_t) ;
 int FUNC_2 (struct eap_teap_data*,int ) ;
 int FUNC_3 (int ,char*,unsigned long,...) ;

__attribute__((used)) static void FUNC_4(struct eap_sm *VAR_3,
     struct eap_teap_data *VAR_4,
     u8 *VAR_5, size_t VAR_6)
{
 struct eap_hdr *VAR_7;
 size_t VAR_8;

 VAR_7 = (struct eap_hdr *) VAR_5;
 if (VAR_6 < (int) sizeof(*VAR_7)) {
  FUNC_3(VAR_1,
      "EAP-TEAP: Too short Phase 2 EAP frame (len=%lu)",
      (unsigned long) VAR_6);
  FUNC_2(VAR_4, VAR_2);
  return;
 }
 VAR_8 = FUNC_0(VAR_7->length);
 if (VAR_8 > VAR_6) {
  FUNC_3(VAR_1,
      "EAP-TEAP: Length mismatch in Phase 2 EAP frame (len=%lu hdr->length=%lu)",
      (unsigned long) VAR_6, (unsigned long) VAR_8);
  FUNC_2(VAR_4, VAR_2);
  return;
 }
 FUNC_3(VAR_0,
     "EAP-TEAP: Received Phase 2: code=%d identifier=%d length=%lu",
     VAR_7->code, VAR_7->identifier,
     (unsigned long) VAR_8);
 switch (VAR_7->code) {
 case 128:
  FUNC_1(VAR_3, VAR_4, (u8 *) VAR_7, VAR_8);
  break;
 default:
  FUNC_3(VAR_1,
      "EAP-TEAP: Unexpected code=%d in Phase 2 EAP header",
      VAR_7->code);
  break;
 }
}
