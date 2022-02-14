
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef struct wpabuf const wpabuf ;
struct TYPE_4__ {int tls_out; } ;
struct eap_teap_data {TYPE_1__ ssl; scalar_t__ on_tx_completion; int teap_version; struct wpabuf const* pending_phase2_req; } ;
struct eap_sm {int dummy; } ;
struct eap_method_ret {int decision; scalar_t__ methodState; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct eap_sm*,TYPE_1__*,struct wpabuf const*,struct wpabuf const**) ;
 int FUNC_1 (struct eap_sm*,TYPE_1__*,int ,int ,int ,int *,struct wpabuf const**) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct eap_sm*,struct eap_teap_data*,struct eap_method_ret*,int ,struct wpabuf const*,struct wpabuf const**) ;
 int FUNC_4 (int ,char*,struct wpabuf const*) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (struct wpabuf const*) ;
 int FUNC_7 (struct wpabuf const*) ;

__attribute__((used)) static int FUNC_8(struct eap_sm *VAR_5, struct eap_teap_data *VAR_6,
       struct eap_method_ret *VAR_7, u8 VAR_8,
       const struct wpabuf *VAR_9,
       struct wpabuf **VAR_10)
{
 struct wpabuf *VAR_11;
 int VAR_12;

 FUNC_5(VAR_2,
     "EAP-TEAP: Received %lu bytes encrypted data for Phase 2",
     (unsigned long) FUNC_7(VAR_9));

 if (VAR_6->pending_phase2_req) {
  FUNC_5(VAR_2,
      "EAP-TEAP: Pending Phase 2 request - skip decryption and use old data");

  FUNC_2(&VAR_6->ssl);

  VAR_11 = VAR_6->pending_phase2_req;
  VAR_6->pending_phase2_req = ((void*)0);
  goto continue_req;
 }

 if (FUNC_7(VAR_9) == 0) {

  VAR_12 = FUNC_1(VAR_5, &VAR_6->ssl, VAR_1,
        VAR_6->teap_version,
        VAR_8, ((void*)0), VAR_10);
  if (VAR_12 == 0 && !VAR_6->ssl.tls_out &&
      VAR_6->on_tx_completion) {
   FUNC_5(VAR_2,
       "EAP-TEAP: Mark authentication completed at full TX of fragments");
   VAR_7->methodState = VAR_6->on_tx_completion;
   VAR_6->on_tx_completion = 0;
   VAR_7->decision = VAR_0;
  }
  return VAR_12;
 }

 VAR_12 = FUNC_0(VAR_5, &VAR_6->ssl, VAR_9, &VAR_11);
 if (VAR_12)
  return VAR_12;

continue_req:
 FUNC_4(VAR_4, "EAP-TEAP: Decrypted Phase 2 TLV(s)",
   VAR_11);

 if (FUNC_7(VAR_11) < 4) {
  FUNC_5(VAR_3,
      "EAP-TEAP: Too short Phase 2 TLV frame (len=%lu)",
      (unsigned long) FUNC_7(VAR_11));
  FUNC_6(VAR_11);
  return -1;
 }

 VAR_12 = FUNC_3(VAR_5, VAR_6, VAR_7, VAR_8,
      VAR_11, VAR_10);

 FUNC_6(VAR_11);

 return VAR_12;
}
