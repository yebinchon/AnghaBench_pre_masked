
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpabuf {int dummy; } ;
struct TYPE_2__ {int conn; } ;
struct eap_ttls_data {scalar_t__ tnc_started; TYPE_1__ ssl; struct wpabuf* pending_phase2_eap_resp; } ;
struct eap_ttls_avp {int user_name_len; char* eap; int mschap2_response_len; scalar_t__ mschap2_response; int mschap_challenge_len; int mschap_challenge; int mschap_response_len; scalar_t__ mschap_response; int chap_password_len; scalar_t__ chap_password; int chap_challenge_len; int chap_challenge; int user_password_len; scalar_t__ user_password; scalar_t__ eap_len; scalar_t__ user_name; } ;
struct eap_sm {char* identity; int identity_len; int ssl_ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct eap_sm*,char*,char*) ;
 scalar_t__ FUNC_1 (struct wpabuf*,struct eap_ttls_avp*) ;
 int FUNC_2 (struct eap_sm*,struct eap_ttls_data*,int ,int ,scalar_t__,int ) ;
 int FUNC_3 (struct eap_sm*,struct eap_ttls_data*,char*,scalar_t__) ;
 int FUNC_4 (struct eap_sm*,struct eap_ttls_data*,int ,int ,scalar_t__,int ) ;
 int FUNC_5 (struct eap_sm*,struct eap_ttls_data*,int ,int ,scalar_t__,int ) ;
 int FUNC_6 (struct eap_sm*,struct eap_ttls_data*,scalar_t__,int ) ;
 int FUNC_7 (struct eap_ttls_data*,int ) ;
 scalar_t__ FUNC_8 (struct eap_sm*,scalar_t__,int,int) ;
 int FUNC_9 (char*) ;
 char* FUNC_10 (int) ;
 char* FUNC_11 (scalar_t__,int) ;
 int FUNC_12 (char*,int,scalar_t__,int) ;
 struct wpabuf* FUNC_13 (int ,int ,struct wpabuf*) ;
 int FUNC_14 (int ,char*,struct wpabuf*) ;
 int FUNC_15 (int ,char*,...) ;
 int FUNC_16 (struct wpabuf*) ;
 char* FUNC_17 (struct wpabuf*) ;
 scalar_t__ FUNC_18 (struct wpabuf*) ;

__attribute__((used)) static void FUNC_19(struct eap_sm *VAR_3,
        struct eap_ttls_data *VAR_4,
        struct wpabuf *VAR_5)
{
 struct wpabuf *VAR_6;
 struct eap_ttls_avp VAR_7;

 FUNC_15(VAR_1, "EAP-TTLS: received %lu bytes encrypted data for"
     " Phase 2", (unsigned long) FUNC_18(VAR_5));

 if (VAR_4->pending_phase2_eap_resp) {
  FUNC_15(VAR_1, "EAP-TTLS: Pending Phase 2 EAP response "
      "- skip decryption and use old data");
  FUNC_3(
   VAR_3, VAR_4, FUNC_17(VAR_4->pending_phase2_eap_resp),
   FUNC_18(VAR_4->pending_phase2_eap_resp));
  FUNC_16(VAR_4->pending_phase2_eap_resp);
  VAR_4->pending_phase2_eap_resp = ((void*)0);
  return;
 }

 VAR_6 = FUNC_13(VAR_3->ssl_ctx, VAR_4->ssl.conn,
           VAR_5);
 if (VAR_6 == ((void*)0)) {
  FUNC_15(VAR_2, "EAP-TTLS: Failed to decrypt Phase 2 "
      "data");
  FUNC_7(VAR_4, VAR_0);
  return;
 }

 FUNC_14(VAR_1, "EAP-TTLS: Decrypted Phase 2 EAP",
       VAR_6);

 if (FUNC_1(VAR_6, &VAR_7) < 0) {
  FUNC_15(VAR_1, "EAP-TTLS: Failed to parse AVPs");
  FUNC_16(VAR_6);
  FUNC_7(VAR_4, VAR_0);
  return;
 }

 if (VAR_7.user_name) {
  char *VAR_8;
  VAR_8 = FUNC_10(VAR_7.user_name_len * 4 + 1);
  if (VAR_8) {
   FUNC_12(VAR_8, VAR_7.user_name_len * 4 + 1,
          VAR_7.user_name,
          VAR_7.user_name_len);
   FUNC_0(VAR_3, "TTLS-User-Name '%s'", VAR_8);
   FUNC_9(VAR_8);
  }

  FUNC_9(VAR_3->identity);
  VAR_3->identity = FUNC_11(VAR_7.user_name, VAR_7.user_name_len);
  if (VAR_3->identity == ((void*)0)) {
   FUNC_7(VAR_4, VAR_0);
   goto done;
  }
  VAR_3->identity_len = VAR_7.user_name_len;
  if (FUNC_8(VAR_3, VAR_7.user_name, VAR_7.user_name_len, 1)
      != 0) {
   FUNC_15(VAR_1, "EAP-TTLS: Phase2 Identity not "
       "found in the user database");
   FUNC_7(VAR_4, VAR_0);
   goto done;
  }
 }
 if (VAR_7.eap) {
  FUNC_3(VAR_3, VAR_4, VAR_7.eap,
         VAR_7.eap_len);
 } else if (VAR_7.user_password) {
  FUNC_6(VAR_3, VAR_4, VAR_7.user_password,
         VAR_7.user_password_len);
 } else if (VAR_7.chap_password) {
  FUNC_2(VAR_3, VAR_4,
          VAR_7.chap_challenge,
          VAR_7.chap_challenge_len,
          VAR_7.chap_password,
          VAR_7.chap_password_len);
 } else if (VAR_7.mschap_response) {
  FUNC_4(VAR_3, VAR_4,
            VAR_7.mschap_challenge,
            VAR_7.mschap_challenge_len,
            VAR_7.mschap_response,
            VAR_7.mschap_response_len);
 } else if (VAR_7.mschap2_response) {
  FUNC_5(VAR_3, VAR_4,
       VAR_7.mschap_challenge,
       VAR_7.mschap_challenge_len,
       VAR_7.mschap2_response,
       VAR_7.mschap2_response_len);
 }

done:
 FUNC_16(VAR_6);
 FUNC_9(VAR_7.eap);
}
