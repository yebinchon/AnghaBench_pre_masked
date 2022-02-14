
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct ttls_parse_avp {int eap_len; int * eapdata; } ;
struct eap_ttls_data {int dummy; } ;
struct eap_sm {int dummy; } ;
struct eap_method_ret {int dummy; } ;
struct eap_hdr {long code; int identifier; int length; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (struct eap_sm*,struct eap_ttls_data*,struct eap_method_ret*,struct eap_hdr*,struct wpabuf**) ;
 int FUNC_2 (int ,char*,int *,int) ;
 int FUNC_3 (int ,char*,...) ;

__attribute__((used)) static int FUNC_4(struct eap_sm *VAR_3,
           struct eap_ttls_data *VAR_4,
           struct eap_method_ret *VAR_5,
           struct ttls_parse_avp *VAR_6,
           struct wpabuf **VAR_7)
{
 struct eap_hdr *VAR_8;
 size_t VAR_9;

 if (VAR_6->eapdata == ((void*)0)) {
  FUNC_3(VAR_2, "EAP-TTLS: No EAP Message in the "
      "packet - dropped");
  return -1;
 }

 FUNC_2(VAR_0, "EAP-TTLS: Phase 2 EAP",
      VAR_6->eapdata, VAR_6->eap_len);
 VAR_8 = (struct eap_hdr *) VAR_6->eapdata;

 if (VAR_6->eap_len < sizeof(*VAR_8)) {
  FUNC_3(VAR_2, "EAP-TTLS: Too short Phase 2 EAP "
      "frame (len=%lu, expected %lu or more) - dropped",
      (unsigned long) VAR_6->eap_len,
      (unsigned long) sizeof(*VAR_8));
  return -1;
 }
 VAR_9 = FUNC_0(VAR_8->length);
 if (VAR_9 > VAR_6->eap_len) {
  FUNC_3(VAR_1, "EAP-TTLS: Length mismatch in Phase 2 "
      "EAP frame (EAP hdr len=%lu, EAP data len in "
      "AVP=%lu)",
      (unsigned long) VAR_9,
      (unsigned long) VAR_6->eap_len);
  return -1;
 }
 FUNC_3(VAR_0, "EAP-TTLS: received Phase 2: code=%d "
     "identifier=%d length=%lu",
     VAR_8->code, VAR_8->identifier, (unsigned long) VAR_9);
 switch (VAR_8->code) {
 case 128:
  if (FUNC_1(VAR_3, VAR_4, VAR_5, VAR_8, VAR_7)) {
   FUNC_3(VAR_1, "EAP-TTLS: Phase2 Request "
       "processing failed");
   return -1;
  }
  break;
 default:
  FUNC_3(VAR_1, "EAP-TTLS: Unexpected code=%d in "
      "Phase 2 EAP header", VAR_8->code);
  return -1;
 }

 return 0;
}
