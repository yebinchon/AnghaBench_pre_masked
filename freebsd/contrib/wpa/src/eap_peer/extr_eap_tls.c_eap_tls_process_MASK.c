
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct TYPE_4__ {int conn; struct wpabuf* tls_out; } ;
struct eap_tls_data {int eap_type; TYPE_1__ ssl; int ssl_ctx; struct wpabuf* pending_resp; } ;
struct eap_sm {scalar_t__ waiting_ext_cert_check; } ;
struct eap_peer_config {scalar_t__ pending_ext_cert_check; } ;
struct eap_method_ret {int decision; int methodState; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct eap_peer_config* FUNC_0 (struct eap_sm*) ;
 int FUNC_1 (struct wpabuf const*) ;
 struct wpabuf* FUNC_2 (int,int ,int ) ;
 int FUNC_3 (struct eap_sm*,TYPE_1__*,int ,int ,int,struct wpabuf*,struct wpabuf**) ;
 int* FUNC_4 (struct eap_sm*,TYPE_1__*,int ,struct eap_method_ret*,struct wpabuf const*,size_t*,int*) ;
 int FUNC_5 (TYPE_1__*) ;
 struct wpabuf* FUNC_6 (struct eap_sm*,struct eap_tls_data*,struct eap_method_ret*,int,struct wpabuf*,int) ;
 int FUNC_7 (struct eap_sm*,struct eap_tls_data*,struct eap_method_ret*) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,char*,struct wpabuf*) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (struct wpabuf*) ;
 int FUNC_12 (struct wpabuf*,int const*,size_t) ;

__attribute__((used)) static struct wpabuf * FUNC_13(struct eap_sm *VAR_6, void *VAR_7,
           struct eap_method_ret *VAR_8,
           const struct wpabuf *VAR_9)
{
 size_t VAR_10;
 int VAR_11;
 struct wpabuf *VAR_12;
 u8 VAR_13, VAR_14;
 const u8 *VAR_15;
 struct eap_tls_data *VAR_16 = VAR_7;
 struct wpabuf VAR_17;

 if (VAR_6->waiting_ext_cert_check && VAR_16->pending_resp) {
  struct eap_peer_config *VAR_18 = FUNC_0(VAR_6);

  if (VAR_18->pending_ext_cert_check == VAR_3) {
   FUNC_10(VAR_5,
       "EAP-TLS: External certificate check succeeded - continue handshake");
   VAR_12 = VAR_16->pending_resp;
   VAR_16->pending_resp = ((void*)0);
   VAR_6->waiting_ext_cert_check = 0;
   return VAR_12;
  }

  if (VAR_18->pending_ext_cert_check == VAR_2) {
   FUNC_10(VAR_5,
       "EAP-TLS: External certificate check failed - force authentication failure");
   VAR_8->methodState = VAR_4;
   VAR_8->decision = VAR_0;
   VAR_6->waiting_ext_cert_check = 0;
   return ((void*)0);
  }

  FUNC_10(VAR_5,
      "EAP-TLS: Continuing to wait external server certificate validation");
  return ((void*)0);
 }

 VAR_15 = FUNC_4(VAR_6, &VAR_16->ssl, VAR_16->eap_type, VAR_8,
     VAR_9, &VAR_10, &VAR_13);
 if (VAR_15 == ((void*)0))
  return ((void*)0);
 VAR_14 = FUNC_1(VAR_9);

 if (VAR_13 & VAR_1) {
  FUNC_10(VAR_5, "EAP-TLS: Start");
  VAR_10 = 0;

 }

 VAR_12 = ((void*)0);
 FUNC_12(&VAR_17, VAR_15, VAR_10);
 VAR_11 = FUNC_3(VAR_6, &VAR_16->ssl, VAR_16->eap_type, 0,
       VAR_14, &VAR_17, &VAR_12);

 if (VAR_11 < 0) {
  return FUNC_6(VAR_6, VAR_16, VAR_8, VAR_11, VAR_12, VAR_14);
 }

 if (VAR_6->waiting_ext_cert_check) {
  FUNC_10(VAR_5,
      "EAP-TLS: Waiting external server certificate validation");
  FUNC_11(VAR_16->pending_resp);
  VAR_16->pending_resp = VAR_12;
  return ((void*)0);
 }

 if (VAR_11 == 2) {


  FUNC_9(VAR_5, "EAP-TLS: Received Application Data",
    VAR_12);
  FUNC_9(VAR_5, "EAP-TLS: Remaining tls_out data",
    VAR_16->ssl.tls_out);
  FUNC_5(&VAR_16->ssl);

  VAR_11 = 1;
 }

 if (FUNC_8(VAR_16->ssl_ctx, VAR_16->ssl.conn))
  FUNC_7(VAR_6, VAR_16, VAR_8);

 if (VAR_11 == 1) {
  FUNC_11(VAR_12);
  return FUNC_2(VAR_14, VAR_16->eap_type, 0);
 }

 return VAR_12;
}
