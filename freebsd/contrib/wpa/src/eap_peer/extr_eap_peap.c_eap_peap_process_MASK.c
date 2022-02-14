
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {scalar_t__ workaround; int ssl_ctx; scalar_t__ waiting_ext_cert_check; } ;
struct eap_peer_config {scalar_t__ pending_ext_cert_check; } ;
struct TYPE_5__ {int conn; } ;
struct eap_peap_data {int peap_version; int force_peap_version; int phase2_success; struct wpabuf* pending_phase2_req; scalar_t__ resuming; int id_len; scalar_t__ session_id; TYPE_1__ ssl; scalar_t__ key_data; scalar_t__ force_new_label; struct wpabuf* pending_resp; } ;
struct eap_method_ret {scalar_t__ methodState; void* allowNotifications; void* decision; } ;
struct eap_hdr {int identifier; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 void* VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 struct eap_peer_config* FUNC_0 (struct eap_sm*) ;
 int FUNC_1 (struct eap_sm*,struct eap_peap_data*,struct eap_method_ret*,struct eap_hdr const*,struct wpabuf*,struct wpabuf**) ;
 int FUNC_2 (struct eap_peap_data*) ;
 struct wpabuf* FUNC_3 (int,int ,int) ;
 scalar_t__ FUNC_4 (struct eap_sm*,TYPE_1__*,char*,int *,int ,scalar_t__) ;
 scalar_t__ FUNC_5 (struct eap_sm*,TYPE_1__*,int ,int *) ;
 int FUNC_6 (struct eap_sm*,TYPE_1__*,int ,int,int,struct wpabuf*,struct wpabuf**) ;
 int* FUNC_7 (struct eap_sm*,TYPE_1__*,int ,struct eap_method_ret*,struct wpabuf const*,size_t*,int*) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,char*,scalar_t__,int ) ;
 int FUNC_11 (int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_12 (int ,char*,...) ;
 int FUNC_13 (struct wpabuf*) ;
 struct eap_hdr* FUNC_14 (struct wpabuf const*) ;
 int FUNC_15 (struct wpabuf*,int const*,size_t) ;

__attribute__((used)) static struct wpabuf * FUNC_16(struct eap_sm *VAR_14, void *VAR_15,
     struct eap_method_ret *VAR_16,
     const struct wpabuf *VAR_17)
{
 const struct eap_hdr *VAR_18;
 size_t VAR_19;
 int VAR_20;
 u8 VAR_21, VAR_22;
 struct wpabuf *VAR_23;
 const u8 *VAR_24;
 struct eap_peap_data *VAR_25 = VAR_15;
 struct wpabuf VAR_26;

 VAR_24 = FUNC_7(VAR_14, &VAR_25->ssl, VAR_6, VAR_16,
     VAR_17, &VAR_19, &VAR_21);
 if (VAR_24 == ((void*)0))
  return ((void*)0);
 VAR_18 = FUNC_14(VAR_17);
 VAR_22 = VAR_18->identifier;

 if (VAR_21 & VAR_3) {
  FUNC_12(VAR_11, "EAP-PEAP: Start (server ver=%d, own "
      "ver=%d)", VAR_21 & VAR_5,
   VAR_25->peap_version);
  if ((VAR_21 & VAR_5) < VAR_25->peap_version)
   VAR_25->peap_version = VAR_21 & VAR_5;
  if (VAR_25->force_peap_version >= 0 &&
      VAR_25->force_peap_version != VAR_25->peap_version) {
   FUNC_12(VAR_13, "EAP-PEAP: Failed to select "
       "forced PEAP version %d",
       VAR_25->force_peap_version);
   VAR_16->methodState = VAR_10;
   VAR_16->decision = VAR_1;
   VAR_16->allowNotifications = VAR_9;
   return ((void*)0);
  }
  FUNC_12(VAR_11, "EAP-PEAP: Using PEAP version %d",
      VAR_25->peap_version);
  VAR_19 = 0;

 }

 FUNC_15(&VAR_26, VAR_24, VAR_19);

 VAR_23 = ((void*)0);
 if (FUNC_9(VAR_14->ssl_ctx, VAR_25->ssl.conn) &&
     !VAR_25->resuming) {
  VAR_20 = FUNC_1(VAR_14, VAR_25, VAR_16, VAR_18, &VAR_26, &VAR_23);
 } else {
  if (VAR_14->waiting_ext_cert_check && VAR_25->pending_resp) {
   struct eap_peer_config *VAR_27 = FUNC_0(VAR_14);

   if (VAR_27->pending_ext_cert_check ==
       VAR_8) {
    FUNC_12(VAR_11,
        "EAP-PEAP: External certificate check succeeded - continue handshake");
    VAR_23 = VAR_25->pending_resp;
    VAR_25->pending_resp = ((void*)0);
    VAR_14->waiting_ext_cert_check = 0;
    return VAR_23;
   }

   if (VAR_27->pending_ext_cert_check ==
       VAR_7) {
    FUNC_12(VAR_11,
        "EAP-PEAP: External certificate check failed - force authentication failure");
    VAR_16->methodState = VAR_10;
    VAR_16->decision = VAR_1;
    VAR_14->waiting_ext_cert_check = 0;
    return ((void*)0);
   }

   FUNC_12(VAR_11,
       "EAP-PEAP: Continuing to wait external server certificate validation");
   return ((void*)0);
  }

  VAR_20 = FUNC_6(VAR_14, &VAR_25->ssl,
        VAR_6,
        VAR_25->peap_version, VAR_22, &VAR_26,
        &VAR_23);

  if (VAR_20 < 0) {
   FUNC_12(VAR_11,
       "EAP-PEAP: TLS processing failed");
   VAR_16->methodState = VAR_10;
   VAR_16->decision = VAR_1;
   return VAR_23;
  }


  if (VAR_14->waiting_ext_cert_check) {
   FUNC_12(VAR_11,
       "EAP-PEAP: Waiting external server certificate validation");
   FUNC_13(VAR_25->pending_resp);
   VAR_25->pending_resp = VAR_23;
   return ((void*)0);
  }

  if (FUNC_9(VAR_14->ssl_ctx, VAR_25->ssl.conn)) {
   char *VAR_28;
   FUNC_12(VAR_11,
       "EAP-PEAP: TLS done, proceed to Phase 2");
   FUNC_2(VAR_25);







   if (VAR_25->force_new_label)
    VAR_28 = "client PEAP encryption";
   else
    VAR_28 = "client EAP encryption";
   FUNC_12(VAR_11, "EAP-PEAP: using label '%s' in "
       "key derivation", VAR_28);
   VAR_25->key_data =
    FUNC_4(VAR_14, &VAR_25->ssl, VAR_28,
       ((void*)0), 0,
       VAR_4 +
       VAR_2);
   if (VAR_25->key_data) {
    FUNC_11(VAR_11,
      "EAP-PEAP: Derived key",
      VAR_25->key_data,
      VAR_4);
    FUNC_11(VAR_11,
      "EAP-PEAP: Derived EMSK",
      VAR_25->key_data +
      VAR_4,
      VAR_2);
   } else {
    FUNC_12(VAR_11, "EAP-PEAP: Failed to "
        "derive key");
   }

   FUNC_8(VAR_25->session_id);
   VAR_25->session_id =
    FUNC_5(VAR_14, &VAR_25->ssl,
              VAR_6,
              &VAR_25->id_len);
   if (VAR_25->session_id) {
    FUNC_10(VAR_11,
         "EAP-PEAP: Derived Session-Id",
         VAR_25->session_id, VAR_25->id_len);
   } else {
    FUNC_12(VAR_12, "EAP-PEAP: Failed to "
        "derive Session-Id");
   }

   if (VAR_14->workaround && VAR_25->resuming) {
    FUNC_12(VAR_11, "EAP-PEAP: Workaround - "
        "allow outer EAP-Success to "
        "terminate PEAP resumption");
    VAR_16->decision = VAR_0;
    VAR_25->phase2_success = 1;
   }

   VAR_25->resuming = 0;
  }

  if (VAR_20 == 2) {



   FUNC_13(VAR_25->pending_phase2_req);
   VAR_25->pending_phase2_req = VAR_23;
   VAR_23 = ((void*)0);
   VAR_20 = FUNC_1(VAR_14, VAR_25, VAR_16, VAR_18, &VAR_26,
            &VAR_23);
  }
 }

 if (VAR_16->methodState == VAR_10) {
  VAR_16->allowNotifications = VAR_9;
 }

 if (VAR_20 == 1) {
  FUNC_13(VAR_23);
  return FUNC_3(VAR_22, VAR_6,
           VAR_25->peap_version);
 }

 return VAR_23;
}
