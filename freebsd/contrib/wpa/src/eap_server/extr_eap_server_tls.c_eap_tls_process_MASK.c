
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct wpabuf {int dummy; } ;
struct TYPE_2__ {int conn; } ;
struct eap_tls_data {scalar_t__ const eap_type; TYPE_1__ ssl; } ;
struct eap_sm {int ssl_ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct eap_sm*,TYPE_1__*,struct wpabuf*,struct eap_tls_data*,scalar_t__ const,int *,int ) ;
 int VAR_3 ;
 int FUNC_1 (struct eap_tls_data*,int ) ;
 int FUNC_2 (int ,int ) ;
 struct wpabuf* FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,...) ;
 scalar_t__* FUNC_7 (struct wpabuf const*) ;
 int FUNC_8 (struct wpabuf const*) ;

__attribute__((used)) static void FUNC_9(struct eap_sm *VAR_4, void *VAR_5,
       struct wpabuf *VAR_6)
{
 struct eap_tls_data *VAR_7 = VAR_5;
 const struct wpabuf *VAR_8;
 const u8 *VAR_9;

 if (FUNC_0(VAR_4, &VAR_7->ssl, VAR_6, VAR_7,
       VAR_7->eap_type, ((void*)0), VAR_3) <
     0) {
  FUNC_1(VAR_7, VAR_0);
  return;
 }

 if (!FUNC_2(VAR_4->ssl_ctx, VAR_7->ssl.conn) ||
     !FUNC_4(VAR_4->ssl_ctx, VAR_7->ssl.conn))
  return;

 VAR_8 = FUNC_3(VAR_7->ssl.conn);
 if (!VAR_8 || FUNC_8(VAR_8) < 1) {
  FUNC_6(VAR_1,
      "EAP-TLS: No success data in resumed session - reject attempt");
  FUNC_1(VAR_7, VAR_0);
  return;
 }

 VAR_9 = FUNC_7(VAR_8);
 if (*VAR_9 != VAR_7->eap_type) {
  FUNC_6(VAR_1,
      "EAP-TLS: Resumed session for another EAP type (%u) - reject attempt",
      *VAR_9);
  FUNC_1(VAR_7, VAR_0);
  return;
 }

 FUNC_6(VAR_1,
     "EAP-TLS: Resuming previous session");
 FUNC_1(VAR_7, VAR_2);
 FUNC_5(VAR_7->ssl.conn);


}
