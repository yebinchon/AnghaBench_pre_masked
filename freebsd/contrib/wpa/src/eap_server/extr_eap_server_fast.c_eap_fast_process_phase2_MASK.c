
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpabuf {int dummy; } ;
struct eap_sm {scalar_t__ method_pending; int ssl_ctx; } ;
struct TYPE_2__ {int conn; } ;
struct eap_fast_data {struct wpabuf* pending_phase2_resp; TYPE_1__ ssl; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct eap_sm*,struct eap_fast_data*,struct wpabuf*) ;
 int FUNC_1 (struct eap_fast_data*,int ) ;
 struct wpabuf* FUNC_2 (int ,int ,struct wpabuf*) ;
 int FUNC_3 (int ,char*,struct wpabuf*) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (struct wpabuf*) ;
 scalar_t__ FUNC_6 (struct wpabuf*) ;

__attribute__((used)) static void FUNC_7(struct eap_sm *VAR_4,
        struct eap_fast_data *VAR_5,
        struct wpabuf *VAR_6)
{
 struct wpabuf *VAR_7;

 FUNC_4(VAR_2, "EAP-FAST: Received %lu bytes encrypted data for"
     " Phase 2", (unsigned long) FUNC_6(VAR_6));

 if (VAR_5->pending_phase2_resp) {
  FUNC_4(VAR_2, "EAP-PEAP: Pending Phase 2 response - "
      "skip decryption and use old data");
  FUNC_0(VAR_4, VAR_5,
          VAR_5->pending_phase2_resp);
  FUNC_5(VAR_5->pending_phase2_resp);
  VAR_5->pending_phase2_resp = ((void*)0);
  return;
 }

 VAR_7 = FUNC_2(VAR_4->ssl_ctx, VAR_5->ssl.conn,
           VAR_6);
 if (VAR_7 == ((void*)0)) {
  FUNC_4(VAR_3, "EAP-FAST: Failed to decrypt Phase 2 "
      "data");
  FUNC_1(VAR_5, VAR_0);
  return;
 }

 FUNC_3(VAR_2, "EAP-FAST: Decrypted Phase 2 TLVs",
       VAR_7);

 FUNC_0(VAR_4, VAR_5, VAR_7);

 if (VAR_4->method_pending == VAR_1) {
  FUNC_4(VAR_2, "EAP-FAST: Phase2 method is in "
      "pending wait state - save decrypted response");
  FUNC_5(VAR_5->pending_phase2_resp);
  VAR_5->pending_phase2_resp = VAR_7;
  return;
 }

 FUNC_5(VAR_7);
}
