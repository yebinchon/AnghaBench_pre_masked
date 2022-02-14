
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int* identity; size_t identity_len; TYPE_1__* user; } ;
struct eap_mschapv2_hdr {scalar_t__ op_code; int mschapv2_id; } ;
struct eap_mschapv2_data {int* peer_challenge; int master_key_valid; void* state; int master_key; int auth_response; int auth_challenge; int resp_mschapv2_id; } ;
struct TYPE_2__ {int* password; int password_len; scalar_t__ password_hash; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 scalar_t__ FUNC_0 (int const*,int ,int const*,size_t,int*) ;
 int* FUNC_1 (int ,int ,struct wpabuf*,size_t*) ;
 int FUNC_2 (struct eap_sm*,char*,char*) ;
 int FUNC_3 (struct eap_sm*,char*,int const*,size_t,int*,int const*) ;
 scalar_t__ FUNC_4 (int const*,int const*,int ,int const*,size_t,int const*,int ) ;
 int FUNC_5 (int ,int const*,int const*,size_t,int*,int ,int*) ;
 int FUNC_6 (int ,int const*,int const*,size_t,int*,int*) ;
 scalar_t__ FUNC_7 (int*,int const*,int ) ;
 scalar_t__ FUNC_8 (int const*,int*) ;
 scalar_t__ FUNC_9 (int*,int ,int*) ;
 int FUNC_10 (char*) ;
 char* FUNC_11 (size_t) ;
 scalar_t__ FUNC_12 (int const*,int const*,size_t) ;
 scalar_t__ FUNC_13 (int const*,int*,int) ;
 int FUNC_14 (char*,size_t,int const*,size_t) ;
 int FUNC_15 (int ,char*,int const*,int) ;
 int FUNC_16 (int ,char*,int const*,size_t) ;
 int FUNC_17 (int ,char*,struct wpabuf*) ;
 int FUNC_18 (int ,char*,int ,int ) ;
 int FUNC_19 (int ,char*,...) ;

__attribute__((used)) static void FUNC_20(struct eap_sm *VAR_9,
       struct eap_mschapv2_data *VAR_10,
       struct wpabuf *VAR_11)
{
 struct eap_mschapv2_hdr *VAR_12;
 const u8 *VAR_13, *VAR_14, *VAR_15, *VAR_16, *VAR_17;
 u8 VAR_18;
 size_t VAR_19, VAR_20, VAR_21;
 u8 VAR_22[24];
 const u8 *VAR_23, *VAR_24;
 size_t VAR_25, VAR_26;
 int VAR_27;
 char *VAR_28;

 VAR_13 = FUNC_1(VAR_1, VAR_0, VAR_11,
          &VAR_19);
 if (VAR_13 == ((void*)0) || VAR_19 < 1)
  return;

 VAR_14 = VAR_13 + VAR_19;
 VAR_12 = (struct eap_mschapv2_hdr *) VAR_13;
 VAR_13 = (u8 *) (VAR_12 + 1);

 if (VAR_19 < sizeof(*VAR_12) + 1 + 49 ||
     VAR_12->op_code != VAR_5 ||
     VAR_13[0] != 49) {
  FUNC_17(VAR_6, "EAP-MSCHAPV2: Invalid response",
    VAR_11);
  VAR_10->state = VAR_2;
  return;
 }
 VAR_10->resp_mschapv2_id = VAR_12->mschapv2_id;
 VAR_13++;
 VAR_15 = VAR_13;
 VAR_13 += 16 + 8;
 VAR_16 = VAR_13;
 VAR_13 += 24;
 VAR_18 = *VAR_13++;
 VAR_17 = VAR_13;
 VAR_20 = VAR_14 - VAR_17;

 if (VAR_10->peer_challenge) {
  FUNC_19(VAR_6, "EAP-MSCHAPV2: Using pre-configured "
      "Peer-Challenge");
  VAR_15 = VAR_10->peer_challenge;
 }
 FUNC_15(VAR_7, "EAP-MSCHAPV2: Peer-Challenge",
      VAR_15, 16);
 FUNC_15(VAR_7, "EAP-MSCHAPV2: NT-Response", VAR_16, 24);
 FUNC_19(VAR_7, "EAP-MSCHAPV2: Flags 0x%x", VAR_18);
 FUNC_16(VAR_7, "EAP-MSCHAPV2: Name", VAR_17, VAR_20);

 VAR_28 = FUNC_11(VAR_20 * 4 + 1);
 if (VAR_28) {
  FUNC_14(VAR_28, VAR_20 * 4 + 1, VAR_17, VAR_20);
  FUNC_2(VAR_9, "EAP-MSCHAPV2 Name '%s'", VAR_28);
  FUNC_10(VAR_28);
 }




 VAR_23 = VAR_9->identity;
 VAR_25 = VAR_9->identity_len;
 for (VAR_21 = 0; VAR_21 < VAR_25; VAR_21++) {
  if (VAR_23[VAR_21] == '\\') {
   VAR_25 -= VAR_21 + 1;
   VAR_23 += VAR_21 + 1;
   break;
  }
 }

 VAR_24 = VAR_17;
 VAR_26 = VAR_20;
 for (VAR_21 = 0; VAR_21 < VAR_26; VAR_21++) {
  if (VAR_24[VAR_21] == '\\') {
   VAR_26 -= VAR_21 + 1;
   VAR_24 += VAR_21 + 1;
   break;
  }
 }
 if (VAR_25 != VAR_26 ||
     FUNC_12(VAR_23, VAR_24, VAR_25) != 0) {
  FUNC_19(VAR_6, "EAP-MSCHAPV2: Mismatch in user names");
  FUNC_16(VAR_6, "EAP-MSCHAPV2: Expected user "
      "name", VAR_23, VAR_25);
  FUNC_16(VAR_6, "EAP-MSCHAPV2: Received user "
      "name", VAR_24, VAR_26);
  VAR_10->state = VAR_2;
  return;
 }

 FUNC_16(VAR_7, "EAP-MSCHAPV2: User name",
     VAR_23, VAR_25);

 if (VAR_9->user->password_hash) {
  VAR_27 = FUNC_6(VAR_10->auth_challenge,
        VAR_15,
        VAR_23, VAR_25,
        VAR_9->user->password,
        VAR_22);
 } else {
  VAR_27 = FUNC_5(VAR_10->auth_challenge,
        VAR_15,
        VAR_23, VAR_25,
        VAR_9->user->password,
        VAR_9->user->password_len,
        VAR_22);
 }
 if (VAR_27) {
  VAR_10->state = VAR_2;
  return;
 }

 if (FUNC_13(VAR_16, VAR_22, 24) == 0) {
  const u8 *VAR_29;
  u8 VAR_30[16], VAR_31[16];

  FUNC_19(VAR_6, "EAP-MSCHAPV2: Correct NT-Response");
  VAR_10->state = VAR_8;




  if (VAR_9->user->password_hash) {
   VAR_29 = VAR_9->user->password;
  } else {
   if (FUNC_9(VAR_9->user->password,
          VAR_9->user->password_len,
          VAR_30) < 0) {
    VAR_10->state = VAR_2;
    return;
   }
   VAR_29 = VAR_30;
  }
  if (FUNC_4(
       VAR_29, VAR_15, VAR_10->auth_challenge,
       VAR_23, VAR_25, VAR_16,
       VAR_10->auth_response) < 0 ||
      FUNC_8(VAR_29, VAR_31) < 0 ||
      FUNC_7(VAR_31, VAR_16,
       VAR_10->master_key)) {
   VAR_10->state = VAR_2;
   return;
  }
  VAR_10->master_key_valid = 1;
  FUNC_18(VAR_6, "EAP-MSCHAPV2: Derived Master Key",
    VAR_10->master_key, VAR_4);
 } else {
  FUNC_15(VAR_7, "EAP-MSCHAPV2: Expected NT-Response",
       VAR_22, 24);
  FUNC_19(VAR_6, "EAP-MSCHAPV2: Invalid NT-Response");
  VAR_10->state = VAR_3;
 }
}
