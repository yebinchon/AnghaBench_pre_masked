
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct eap_ttls_data {int dummy; } ;
struct eap_sm {TYPE_1__* user; int identity_len; int identity; } ;
struct TYPE_2__ {int ttls_auth; int password_len; int password; scalar_t__ password_hash; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (scalar_t__*,int ,scalar_t__*) ;
 int FUNC_1 (struct eap_sm*,char*,int ,int ,scalar_t__*,scalar_t__*) ;
 scalar_t__* FUNC_2 (struct eap_sm*,struct eap_ttls_data*,size_t) ;
 int FUNC_3 (struct eap_ttls_data*,int ) ;
 int FUNC_4 (struct eap_sm*,struct eap_ttls_data*) ;
 scalar_t__ FUNC_5 (scalar_t__*,int ,int ,scalar_t__*) ;
 int FUNC_6 (scalar_t__*) ;
 scalar_t__ FUNC_7 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_8 (int ,char*,scalar_t__*,int) ;
 int FUNC_9 (int ,char*,...) ;

__attribute__((used)) static void FUNC_10(struct eap_sm *VAR_7,
        struct eap_ttls_data *VAR_8,
        u8 *VAR_9, size_t VAR_10,
        u8 *VAR_11, size_t VAR_12)
{
 u8 *VAR_13, VAR_14[24];

 if (VAR_9 == ((void*)0) || VAR_11 == ((void*)0) ||
     VAR_10 != VAR_1 ||
     VAR_12 != VAR_2) {
  FUNC_9(VAR_4, "EAP-TTLS/MSCHAP: Invalid MS-CHAP "
      "attributes (challenge len %lu response len %lu)",
      (unsigned long) VAR_10,
      (unsigned long) VAR_12);
  FUNC_3(VAR_8, VAR_3);
  return;
 }

 if (!VAR_7->user || !VAR_7->user->password ||
     !(VAR_7->user->ttls_auth & VAR_0)) {
  FUNC_9(VAR_4, "EAP-TTLS/MSCHAP: No user password "
      "configured");
  FUNC_3(VAR_8, VAR_3);
  return;
 }

 VAR_13 = FUNC_2(VAR_7, VAR_8,
        VAR_1 + 1);
 if (VAR_13 == ((void*)0)) {
  FUNC_9(VAR_4, "EAP-TTLS/MSCHAP: Failed to generate "
      "challenge from TLS data");
  FUNC_3(VAR_8, VAR_3);
  return;
 }







 if (FUNC_7(VAR_9, VAR_13, VAR_1)
     != 0 ||
     VAR_11[0] != VAR_13[VAR_1]) {
  FUNC_9(VAR_4, "EAP-TTLS/MSCHAP: Challenge mismatch");
  FUNC_6(VAR_13);
  FUNC_3(VAR_8, VAR_3);
  return;
 }
 FUNC_6(VAR_13);

 if ((VAR_7->user->password_hash &&
      FUNC_0(VAR_9, VAR_7->user->password, VAR_14)) ||
     (!VAR_7->user->password_hash &&
      FUNC_5(VAR_9, VAR_7->user->password,
       VAR_7->user->password_len, VAR_14))) {
  FUNC_3(VAR_8, VAR_3);
  return;
 }

 if (FUNC_7(VAR_14, VAR_11 + 2 + 24, 24) == 0) {
  FUNC_9(VAR_4, "EAP-TTLS/MSCHAP: Correct response");
  FUNC_3(VAR_8, VAR_6);
  FUNC_4(VAR_7, VAR_8);
 } else {
  FUNC_9(VAR_4, "EAP-TTLS/MSCHAP: Invalid NT-Response");
  FUNC_8(VAR_5, "EAP-TTLS/MSCHAP: Received",
       VAR_11 + 2 + 24, 24);
  FUNC_8(VAR_5, "EAP-TTLS/MSCHAP: Expected",
       VAR_14, 24);
  FUNC_3(VAR_8, VAR_3);
 }
}
