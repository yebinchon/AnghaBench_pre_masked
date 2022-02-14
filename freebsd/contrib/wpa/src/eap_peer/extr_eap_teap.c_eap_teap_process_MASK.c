
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct TYPE_3__ {int conn; } ;
struct eap_teap_data {int provisioning_allowed; int anon_provisioning; scalar_t__ test_outer_tlvs; int teap_version; struct wpabuf* pending_phase2_req; scalar_t__ resuming; TYPE_1__ ssl; scalar_t__ provisioning; int tls_cs; struct wpabuf* pending_resp; } ;
struct eap_sm {int ssl_ctx; scalar_t__ waiting_ext_cert_check; } ;
struct eap_peer_config {scalar_t__ pending_ext_cert_check; } ;
struct eap_method_ret {void* decision; void* methodState; } ;
struct eap_hdr {int identifier; } ;
typedef int cipher ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct eap_peer_config* FUNC_0 (struct eap_sm*) ;
 struct wpabuf* FUNC_1 (int,int ,int ) ;
 int FUNC_2 (struct eap_sm*,TYPE_1__*,int ,int ,int,struct wpabuf*,struct wpabuf**) ;
 int* FUNC_3 (struct eap_sm*,TYPE_1__*,int ,struct eap_method_ret*,struct wpabuf const*,size_t*,int*) ;
 struct wpabuf* FUNC_4 (struct eap_teap_data*,struct wpabuf*) ;
 int FUNC_5 (struct eap_sm*,struct eap_teap_data*,struct eap_method_ret*,int,struct wpabuf*,struct wpabuf**) ;
 scalar_t__ FUNC_6 (struct eap_sm*,struct eap_teap_data*) ;
 scalar_t__ FUNC_7 (struct eap_sm*,struct eap_teap_data*,int,int const*,size_t) ;
 scalar_t__ FUNC_8 (char*,char*) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ,int ,char*,int) ;
 int FUNC_12 (int ,char*,...) ;
 int FUNC_13 (struct wpabuf*) ;
 struct eap_hdr* FUNC_14 (struct wpabuf const*) ;
 int FUNC_15 (struct wpabuf*) ;
 int FUNC_16 (struct wpabuf*,int const*,size_t) ;

__attribute__((used)) static struct wpabuf * FUNC_17(struct eap_sm *VAR_10, void *VAR_11,
     struct eap_method_ret *VAR_12,
     const struct wpabuf *VAR_13)
{
 const struct eap_hdr *VAR_14;
 size_t VAR_15;
 int VAR_16;
 u8 VAR_17, VAR_18;
 struct wpabuf *VAR_19;
 const u8 *VAR_20;
 struct eap_teap_data *VAR_21 = VAR_11;
 struct wpabuf VAR_22;

 VAR_20 = FUNC_3(VAR_10, &VAR_21->ssl, VAR_4, VAR_12,
     VAR_13, &VAR_15, &VAR_17);
 if (!VAR_20)
  return ((void*)0);

 VAR_14 = FUNC_14(VAR_13);
 VAR_18 = VAR_14->identifier;

 if (VAR_17 & VAR_3) {
  if (FUNC_7(VAR_10, VAR_21, VAR_17, VAR_20, VAR_15) < 0)
   return ((void*)0);





  VAR_15 = 0;
 } else if (VAR_17 & VAR_1) {



  FUNC_12(VAR_9,
      "EAP-TEAP: Outer TLVs present in non-Start message -> ignore message");
  return ((void*)0);
 }

 FUNC_16(&VAR_22, VAR_20, VAR_15);

 VAR_19 = ((void*)0);
 if (FUNC_9(VAR_10->ssl_ctx, VAR_21->ssl.conn) &&
     !VAR_21->resuming) {

  VAR_16 = FUNC_5(VAR_10, VAR_21, VAR_12, VAR_18, &VAR_22, &VAR_19);
  if (VAR_16 < 0) {
   VAR_12->methodState = VAR_7;
   VAR_12->decision = VAR_0;




   VAR_16 = 1;
  }
 } else {
  if (VAR_10->waiting_ext_cert_check && VAR_21->pending_resp) {
   struct eap_peer_config *VAR_23 = FUNC_0(VAR_10);

   if (VAR_23->pending_ext_cert_check ==
       VAR_6) {
    FUNC_12(VAR_8,
        "EAP-TEAP: External certificate check succeeded - continue handshake");
    VAR_19 = VAR_21->pending_resp;
    VAR_21->pending_resp = ((void*)0);
    VAR_10->waiting_ext_cert_check = 0;
    return VAR_19;
   }

   if (VAR_23->pending_ext_cert_check ==
       VAR_5) {
    FUNC_12(VAR_8,
        "EAP-TEAP: External certificate check failed - force authentication failure");
    VAR_12->methodState = VAR_7;
    VAR_12->decision = VAR_0;
    VAR_10->waiting_ext_cert_check = 0;
    return ((void*)0);
   }

   FUNC_12(VAR_8,
       "EAP-TEAP: Continuing to wait external server certificate validation");
   return ((void*)0);
  }


  VAR_16 = FUNC_2(VAR_10, &VAR_21->ssl,
        VAR_4,
        VAR_21->teap_version, VAR_18, &VAR_22,
        &VAR_19);
  if (VAR_16 < 0) {
   FUNC_12(VAR_8,
       "EAP-TEAP: TLS processing failed");
   VAR_12->methodState = VAR_7;
   VAR_12->decision = VAR_0;
   return VAR_19;
  }

  if (VAR_10->waiting_ext_cert_check) {
   FUNC_12(VAR_8,
       "EAP-TEAP: Waiting external server certificate validation");
   FUNC_13(VAR_21->pending_resp);
   VAR_21->pending_resp = VAR_19;
   return ((void*)0);
  }

  if (FUNC_9(VAR_10->ssl_ctx, VAR_21->ssl.conn)) {
   char VAR_24[80];

   FUNC_12(VAR_8,
       "EAP-TEAP: TLS done, proceed to Phase 2");
   VAR_21->tls_cs =
    FUNC_10(VAR_21->ssl.conn);
   FUNC_12(VAR_8,
       "EAP-TEAP: TLS cipher suite 0x%04x",
       VAR_21->tls_cs);

   if (VAR_21->provisioning &&
       (!(VAR_21->provisioning_allowed &
          VAR_2) ||
        FUNC_11(VAR_10->ssl_ctx, VAR_21->ssl.conn,
         VAR_24, sizeof(VAR_24)) < 0 ||
        FUNC_8(VAR_24, "ADH-") ||
        FUNC_8(VAR_24, "anon"))) {
    FUNC_12(VAR_8,
        "EAP-TEAP: Using anonymous (unauthenticated) provisioning");
    VAR_21->anon_provisioning = 1;
   } else {
    VAR_21->anon_provisioning = 0;
   }
   VAR_21->resuming = 0;
   if (FUNC_6(VAR_10, VAR_21) < 0) {
    FUNC_12(VAR_8,
        "EAP-TEAP: Could not derive keys");
    VAR_12->methodState = VAR_7;
    VAR_12->decision = VAR_0;
    FUNC_13(VAR_19);
    return ((void*)0);
   }
  }

  if (VAR_16 == 2) {



   FUNC_13(VAR_21->pending_phase2_req);
   VAR_21->pending_phase2_req = VAR_19;
   VAR_19 = ((void*)0);
   VAR_16 = FUNC_5(VAR_10, VAR_21, VAR_12, VAR_18, &VAR_22, &VAR_19);
  }
 }

 if (VAR_16 == 1) {
  FUNC_13(VAR_19);
  return FUNC_1(VAR_18, VAR_4,
           VAR_21->teap_version);
 }







 return VAR_19;
}
