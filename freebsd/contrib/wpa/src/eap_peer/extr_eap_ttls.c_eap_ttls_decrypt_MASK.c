
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef struct wpabuf const wpabuf ;
struct ttls_parse_avp {int eapdata; } ;
struct eap_ttls_data {scalar_t__ phase2_start; int ssl; int ttls_version; struct wpabuf const* pending_phase2_req; } ;
struct eap_sm {int dummy; } ;
struct eap_method_ret {int decision; int methodState; } ;
typedef int parse ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct eap_sm*,int *,struct wpabuf const*,struct wpabuf const**) ;
 int FUNC_1 (struct eap_sm*,int *,int ,int ,int ,int *,struct wpabuf const**) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct eap_sm*,struct eap_ttls_data*,struct eap_method_ret*,int ,struct wpabuf const**) ;
 scalar_t__ FUNC_4 (struct wpabuf const*,struct ttls_parse_avp*) ;
 int FUNC_5 (struct eap_sm*,struct eap_ttls_data*,struct eap_method_ret*,int ,struct wpabuf const**) ;
 int FUNC_6 (struct eap_sm*,struct eap_ttls_data*,struct eap_method_ret*,int ,struct ttls_parse_avp*,struct wpabuf const*,struct wpabuf const**) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct ttls_parse_avp*,int ,int) ;
 int FUNC_9 (int ,char*,...) ;
 int FUNC_10 (struct wpabuf const*) ;
 scalar_t__ FUNC_11 (struct wpabuf const*) ;

__attribute__((used)) static int FUNC_12(struct eap_sm *VAR_4, struct eap_ttls_data *VAR_5,
       struct eap_method_ret *VAR_6, u8 VAR_7,
       const struct wpabuf *VAR_8,
       struct wpabuf **VAR_9)
{
 struct wpabuf *VAR_10 = ((void*)0);
 int VAR_11 = 0;
 struct ttls_parse_avp VAR_12;

 FUNC_8(&VAR_12, 0, sizeof(VAR_12));

 FUNC_9(VAR_3, "EAP-TTLS: received %lu bytes encrypted data for"
     " Phase 2",
     VAR_8 ? (unsigned long) FUNC_11(VAR_8) : 0);

 if (VAR_5->pending_phase2_req) {
  FUNC_9(VAR_3, "EAP-TTLS: Pending Phase 2 request - "
      "skip decryption and use old data");

  FUNC_2(&VAR_5->ssl);

  VAR_10 = VAR_5->pending_phase2_req;
  VAR_5->pending_phase2_req = ((void*)0);
  if (FUNC_11(VAR_10) == 0) {
   FUNC_10(VAR_10);
   return FUNC_3(
    VAR_4, VAR_5, VAR_6, VAR_7, VAR_9);
  }
  goto continue_req;
 }

 if ((VAR_8 == ((void*)0) || FUNC_11(VAR_8) == 0) &&
     VAR_5->phase2_start) {
  return FUNC_5(VAR_4, VAR_5, VAR_6, VAR_7,
          VAR_9);
 }

 if (VAR_8 == ((void*)0) || FUNC_11(VAR_8) == 0) {

  return FUNC_1(VAR_4, &VAR_5->ssl, VAR_1,
         VAR_5->ttls_version,
         VAR_7, ((void*)0), VAR_9);
 }

 VAR_11 = FUNC_0(VAR_4, &VAR_5->ssl, VAR_8, &VAR_10);
 if (VAR_11)
  goto done;

continue_req:
 VAR_5->phase2_start = 0;

 if (FUNC_4(VAR_10, &VAR_12) < 0) {
  VAR_11 = -1;
  goto done;
 }

 VAR_11 = FUNC_6(VAR_4, VAR_5, VAR_6, VAR_7,
         &VAR_12, VAR_10, VAR_9);

done:
 FUNC_10(VAR_10);
 FUNC_7(VAR_12.eapdata);

 if (VAR_11 < 0) {
  VAR_6->methodState = VAR_2;
  VAR_6->decision = VAR_0;
 }

 return VAR_11;
}
