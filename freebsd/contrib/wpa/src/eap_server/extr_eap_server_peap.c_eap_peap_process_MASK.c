
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {scalar_t__ const* identity; scalar_t__ identity_len; int ssl_ctx; } ;
struct TYPE_2__ {int conn; } ;
struct eap_peap_data {scalar_t__ state; TYPE_1__ ssl; } ;


 scalar_t__ const VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct eap_sm*,struct eap_peap_data*) ;
 int FUNC_1 (struct eap_peap_data*,int ) ;
 scalar_t__ FUNC_2 (struct eap_sm*,TYPE_1__*,struct wpabuf*,struct eap_peap_data*,scalar_t__ const,int ,int ) ;
 scalar_t__ FUNC_3 (struct eap_sm*,scalar_t__ const*,scalar_t__,int) ;
 int FUNC_4 (scalar_t__ const*) ;
 scalar_t__ const* FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__ const*,scalar_t__ const*,scalar_t__) ;
 int FUNC_7 (int ,int ) ;
 struct wpabuf* FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,char*,scalar_t__ const*,scalar_t__) ;
 int FUNC_12 (int ,char*,...) ;
 scalar_t__* FUNC_13 (struct wpabuf const*) ;
 int FUNC_14 (struct wpabuf const*) ;

__attribute__((used)) static void FUNC_15(struct eap_sm *VAR_7, void *VAR_8,
        struct wpabuf *VAR_9)
{
 struct eap_peap_data *VAR_10 = VAR_8;
 const struct wpabuf *VAR_11;
 const u8 *VAR_12;
 u8 VAR_13;

 if (FUNC_2(VAR_7, &VAR_10->ssl, VAR_9, VAR_10,
       VAR_0, VAR_6,
       VAR_5) < 0) {
  FUNC_1(VAR_10, VAR_1);
  return;
 }

 if (VAR_10->state == VAR_3 ||
     !FUNC_7(VAR_7->ssl_ctx, VAR_10->ssl.conn) ||
     !FUNC_9(VAR_7->ssl_ctx, VAR_10->ssl.conn))
  return;

 VAR_11 = FUNC_8(VAR_10->ssl.conn);
 if (!VAR_11 || FUNC_14(VAR_11) < 2) {
  FUNC_12(VAR_2,
      "EAP-PEAP: No success data in resumed session - reject attempt");
  FUNC_1(VAR_10, VAR_1);
  return;
 }

 VAR_12 = FUNC_13(VAR_11);
 if (*VAR_12 != VAR_0) {
  FUNC_12(VAR_2,
      "EAP-PEAP: Resumed session for another EAP type (%u) - reject attempt",
      *VAR_12);
  FUNC_1(VAR_10, VAR_1);
  return;
 }

 VAR_12++;
 VAR_13 = *VAR_12++;
 FUNC_11(VAR_2, "EAP-PEAP: Identity from cached session",
     VAR_12, VAR_13);
 FUNC_4(VAR_7->identity);
 VAR_7->identity = FUNC_5(VAR_13 ? VAR_13 : 1);
 if (!VAR_7->identity) {
  VAR_7->identity_len = 0;
  FUNC_1(VAR_10, VAR_1);
  return;
 }

 FUNC_6(VAR_7->identity, VAR_12, VAR_13);
 VAR_7->identity_len = VAR_13;

 if (FUNC_3(VAR_7, VAR_7->identity, VAR_7->identity_len, 1) != 0) {
  FUNC_11(VAR_2, "EAP-PEAP: Phase2 Identity not found in the user database",
      VAR_7->identity, VAR_7->identity_len);
  FUNC_1(VAR_10, VAR_1);
  return;
 }

 FUNC_12(VAR_2,
     "EAP-PEAP: Resuming previous session - skip Phase2");
 FUNC_0(VAR_7, VAR_10);
 if (VAR_10->state == VAR_4)
  FUNC_10(VAR_10->ssl.conn);
}
