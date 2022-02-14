
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eap_sm {int dummy; } ;
struct eap_hdr {long code; int identifier; int length; } ;
struct eap_fast_data {int dummy; } ;



 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (struct eap_sm*,struct eap_fast_data*,int *,size_t) ;
 int FUNC_2 (struct eap_sm*,struct eap_fast_data*) ;
 int FUNC_3 (int ,char*,unsigned long,...) ;

__attribute__((used)) static void FUNC_4(struct eap_sm *VAR_2,
     struct eap_fast_data *VAR_3,
     u8 *VAR_4, size_t VAR_5)
{
 struct eap_hdr *VAR_6;
 size_t VAR_7;

 VAR_6 = (struct eap_hdr *) VAR_4;
 if (VAR_5 < (int) sizeof(*VAR_6)) {
  FUNC_3(VAR_1, "EAP-FAST: Too short Phase 2 "
      "EAP frame (len=%lu)", (unsigned long) VAR_5);
  FUNC_2(VAR_2, VAR_3);
  return;
 }
 VAR_7 = FUNC_0(VAR_6->length);
 if (VAR_7 > VAR_5) {
  FUNC_3(VAR_1, "EAP-FAST: Length mismatch in "
      "Phase 2 EAP frame (len=%lu hdr->length=%lu)",
      (unsigned long) VAR_5, (unsigned long) VAR_7);
  FUNC_2(VAR_2, VAR_3);
  return;
 }
 FUNC_3(VAR_0, "EAP-FAST: Received Phase 2: code=%d "
     "identifier=%d length=%lu", VAR_6->code, VAR_6->identifier,
     (unsigned long) VAR_7);
 switch (VAR_6->code) {
 case 128:
  FUNC_1(VAR_2, VAR_3, (u8 *) VAR_6, VAR_7);
  break;
 default:
  FUNC_3(VAR_1, "EAP-FAST: Unexpected code=%d in "
      "Phase 2 EAP header", VAR_6->code);
  break;
 }
}
