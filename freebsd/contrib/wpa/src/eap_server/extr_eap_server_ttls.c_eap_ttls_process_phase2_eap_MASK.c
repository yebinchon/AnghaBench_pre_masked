
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eap_ttls_data {scalar_t__ state; } ;
struct eap_sm {int dummy; } ;
struct eap_hdr {long code; int identifier; int length; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct eap_sm*,struct eap_ttls_data*,int ) ;
 int FUNC_2 (struct eap_sm*,struct eap_ttls_data*,int *,size_t) ;
 int FUNC_3 (int ,char*,...) ;

__attribute__((used)) static void FUNC_4(struct eap_sm *VAR_4,
     struct eap_ttls_data *VAR_5,
     const u8 *VAR_6, size_t VAR_7)
{
 struct eap_hdr *VAR_8;
 size_t VAR_9;

 if (VAR_5->state == VAR_3) {
  FUNC_3(VAR_1, "EAP-TTLS/EAP: initializing Phase 2");
  if (FUNC_1(VAR_4, VAR_5, VAR_0) < 0)
  {
   FUNC_3(VAR_1, "EAP-TTLS/EAP: failed to "
       "initialize EAP-Identity");
   return;
  }
 }

 if (VAR_7 < sizeof(*VAR_8)) {
  FUNC_3(VAR_1, "EAP-TTLS/EAP: too short Phase 2 EAP "
      "packet (len=%lu)", (unsigned long) VAR_7);
  return;
 }

 VAR_8 = (struct eap_hdr *) VAR_6;
 VAR_9 = FUNC_0(VAR_8->length);
 FUNC_3(VAR_1, "EAP-TTLS/EAP: received Phase 2 EAP: code=%d "
     "identifier=%d length=%lu", VAR_8->code, VAR_8->identifier,
     (unsigned long) VAR_9);
 if (VAR_9 > VAR_7) {
  FUNC_3(VAR_2, "EAP-TTLS/EAP: Length mismatch in Phase 2"
      " EAP frame (hdr len=%lu, data len in AVP=%lu)",
      (unsigned long) VAR_9, (unsigned long) VAR_7);
  return;
 }

 switch (VAR_8->code) {
 case 128:
  FUNC_2(VAR_4, VAR_5, (u8 *) VAR_8,
           VAR_9);
  break;
 default:
  FUNC_3(VAR_2, "EAP-TTLS/EAP: Unexpected code=%d in "
      "Phase 2 EAP header", VAR_8->code);
  break;
 }
}
