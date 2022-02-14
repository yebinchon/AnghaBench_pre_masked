
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct wpabuf {int dummy; } ;
struct TYPE_2__ {int conn; } ;
struct eap_ttls_data {TYPE_1__ ssl; } ;
struct eap_sm {scalar_t__ const* identity; scalar_t__ identity_len; int ssl_ctx; } ;


 scalar_t__ const VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct eap_sm*,TYPE_1__*,struct wpabuf*,struct eap_ttls_data*,scalar_t__ const,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct eap_ttls_data*,int ) ;
 scalar_t__ FUNC_2 (struct eap_sm*,scalar_t__ const*,scalar_t__,int) ;
 int FUNC_3 (scalar_t__ const*) ;
 scalar_t__ const* FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__ const*,scalar_t__ const*,scalar_t__) ;
 int FUNC_6 (int ,int ) ;
 struct wpabuf* FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,char*,scalar_t__ const*,scalar_t__) ;
 int FUNC_11 (int ,char*,...) ;
 scalar_t__* FUNC_12 (struct wpabuf const*) ;
 int FUNC_13 (struct wpabuf const*) ;

__attribute__((used)) static void FUNC_14(struct eap_sm *VAR_6, void *VAR_7,
        struct wpabuf *VAR_8)
{
 struct eap_ttls_data *VAR_9 = VAR_7;
 const struct wpabuf *VAR_10;
 const u8 *VAR_11;
 u8 VAR_12;

 if (FUNC_0(VAR_6, &VAR_9->ssl, VAR_8, VAR_9,
       VAR_0, VAR_5,
       VAR_4) < 0) {
  FUNC_1(VAR_9, VAR_1);
  return;
 }

 if (!FUNC_6(VAR_6->ssl_ctx, VAR_9->ssl.conn) ||
     !FUNC_8(VAR_6->ssl_ctx, VAR_9->ssl.conn))
  return;

 VAR_10 = FUNC_7(VAR_9->ssl.conn);
 if (!VAR_10 || FUNC_13(VAR_10) < 1) {
  FUNC_11(VAR_2,
      "EAP-TTLS: No success data in resumed session - reject attempt");
  FUNC_1(VAR_9, VAR_1);
  return;
 }

 VAR_11 = FUNC_12(VAR_10);
 if (*VAR_11 != VAR_0) {
  FUNC_11(VAR_2,
      "EAP-TTLS: Resumed session for another EAP type (%u) - reject attempt",
      *VAR_11);
  FUNC_1(VAR_9, VAR_1);
  return;
 }

 VAR_11++;
 VAR_12 = *VAR_11++;
 FUNC_10(VAR_2, "EAP-TTLS: Identity from cached session",
     VAR_11, VAR_12);
 FUNC_3(VAR_6->identity);
 VAR_6->identity = FUNC_4(VAR_12 ? VAR_12 : 1);
 if (!VAR_6->identity) {
  VAR_6->identity_len = 0;
  FUNC_1(VAR_9, VAR_1);
  return;
 }

 FUNC_5(VAR_6->identity, VAR_11, VAR_12);
 VAR_6->identity_len = VAR_12;

 if (FUNC_2(VAR_6, VAR_6->identity, VAR_6->identity_len, 1) != 0) {
  FUNC_10(VAR_2, "EAP-TTLS: Phase2 Identity not found in the user database",
      VAR_6->identity, VAR_6->identity_len);
  FUNC_1(VAR_9, VAR_1);
  return;
 }

 FUNC_11(VAR_2,
     "EAP-TTLS: Resuming previous session - skip Phase2");
 FUNC_1(VAR_9, VAR_3);
 FUNC_9(VAR_9->ssl.conn);
}
