
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ const u8 ;
struct eap_ttls_data {int dummy; } ;
struct eap_sm {TYPE_1__* user; } ;
struct TYPE_2__ {int ttls_auth; int password_len; int password; scalar_t__ password_hash; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (scalar_t__ const,int ,int ,scalar_t__ const*,size_t,scalar_t__ const*) ;
 scalar_t__* FUNC_1 (struct eap_sm*,struct eap_ttls_data*,size_t) ;
 int FUNC_2 (struct eap_ttls_data*,int ) ;
 int FUNC_3 (struct eap_sm*,struct eap_ttls_data*) ;
 int FUNC_4 (scalar_t__ const*) ;
 scalar_t__ FUNC_5 (scalar_t__ const*,scalar_t__ const*,int) ;
 int FUNC_6 (int ,char*,...) ;

__attribute__((used)) static void FUNC_7(struct eap_sm *VAR_7,
      struct eap_ttls_data *VAR_8,
      const u8 *VAR_9,
      size_t VAR_10,
      const u8 *VAR_11,
      size_t VAR_12)
{
 u8 *VAR_13, VAR_14[VAR_0];

 if (VAR_9 == ((void*)0) || VAR_11 == ((void*)0) ||
     VAR_10 != VAR_2 ||
     VAR_12 != 1 + VAR_3) {
  FUNC_6(VAR_5, "EAP-TTLS/CHAP: Invalid CHAP attributes "
      "(challenge len %lu password len %lu)",
      (unsigned long) VAR_10,
      (unsigned long) VAR_12);
  FUNC_2(VAR_8, VAR_4);
  return;
 }

 if (!VAR_7->user || !VAR_7->user->password || VAR_7->user->password_hash ||
     !(VAR_7->user->ttls_auth & VAR_1)) {
  FUNC_6(VAR_5, "EAP-TTLS/CHAP: No plaintext user "
      "password configured");
  FUNC_2(VAR_8, VAR_4);
  return;
 }

 VAR_13 = FUNC_1(VAR_7, VAR_8,
        VAR_2 + 1);
 if (VAR_13 == ((void*)0)) {
  FUNC_6(VAR_5, "EAP-TTLS/CHAP: Failed to generate "
      "challenge from TLS data");
  FUNC_2(VAR_8, VAR_4);
  return;
 }

 if (FUNC_5(VAR_9, VAR_13, VAR_2)
     != 0 ||
     VAR_11[0] != VAR_13[VAR_2]) {
  FUNC_6(VAR_5, "EAP-TTLS/CHAP: Challenge mismatch");
  FUNC_4(VAR_13);
  FUNC_2(VAR_8, VAR_4);
  return;
 }
 FUNC_4(VAR_13);


 FUNC_0(VAR_11[0], VAR_7->user->password, VAR_7->user->password_len,
   VAR_9, VAR_10, VAR_14);

 if (FUNC_5(VAR_14, VAR_11 + 1, VAR_3) ==
     0) {
  FUNC_6(VAR_5, "EAP-TTLS/CHAP: Correct user password");
  FUNC_2(VAR_8, VAR_6);
  FUNC_3(VAR_7, VAR_8);
 } else {
  FUNC_6(VAR_5, "EAP-TTLS/CHAP: Invalid user password");
  FUNC_2(VAR_8, VAR_4);
 }
}
