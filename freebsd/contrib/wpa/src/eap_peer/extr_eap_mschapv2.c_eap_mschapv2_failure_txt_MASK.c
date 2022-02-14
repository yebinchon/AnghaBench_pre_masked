
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_sm {int msg_ctx; } ;
struct eap_peer_config {int mschapv2_retry; int * new_password; scalar_t__ phase2; } ;
struct eap_mschapv2_data {int passwd_change_challenge_valid; int passwd_change_version; void* prev_error; int passwd_change_challenge; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (char*) ;
 struct eap_peer_config* FUNC_1 (struct eap_sm*) ;
 int FUNC_2 (struct eap_sm*) ;
 int FUNC_3 (struct eap_sm*) ;
 int FUNC_4 (struct eap_sm*) ;
 scalar_t__ FUNC_5 (char*,int ,int) ;
 char* FUNC_6 (char*,char) ;
 scalar_t__ FUNC_7 (char*,char*,int) ;
 scalar_t__ FUNC_8 (scalar_t__,char*) ;
 int FUNC_9 (int ,char*,int ,int) ;
 int FUNC_10 (int ,int ,char*,...) ;
 int FUNC_11 (int ,char*,...) ;

__attribute__((used)) static int FUNC_12(struct eap_sm *VAR_6,
        struct eap_mschapv2_data *VAR_7, char *VAR_8)
{
 char *VAR_9, *VAR_10 = "";
 int VAR_11 = 1;
 struct eap_peer_config *VAR_12 = FUNC_1(VAR_6);





 VAR_9 = VAR_8;

 if (VAR_9 && FUNC_7(VAR_9, "E=", 2) == 0) {
  VAR_9 += 2;
  VAR_7->prev_error = FUNC_0(VAR_9);
  FUNC_11(VAR_2, "EAP-MSCHAPV2: error %d",
      VAR_7->prev_error);
  VAR_9 = FUNC_6(VAR_9, ' ');
  if (VAR_9)
   VAR_9++;
 }

 if (VAR_9 && FUNC_7(VAR_9, "R=", 2) == 0) {
  VAR_9 += 2;
  VAR_11 = FUNC_0(VAR_9);
  FUNC_11(VAR_2, "EAP-MSCHAPV2: retry is %sallowed",
      VAR_11 == 1 ? "" : "not ");
  VAR_9 = FUNC_6(VAR_9, ' ');
  if (VAR_9)
   VAR_9++;
 }

 if (VAR_9 && FUNC_7(VAR_9, "C=", 2) == 0) {
  int VAR_13;
  VAR_9 += 2;
  VAR_13 = FUNC_6(VAR_9, ' ') - (char *) VAR_9;
  if (VAR_13 == VAR_5 * 2) {
   if (FUNC_5(VAR_9, VAR_7->passwd_change_challenge,
           VAR_5)) {
    FUNC_11(VAR_2, "EAP-MSCHAPV2: invalid "
        "failure challenge");
   } else {
    FUNC_9(VAR_2, "EAP-MSCHAPV2: failure "
         "challenge",
         VAR_7->passwd_change_challenge,
         VAR_5);
    VAR_7->passwd_change_challenge_valid = 1;
   }
  } else {
   FUNC_11(VAR_2, "EAP-MSCHAPV2: invalid failure "
       "challenge len %d", VAR_13);
  }
  VAR_9 = FUNC_6(VAR_9, ' ');
  if (VAR_9)
   VAR_9++;
 } else {
  FUNC_11(VAR_2, "EAP-MSCHAPV2: required challenge field "
      "was not present in failure message");
 }

 if (VAR_9 && FUNC_7(VAR_9, "V=", 2) == 0) {
  VAR_9 += 2;
  VAR_7->passwd_change_version = FUNC_0(VAR_9);
  FUNC_11(VAR_2, "EAP-MSCHAPV2: password changing "
      "protocol version %d", VAR_7->passwd_change_version);
  VAR_9 = FUNC_6(VAR_9, ' ');
  if (VAR_9)
   VAR_9++;
 }

 if (VAR_9 && FUNC_7(VAR_9, "M=", 2) == 0) {
  VAR_9 += 2;
  VAR_10 = VAR_9;
 }
 if (VAR_7->prev_error == VAR_0 && VAR_11 &&
     VAR_12 && VAR_12->phase2 &&
     FUNC_8(VAR_12->phase2, "mschapv2_retry=0")) {
  FUNC_11(VAR_2,
      "EAP-MSCHAPV2: mark password retry disabled based on local configuration");
  VAR_11 = 0;
 }
 FUNC_10(VAR_6->msg_ctx, VAR_4,
  "EAP-MSCHAPV2: failure message: '%s' (retry %sallowed, error "
  "%d)",
  VAR_10, VAR_11 == 1 ? "" : "not ", VAR_7->prev_error);
 if (VAR_7->prev_error == VAR_1 &&
     VAR_7->passwd_change_version == 3 && VAR_12) {
  if (VAR_12->new_password == ((void*)0)) {
   FUNC_10(VAR_6->msg_ctx, VAR_3,
    "EAP-MSCHAPV2: Password expired - password "
    "change required");
   FUNC_3(VAR_6);
  }
 } else if (VAR_11 == 1 && VAR_12) {


  if (!VAR_12->mschapv2_retry)
   FUNC_2(VAR_6);
  FUNC_4(VAR_6);
  VAR_12->mschapv2_retry = 1;
 } else if (VAR_12) {

  VAR_12->mschapv2_retry = 0;
 }

 return VAR_11 == 1;
}
