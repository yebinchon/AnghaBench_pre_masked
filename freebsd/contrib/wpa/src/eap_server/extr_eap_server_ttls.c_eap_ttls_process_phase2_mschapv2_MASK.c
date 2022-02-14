
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char u8 ;
struct eap_ttls_data {int mschapv2_resp_ok; char mschapv2_ident; int mschapv2_auth_response; } ;
struct eap_sm {char* identity; size_t identity_len; TYPE_1__* user; } ;
struct TYPE_2__ {int ttls_auth; int password_len; int password; scalar_t__ password_hash; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (char*,char*,char*,size_t,char*) ;
 int FUNC_1 (struct eap_sm*,char*,char*,size_t,char*,char*) ;
 char* FUNC_2 (struct eap_sm*,struct eap_ttls_data*,size_t) ;
 int FUNC_3 (struct eap_ttls_data*,int ) ;
 int FUNC_4 (int ,int ,char*,char*,char*,size_t,char*,int ) ;
 int FUNC_5 (int ,char*,char*,char*,size_t,char*,int ) ;
 int FUNC_6 (char*,char*,char*,size_t,int ,int ,char*) ;
 int FUNC_7 (char*,char*,char*,size_t,int ,char*) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (char*,char*,int) ;
 int FUNC_10 (int ,char*,char*,int) ;
 int FUNC_11 (int ,char*,char*,size_t) ;
 int FUNC_12 (int ,char*,...) ;

__attribute__((used)) static void FUNC_13(struct eap_sm *VAR_7,
          struct eap_ttls_data *VAR_8,
          u8 *VAR_9,
          size_t VAR_10,
          u8 *VAR_11, size_t VAR_12)
{
 u8 *VAR_13, *VAR_14, VAR_15[24], *VAR_16, *VAR_17,
  *VAR_18;
 size_t VAR_19, VAR_20;

 if (VAR_9 == ((void*)0) || VAR_11 == ((void*)0) ||
     VAR_10 != VAR_1 ||
     VAR_12 != VAR_2) {
  FUNC_12(VAR_4, "EAP-TTLS/MSCHAPV2: Invalid MS-CHAP2 "
      "attributes (challenge len %lu response len %lu)",
      (unsigned long) VAR_10,
      (unsigned long) VAR_12);
  FUNC_3(VAR_8, VAR_3);
  return;
 }

 if (!VAR_7->user || !VAR_7->user->password ||
     !(VAR_7->user->ttls_auth & VAR_0)) {
  FUNC_12(VAR_4, "EAP-TTLS/MSCHAPV2: No user password "
      "configured");
  FUNC_3(VAR_8, VAR_3);
  return;
 }

 if (VAR_7->identity == ((void*)0)) {
  FUNC_12(VAR_4, "EAP-TTLS/MSCHAPV2: No user identity "
      "known");
  FUNC_3(VAR_8, VAR_3);
  return;
 }




 VAR_14 = VAR_7->identity;
 VAR_19 = VAR_7->identity_len;
 for (VAR_20 = 0; VAR_20 < VAR_19; VAR_20++) {
  if (VAR_14[VAR_20] == '\\') {
   VAR_19 -= VAR_20 + 1;
   VAR_14 += VAR_20 + 1;
   break;
  }
 }

 VAR_13 = FUNC_2(
  VAR_7, VAR_8, VAR_1 + 1);
 if (VAR_13 == ((void*)0)) {
  FUNC_12(VAR_4, "EAP-TTLS/MSCHAPV2: Failed to generate "
      "challenge from TLS data");
  FUNC_3(VAR_8, VAR_3);
  return;
 }

 if (FUNC_9(VAR_9, VAR_13, VAR_1)
     != 0 ||
     VAR_11[0] != VAR_13[VAR_1]) {
  FUNC_12(VAR_4, "EAP-TTLS/MSCHAPV2: Challenge mismatch");
  FUNC_8(VAR_13);
  FUNC_3(VAR_8, VAR_3);
  return;
 }
 FUNC_8(VAR_13);

 VAR_18 = VAR_9;
 VAR_17 = VAR_11 + 2;

 FUNC_11(VAR_5, "EAP-TTLS/MSCHAPV2: User",
     VAR_14, VAR_19);
 FUNC_10(VAR_5, "EAP-TTLS/MSCHAPV2: auth_challenge",
      VAR_18, VAR_1);
 FUNC_10(VAR_5, "EAP-TTLS/MSCHAPV2: peer_challenge",
      VAR_17, VAR_1);

 if (VAR_7->user->password_hash) {
  FUNC_7(VAR_18, VAR_17,
         VAR_14, VAR_19,
         VAR_7->user->password,
         VAR_15);
 } else {
  FUNC_6(VAR_18, VAR_17,
         VAR_14, VAR_19,
         VAR_7->user->password,
         VAR_7->user->password_len,
         VAR_15);
 }

 VAR_16 = VAR_11 + 2 + VAR_1 + 8;
 if (FUNC_9(VAR_15, VAR_16, 24) == 0) {
  FUNC_12(VAR_4, "EAP-TTLS/MSCHAPV2: Correct "
      "NT-Response");
  VAR_8->mschapv2_resp_ok = 1;

  if (VAR_7->user->password_hash) {
   FUNC_5(
    VAR_7->user->password,
    VAR_17, VAR_18,
    VAR_14, VAR_19, VAR_15,
    VAR_8->mschapv2_auth_response);
  } else {
   FUNC_4(
    VAR_7->user->password, VAR_7->user->password_len,
    VAR_17, VAR_18,
    VAR_14, VAR_19, VAR_15,
    VAR_8->mschapv2_auth_response);
  }
 } else {
  FUNC_12(VAR_4, "EAP-TTLS/MSCHAPV2: Invalid "
      "NT-Response");
  FUNC_10(VAR_5, "EAP-TTLS/MSCHAPV2: Received",
       VAR_16, 24);
  FUNC_10(VAR_5, "EAP-TTLS/MSCHAPV2: Expected",
       VAR_15, 24);
  VAR_8->mschapv2_resp_ok = 0;
 }
 FUNC_3(VAR_8, VAR_6);
 VAR_8->mschapv2_ident = VAR_11[0];
}
