
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int ssl_ctx; scalar_t__ waiting_ext_cert_check; } ;
struct eap_peer_config {scalar_t__ pending_ext_cert_check; } ;
struct eap_method_ret {void* decision; void* methodState; } ;
struct eap_hdr {int identifier; } ;
struct TYPE_3__ {int conn; } ;
struct eap_fast_data {int provisioning_allowed; int anon_provisioning; int fast_version; struct wpabuf* pending_phase2_req; scalar_t__ resuming; TYPE_1__ ssl; scalar_t__ provisioning; struct wpabuf* pending_resp; } ;
typedef int cipher ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct eap_sm*,struct eap_fast_data*,struct eap_method_ret*,int,struct wpabuf*,struct wpabuf**) ;
 scalar_t__ FUNC_1 (struct eap_sm*,struct eap_fast_data*) ;
 scalar_t__ FUNC_2 (struct eap_sm*,struct eap_fast_data*,int,int const*,size_t) ;
 struct eap_peer_config* FUNC_3 (struct eap_sm*) ;
 struct wpabuf* FUNC_4 (int,int ,int ) ;
 int FUNC_5 (struct eap_sm*,TYPE_1__*,int ,int ,int,struct wpabuf*,struct wpabuf**) ;
 int* FUNC_6 (struct eap_sm*,TYPE_1__*,int ,struct eap_method_ret*,struct wpabuf const*,size_t*,int*) ;
 scalar_t__ FUNC_7 (char*,char*) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (int ,int ,char*,int) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (struct wpabuf*) ;
 struct eap_hdr* FUNC_12 (struct wpabuf const*) ;
 int FUNC_13 (struct wpabuf*,int const*,size_t) ;

__attribute__((used)) static struct wpabuf * FUNC_14(struct eap_sm *VAR_8, void *VAR_9,
     struct eap_method_ret *VAR_10,
     const struct wpabuf *VAR_11)
{
 const struct eap_hdr *VAR_12;
 size_t VAR_13;
 int VAR_14;
 u8 VAR_15, VAR_16;
 struct wpabuf *VAR_17;
 const u8 *VAR_18;
 struct eap_fast_data *VAR_19 = VAR_9;
 struct wpabuf VAR_20;

 VAR_18 = FUNC_6(VAR_8, &VAR_19->ssl, VAR_3, VAR_10,
     VAR_11, &VAR_13, &VAR_15);
 if (VAR_18 == ((void*)0))
  return ((void*)0);

 VAR_12 = FUNC_12(VAR_11);
 VAR_16 = VAR_12->identifier;

 if (VAR_15 & VAR_2) {
  if (FUNC_2(VAR_8, VAR_19, VAR_15, VAR_18, VAR_13) < 0)
   return ((void*)0);

  VAR_13 = 0;
 }

 FUNC_13(&VAR_20, VAR_18, VAR_13);

 VAR_17 = ((void*)0);
 if (FUNC_8(VAR_8->ssl_ctx, VAR_19->ssl.conn) &&
     !VAR_19->resuming) {

  VAR_14 = FUNC_0(VAR_8, VAR_19, VAR_10, VAR_16, &VAR_20, &VAR_17);
  if (VAR_14 < 0) {
   VAR_10->methodState = VAR_6;
   VAR_10->decision = VAR_0;




   VAR_14 = 1;
  }
 } else {
  if (VAR_8->waiting_ext_cert_check && VAR_19->pending_resp) {
   struct eap_peer_config *VAR_21 = FUNC_3(VAR_8);

   if (VAR_21->pending_ext_cert_check ==
       VAR_5) {
    FUNC_10(VAR_7,
        "EAP-FAST: External certificate check succeeded - continue handshake");
    VAR_17 = VAR_19->pending_resp;
    VAR_19->pending_resp = ((void*)0);
    VAR_8->waiting_ext_cert_check = 0;
    return VAR_17;
   }

   if (VAR_21->pending_ext_cert_check ==
       VAR_4) {
    FUNC_10(VAR_7,
        "EAP-FAST: External certificate check failed - force authentication failure");
    VAR_10->methodState = VAR_6;
    VAR_10->decision = VAR_0;
    VAR_8->waiting_ext_cert_check = 0;
    return ((void*)0);
   }

   FUNC_10(VAR_7,
       "EAP-FAST: Continuing to wait external server certificate validation");
   return ((void*)0);
  }


  VAR_14 = FUNC_5(VAR_8, &VAR_19->ssl,
        VAR_3,
        VAR_19->fast_version, VAR_16, &VAR_20,
        &VAR_17);
  if (VAR_14 < 0) {
   FUNC_10(VAR_7,
       "EAP-FAST: TLS processing failed");
   VAR_10->methodState = VAR_6;
   VAR_10->decision = VAR_0;
   return VAR_17;
  }

  if (VAR_8->waiting_ext_cert_check) {
   FUNC_10(VAR_7,
       "EAP-FAST: Waiting external server certificate validation");
   FUNC_11(VAR_19->pending_resp);
   VAR_19->pending_resp = VAR_17;
   return ((void*)0);
  }

  if (FUNC_8(VAR_8->ssl_ctx, VAR_19->ssl.conn)) {
   char VAR_22[80];
   FUNC_10(VAR_7,
       "EAP-FAST: TLS done, proceed to Phase 2");
   if (VAR_19->provisioning &&
       (!(VAR_19->provisioning_allowed &
          VAR_1) ||
        FUNC_9(VAR_8->ssl_ctx, VAR_19->ssl.conn,
         VAR_22, sizeof(VAR_22)) < 0 ||
        FUNC_7(VAR_22, "ADH-") ||
        FUNC_7(VAR_22, "anon"))) {
    FUNC_10(VAR_7, "EAP-FAST: Using "
        "anonymous (unauthenticated) "
        "provisioning");
    VAR_19->anon_provisioning = 1;
   } else
    VAR_19->anon_provisioning = 0;
   VAR_19->resuming = 0;
   if (FUNC_1(VAR_8, VAR_19) < 0) {
    FUNC_10(VAR_7,
        "EAP-FAST: Could not derive keys");
    VAR_10->methodState = VAR_6;
    VAR_10->decision = VAR_0;
    FUNC_11(VAR_17);
    return ((void*)0);
   }
  }

  if (VAR_14 == 2) {



   FUNC_11(VAR_19->pending_phase2_req);
   VAR_19->pending_phase2_req = VAR_17;
   VAR_17 = ((void*)0);
   VAR_14 = FUNC_0(VAR_8, VAR_19, VAR_10, VAR_16, &VAR_20, &VAR_17);
  }
 }

 if (VAR_14 == 1) {
  FUNC_11(VAR_17);
  return FUNC_4(VAR_16, VAR_3,
           VAR_19->fast_version);
 }

 return VAR_17;
}
