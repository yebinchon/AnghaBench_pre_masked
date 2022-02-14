
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_ttls_data {int pending_phase2_req; } ;
struct eap_sm {int dummy; } ;
struct eap_peer_config {scalar_t__ pending_req_sim; scalar_t__ pending_req_new_password; scalar_t__ pending_req_otp; scalar_t__ pending_req_password; scalar_t__ pending_req_identity; } ;
struct eap_method_ret {void* decision; void* methodState; } ;
struct eap_hdr {int dummy; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 struct eap_peer_config* FUNC_0 (struct eap_sm*) ;
 int FUNC_1 (struct eap_sm*,struct eap_ttls_data*,struct wpabuf*,int ,struct wpabuf**) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (struct eap_sm*,struct eap_ttls_data*,struct eap_method_ret*,struct eap_hdr*,struct wpabuf**) ;
 int FUNC_4 (struct eap_hdr*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct eap_sm *VAR_3,
           struct eap_ttls_data *VAR_4,
           struct eap_method_ret *VAR_5,
           u8 VAR_6,
           struct wpabuf **VAR_7)
{
 int VAR_8 = 0;
 struct eap_hdr *VAR_9;
 struct wpabuf *VAR_10;

 VAR_9 = (struct eap_hdr *) FUNC_2();
 if (VAR_9 == ((void*)0)) {
  VAR_5->methodState = VAR_1;
  VAR_5->decision = VAR_0;
  return -1;
 }

 VAR_10 = ((void*)0);
 if (FUNC_3(VAR_3, VAR_4, VAR_5, VAR_9, &VAR_10)) {
  FUNC_5(VAR_2, "EAP-TTLS: Phase2 Request "
      "processing failed");
  VAR_8 = -1;
 } else {
  struct eap_peer_config *VAR_11 = FUNC_0(VAR_3);
  if (VAR_10 == ((void*)0) &&
      (VAR_11->pending_req_identity ||
       VAR_11->pending_req_password ||
       VAR_11->pending_req_otp ||
       VAR_11->pending_req_new_password ||
       VAR_11->pending_req_sim)) {





   FUNC_7(VAR_4->pending_phase2_req);
   VAR_4->pending_phase2_req = FUNC_6(0);
  }

  VAR_8 = FUNC_1(VAR_3, VAR_4, VAR_10, VAR_6,
         VAR_7);
 }

 FUNC_4(VAR_9);

 if (VAR_8 < 0) {
  VAR_5->methodState = VAR_1;
  VAR_5->decision = VAR_0;
 }

 return VAR_8;
}
