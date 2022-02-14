
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct TYPE_2__ {int conn; } ;
struct eap_ttls_data {int phase2_start; struct wpabuf* pending_phase2_req; scalar_t__ resuming; TYPE_1__ ssl; struct wpabuf* pending_resp; int ttls_version; } ;
struct eap_sm {int ssl_ctx; scalar_t__ waiting_ext_cert_check; } ;
struct eap_peer_config {scalar_t__ pending_ext_cert_check; } ;
struct eap_method_ret {void* methodState; void* decision; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct eap_peer_config* FUNC_0 (struct eap_sm*) ;
 int FUNC_1 (struct eap_sm*,TYPE_1__*,int ,int ,int ,struct wpabuf const*,struct wpabuf**) ;
 int FUNC_2 (struct eap_sm*,struct eap_ttls_data*,struct eap_method_ret*,int ,struct wpabuf const*,struct wpabuf**) ;
 int FUNC_3 (struct eap_sm*,struct eap_ttls_data*) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct wpabuf*) ;
 scalar_t__ FUNC_7 (struct wpabuf*) ;

__attribute__((used)) static int FUNC_8(struct eap_sm *VAR_9,
          struct eap_ttls_data *VAR_10,
          struct eap_method_ret *VAR_11,
          u8 VAR_12,
          const struct wpabuf *VAR_13,
          struct wpabuf **VAR_14)
{
 int VAR_15;

 if (VAR_9->waiting_ext_cert_check && VAR_10->pending_resp) {
  struct eap_peer_config *VAR_16 = FUNC_0(VAR_9);

  if (VAR_16->pending_ext_cert_check == VAR_4) {
   FUNC_5(VAR_7,
       "EAP-TTLS: External certificate check succeeded - continue handshake");
   *VAR_14 = VAR_10->pending_resp;
   VAR_10->pending_resp = ((void*)0);
   VAR_9->waiting_ext_cert_check = 0;
   return 0;
  }

  if (VAR_16->pending_ext_cert_check == VAR_3) {
   FUNC_5(VAR_7,
       "EAP-TTLS: External certificate check failed - force authentication failure");
   VAR_11->methodState = VAR_5;
   VAR_11->decision = VAR_1;
   VAR_9->waiting_ext_cert_check = 0;
   return 0;
  }

  FUNC_5(VAR_7,
      "EAP-TTLS: Continuing to wait external server certificate validation");
  return 0;
 }

 VAR_15 = FUNC_1(VAR_9, &VAR_10->ssl, VAR_2,
       VAR_10->ttls_version, VAR_12,
       VAR_13, VAR_14);
 if (VAR_15 < 0) {
  FUNC_5(VAR_7, "EAP-TTLS: TLS processing failed");
  VAR_11->methodState = VAR_5;
  VAR_11->decision = VAR_1;
  return -1;
 }

 if (VAR_9->waiting_ext_cert_check) {
  FUNC_5(VAR_7,
      "EAP-TTLS: Waiting external server certificate validation");
  FUNC_6(VAR_10->pending_resp);
  VAR_10->pending_resp = *VAR_14;
  *VAR_14 = ((void*)0);
  return 0;
 }

 if (FUNC_4(VAR_9->ssl_ctx, VAR_10->ssl.conn)) {
  FUNC_5(VAR_7, "EAP-TTLS: TLS done, proceed to "
      "Phase 2");
  if (VAR_10->resuming) {
   FUNC_5(VAR_7, "EAP-TTLS: fast reauth - may "
       "skip Phase 2");
   VAR_11->decision = VAR_0;
   VAR_11->methodState = VAR_6;
  }
  VAR_10->phase2_start = 1;
  FUNC_3(VAR_9, VAR_10);

  if (*VAR_14 == ((void*)0) || FUNC_7(*VAR_14) == 0) {
   if (FUNC_2(VAR_9, VAR_10, VAR_11, VAR_12,
          ((void*)0), VAR_14)) {
    FUNC_5(VAR_8, "EAP-TTLS: "
        "failed to process early "
        "start for Phase 2");
   }
   VAR_15 = 0;
  }
  VAR_10->resuming = 0;
 }

 if (VAR_15 == 2) {



  FUNC_6(VAR_10->pending_phase2_req);
  VAR_10->pending_phase2_req = *VAR_14;
  *VAR_14 = ((void*)0);
  VAR_15 = FUNC_2(VAR_9, VAR_10, VAR_11, VAR_12, VAR_13,
           VAR_14);
 }

 return VAR_15;
}
