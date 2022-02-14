
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef struct wpabuf const wpabuf ;
struct eap_sm {int dummy; } ;
struct eap_method_ret {int dummy; } ;
struct eap_fast_data {int ssl; int fast_version; struct wpabuf const* pending_phase2_req; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct eap_sm*,struct eap_fast_data*,struct eap_method_ret*,int ,struct wpabuf const*,struct wpabuf const**) ;
 int FUNC_1 (struct eap_sm*,int *,struct wpabuf const*,struct wpabuf const**) ;
 int FUNC_2 (struct eap_sm*,int *,int ,int ,int ,int *,struct wpabuf const**) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*,struct wpabuf const*) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (struct wpabuf const*) ;
 int FUNC_7 (struct wpabuf const*) ;

__attribute__((used)) static int FUNC_8(struct eap_sm *VAR_4, struct eap_fast_data *VAR_5,
       struct eap_method_ret *VAR_6, u8 VAR_7,
       const struct wpabuf *VAR_8,
       struct wpabuf **VAR_9)
{
 struct wpabuf *VAR_10;
 int VAR_11;

 FUNC_5(VAR_1, "EAP-FAST: Received %lu bytes encrypted data for"
     " Phase 2", (unsigned long) FUNC_7(VAR_8));

 if (VAR_5->pending_phase2_req) {
  FUNC_5(VAR_1, "EAP-FAST: Pending Phase 2 request - "
      "skip decryption and use old data");

  FUNC_3(&VAR_5->ssl);

  VAR_10 = VAR_5->pending_phase2_req;
  VAR_5->pending_phase2_req = ((void*)0);
  goto continue_req;
 }

 if (FUNC_7(VAR_8) == 0) {

  return FUNC_2(VAR_4, &VAR_5->ssl, VAR_0,
         VAR_5->fast_version,
         VAR_7, ((void*)0), VAR_9);
 }

 VAR_11 = FUNC_1(VAR_4, &VAR_5->ssl, VAR_8, &VAR_10);
 if (VAR_11)
  return VAR_11;

continue_req:
 FUNC_4(VAR_3, "EAP-FAST: Decrypted Phase 2 TLV(s)",
   VAR_10);

 if (FUNC_7(VAR_10) < 4) {
  FUNC_5(VAR_2, "EAP-FAST: Too short Phase 2 "
      "TLV frame (len=%lu)",
      (unsigned long) FUNC_7(VAR_10));
  FUNC_6(VAR_10);
  return -1;
 }

 VAR_11 = FUNC_0(VAR_4, VAR_5, VAR_6, VAR_7,
      VAR_10, VAR_9);

 FUNC_6(VAR_10);

 return VAR_11;
}
