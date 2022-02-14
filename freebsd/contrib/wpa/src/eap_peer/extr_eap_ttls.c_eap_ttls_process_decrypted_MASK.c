
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct ttls_parse_avp {int eapdata; } ;
struct eap_ttls_data {int phase2_type; int ready_for_tnc; int pending_phase2_req; int phase2_success; scalar_t__ tnc_started; } ;
struct eap_sm {int dummy; } ;
struct eap_peer_config {scalar_t__ pending_req_sim; scalar_t__ pending_req_new_password; scalar_t__ pending_req_otp; scalar_t__ pending_req_password; scalar_t__ pending_req_identity; } ;
struct eap_method_ret {int methodState; } ;
typedef enum phase2_types { ____Placeholder_phase2_types } phase2_types ;







 int VAR_0 ;
 int VAR_1 ;
 struct eap_peer_config* FUNC_0 (struct eap_sm*) ;
 scalar_t__ FUNC_1 (struct eap_sm*,struct eap_ttls_data*,struct wpabuf*,int ,struct wpabuf**) ;
 int FUNC_2 (struct eap_sm*,struct eap_ttls_data*,struct eap_method_ret*,struct ttls_parse_avp*,struct wpabuf**) ;
 int FUNC_3 (struct eap_sm*,struct eap_ttls_data*,struct eap_method_ret*,struct ttls_parse_avp*) ;
 int FUNC_4 (struct eap_sm*,struct eap_ttls_data*,struct eap_method_ret*,struct ttls_parse_avp*,struct wpabuf**) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct wpabuf*) ;

__attribute__((used)) static int FUNC_8(struct eap_sm *VAR_2,
          struct eap_ttls_data *VAR_3,
          struct eap_method_ret *VAR_4,
          u8 VAR_5,
          struct ttls_parse_avp *VAR_6,
          struct wpabuf *VAR_7,
          struct wpabuf **VAR_8)
{
 struct wpabuf *VAR_9 = ((void*)0);
 struct eap_peer_config *VAR_10 = FUNC_0(VAR_2);
 int VAR_11;
 enum phase2_types VAR_12 = VAR_3->phase2_type;






 switch (VAR_12) {
 case 131:
  if (FUNC_2(VAR_2, VAR_3, VAR_4, VAR_6, &VAR_9) <
      0)
   return -1;
  break;
 case 129:
  VAR_11 = FUNC_3(VAR_2, VAR_3, VAR_4, VAR_6);
  return VAR_11;
 case 130:
 case 128:
 case 132:
  FUNC_5(VAR_1, "EAP-TTLS: Phase 2 received unexpected "
      "tunneled data");
  return -1;

 }

 if (VAR_9) {
  if (FUNC_1(VAR_2, VAR_3, VAR_9, VAR_5,
           VAR_8) < 0)
   return -1;
 } else if (VAR_10->pending_req_identity ||
     VAR_10->pending_req_password ||
     VAR_10->pending_req_otp ||
     VAR_10->pending_req_new_password ||
     VAR_10->pending_req_sim) {
  FUNC_6(VAR_3->pending_phase2_req);
  VAR_3->pending_phase2_req = FUNC_7(VAR_7);
 }

 return 0;
}
