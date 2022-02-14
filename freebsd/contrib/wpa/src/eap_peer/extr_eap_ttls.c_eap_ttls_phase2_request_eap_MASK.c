
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long u8 ;
struct wpabuf {int dummy; } ;
struct eap_ttls_data {int dummy; } ;
struct eap_sm {int dummy; } ;
struct eap_peer_config {scalar_t__ pending_req_sim; scalar_t__ pending_req_otp; scalar_t__ pending_req_password; scalar_t__ pending_req_identity; } ;
struct eap_method_ret {int dummy; } ;
struct eap_hdr {int identifier; int length; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (int ) ;
 struct eap_peer_config* FUNC_1 (struct eap_sm*) ;
 struct wpabuf* FUNC_2 (struct eap_sm*,int ,int) ;
 int FUNC_3 (struct wpabuf**,int ,int) ;
 int FUNC_4 (struct eap_sm*,struct eap_ttls_data*,struct eap_method_ret*,struct eap_hdr*,size_t,long,struct wpabuf**) ;
 int FUNC_5 (int ,char*,struct wpabuf*) ;
 int FUNC_6 (int ,char*,long) ;

__attribute__((used)) static int FUNC_7(struct eap_sm *VAR_3,
           struct eap_ttls_data *VAR_4,
           struct eap_method_ret *VAR_5,
           struct eap_hdr *VAR_6,
           struct wpabuf **VAR_7)
{
 size_t VAR_8 = FUNC_0(VAR_6->length);
 u8 *VAR_9;
 struct eap_peer_config *VAR_10 = FUNC_1(VAR_3);

 if (VAR_8 <= sizeof(struct eap_hdr)) {
  FUNC_6(VAR_1, "EAP-TTLS: too short "
      "Phase 2 request (len=%lu)", (unsigned long) VAR_8);
  return -1;
 }
 VAR_9 = (u8 *) (VAR_6 + 1);
 FUNC_6(VAR_0, "EAP-TTLS: Phase 2 EAP Request: type=%d", *VAR_9);
 switch (*VAR_9) {
 case 128:
  *VAR_7 = FUNC_2(VAR_3, VAR_6->identifier, 1);
  break;
 default:
  if (FUNC_4(VAR_3, VAR_4, VAR_5, VAR_6, VAR_8,
             *VAR_9, VAR_7) < 0)
   return -1;
  break;
 }

 if (*VAR_7 == ((void*)0) &&
     (VAR_10->pending_req_identity || VAR_10->pending_req_password ||
      VAR_10->pending_req_otp || VAR_10->pending_req_sim)) {
  return 0;
 }

 if (*VAR_7 == ((void*)0))
  return -1;

 FUNC_5(VAR_0, "EAP-TTLS: AVP encapsulate EAP Response",
   *VAR_7);
 return FUNC_3(VAR_7, VAR_2, 1);
}
