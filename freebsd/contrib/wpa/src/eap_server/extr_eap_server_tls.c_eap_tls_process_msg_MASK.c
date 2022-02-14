
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct wpabuf {int dummy; } ;
struct TYPE_3__ {int tls_out; int conn; scalar_t__ tls_v13; struct wpabuf* tls_in; } ;
struct eap_tls_data {scalar_t__ state; TYPE_1__ ssl; } ;
struct eap_sm {int ssl_ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct wpabuf* FUNC_0 (struct eap_sm*,TYPE_1__*,struct wpabuf*) ;
 scalar_t__ FUNC_1 (struct eap_sm*,TYPE_1__*) ;
 int FUNC_2 (struct eap_tls_data*,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,char*,struct wpabuf*) ;
 int FUNC_5 (int ,char*) ;
 struct wpabuf* FUNC_6 (int) ;
 int FUNC_7 (struct wpabuf*) ;
 scalar_t__ FUNC_8 (struct wpabuf*) ;
 int FUNC_9 (int ,struct wpabuf*) ;
 int FUNC_10 (struct wpabuf*,int ) ;
 scalar_t__ FUNC_11 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_12(struct eap_sm *VAR_4, void *VAR_5,
    const struct wpabuf *VAR_6)
{
 struct eap_tls_data *VAR_7 = VAR_5;
 if (VAR_7->state == VAR_3 && FUNC_8(VAR_7->ssl.tls_in) == 0) {
  FUNC_5(VAR_1, "EAP-TLS: Client acknowledged final TLS "
      "handshake message");
  return;
 }
 if (FUNC_1(VAR_4, &VAR_7->ssl) < 0) {
  FUNC_2(VAR_7, VAR_0);
  return;
 }

 if (VAR_7->ssl.tls_v13 &&
     FUNC_3(VAR_4->ssl_ctx, VAR_7->ssl.conn)) {
  struct wpabuf *VAR_8, *VAR_9;

  FUNC_5(VAR_1,
      "EAP-TLS: Send empty application data to indicate end of exchange");







  VAR_8 = FUNC_6(1);
  if (!VAR_8)
   return;
  FUNC_10(VAR_8, 0);
  VAR_9 = FUNC_0(VAR_4, &VAR_7->ssl, VAR_8);
  FUNC_7(VAR_8);
  if (!VAR_9)
   return;
  if (FUNC_11(&VAR_7->ssl.tls_out, FUNC_8(VAR_9)) < 0) {
   FUNC_5(VAR_2,
       "EAP-TLS: Failed to resize output buffer");
   FUNC_7(VAR_9);
   return;
  }
  FUNC_9(VAR_7->ssl.tls_out, VAR_9);
  FUNC_4(VAR_1,
    "EAP-TLS: Data appended to the message", VAR_9);
  FUNC_7(VAR_9);
 }
}
