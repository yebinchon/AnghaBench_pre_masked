
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct eap_teap_data {int dummy; } ;
struct eap_sm {int* identity; int identity_len; TYPE_1__* user; } ;
struct TYPE_2__ {int password_len; int password; scalar_t__ password_hash; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct eap_teap_data*,int ) ;
 int FUNC_1 (struct eap_teap_data*,int ) ;
 int FUNC_2 (struct eap_sm*,struct eap_teap_data*) ;
 scalar_t__ FUNC_3 (struct eap_sm*,int*,int,int) ;
 int FUNC_4 (int*) ;
 scalar_t__ FUNC_5 (int ,int*,int) ;
 int* FUNC_6 (int*,int) ;
 int FUNC_7 (int ,char*,int*,int) ;
 int FUNC_8 (int ,char*,int*,int) ;
 int FUNC_9 (int ,char*,...) ;

__attribute__((used)) static void FUNC_10(struct eap_sm *VAR_2,
          struct eap_teap_data *VAR_3,
          u8 *VAR_4, size_t VAR_5)
{
 u8 *VAR_6, *VAR_7, *VAR_8, *VAR_9, *VAR_10;
 u8 VAR_11, VAR_12;

 VAR_6 = VAR_4;
 VAR_7 = VAR_6 + VAR_5;

 if (VAR_7 - VAR_6 < 1) {
  FUNC_9(VAR_1,
      "EAP-TEAP: No room for Basic-Password-Auth-Resp Userlen field");
  FUNC_0(VAR_3, 0);
  return;
 }
 VAR_11 = *VAR_6++;
 if (VAR_7 - VAR_6 < VAR_11) {
  FUNC_9(VAR_1,
      "EAP-TEAP: Truncated Basic-Password-Auth-Resp Username field");
  FUNC_0(VAR_3, 0);
  return;
 }
 VAR_8 = VAR_6;
 VAR_6 += VAR_11;
 FUNC_7(VAR_1,
     "EAP-TEAP: Basic-Password-Auth-Resp Username",
     VAR_8, VAR_11);

 if (VAR_7 - VAR_6 < 1) {
  FUNC_9(VAR_1,
      "EAP-TEAP: No room for Basic-Password-Auth-Resp Passlen field");
  FUNC_0(VAR_3, 0);
  return;
 }
 VAR_12 = *VAR_6++;
 if (VAR_7 - VAR_6 < VAR_12) {
  FUNC_9(VAR_1,
      "EAP-TEAP: Truncated Basic-Password-Auth-Resp Password field");
  FUNC_0(VAR_3, 0);
  return;
 }
 VAR_9 = VAR_6;
 VAR_6 += VAR_12;
 FUNC_8(VAR_1,
         "EAP-TEAP: Basic-Password-Auth-Resp Password",
         VAR_9, VAR_12);

 if (VAR_7 > VAR_6) {
  FUNC_9(VAR_1,
      "EAP-TEAP: Unexpected %d extra octet(s) at the end of Basic-Password-Auth-Resp TLV",
      (int) (VAR_7 - VAR_6));
  FUNC_0(VAR_3, 0);
  return;
 }

 if (FUNC_3(VAR_2, VAR_8, VAR_11, 1) != 0) {
  FUNC_9(VAR_1,
      "EAP-TEAP: Username not found in the user database");
  FUNC_0(VAR_3, 0);
  return;
 }

 if (!VAR_2->user || !VAR_2->user->password || VAR_2->user->password_hash) {
  FUNC_9(VAR_1,
      "EAP-TEAP: No plaintext user password configured");
  FUNC_0(VAR_3, 0);
  return;
 }

 if (VAR_2->user->password_len != VAR_12 ||
     FUNC_5(VAR_2->user->password, VAR_9, VAR_12) != 0) {
  FUNC_9(VAR_1, "EAP-TEAP: Invalid password");
  FUNC_0(VAR_3, 0);
  return;
 }

 FUNC_9(VAR_1, "EAP-TEAP: Correct password");
 VAR_10 = FUNC_6(VAR_8, VAR_11);
 if (VAR_10) {
  FUNC_4(VAR_2->identity);
  VAR_2->identity = VAR_10;
  VAR_2->identity_len = VAR_11;
 }
 FUNC_1(VAR_3, VAR_0);
 FUNC_2(VAR_2, VAR_3);
}
