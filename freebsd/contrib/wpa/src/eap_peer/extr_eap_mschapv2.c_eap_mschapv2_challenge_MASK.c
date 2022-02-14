
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int dummy; } ;
struct eap_mschapv2_hdr {int mschapv2_id; } ;
struct eap_mschapv2_data {int * passwd_change_challenge; scalar_t__ passwd_change_challenge_valid; } ;
struct eap_method_ret {void* allowNotifications; int decision; int methodState; void* ignore; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int * FUNC_0 (struct eap_sm*,size_t*) ;
 int * FUNC_1 (struct eap_sm*,size_t*) ;
 struct wpabuf* FUNC_2 (struct eap_sm*,struct eap_mschapv2_data*,int ,int ,int const*) ;
 int FUNC_3 (int ,char*,int const*,size_t) ;
 int FUNC_4 (int ,char*,...) ;

__attribute__((used)) static struct wpabuf * FUNC_5(
 struct eap_sm *VAR_7, struct eap_mschapv2_data *VAR_8,
 struct eap_method_ret *VAR_9, const struct eap_mschapv2_hdr *VAR_10,
 size_t VAR_11, u8 VAR_12)
{
 size_t VAR_13, VAR_14;
 const u8 *VAR_15, *VAR_16;

 if (FUNC_0(VAR_7, &VAR_13) == ((void*)0) ||
     FUNC_1(VAR_7, &VAR_13) == ((void*)0))
  return ((void*)0);

 FUNC_4(VAR_4, "EAP-MSCHAPV2: Received challenge");
 if (VAR_11 < sizeof(*VAR_10) + 1) {
  FUNC_4(VAR_5, "EAP-MSCHAPV2: Too short challenge data "
      "(len %lu)", (unsigned long) VAR_11);
  VAR_9->ignore = VAR_6;
  return ((void*)0);
 }
 VAR_15 = (const u8 *) (VAR_10 + 1);
 VAR_14 = *VAR_15++;
 VAR_13 = VAR_11 - sizeof(*VAR_10) - 1;
 if (VAR_14 != VAR_3) {
  FUNC_4(VAR_5, "EAP-MSCHAPV2: Invalid challenge length "
      "%lu", (unsigned long) VAR_14);
  VAR_9->ignore = VAR_6;
  return ((void*)0);
 }

 if (VAR_13 < VAR_14) {
  FUNC_4(VAR_5, "EAP-MSCHAPV2: Too short challenge"
      " packet: len=%lu challenge_len=%lu",
      (unsigned long) VAR_13, (unsigned long) VAR_14);
  VAR_9->ignore = VAR_6;
  return ((void*)0);
 }

 if (VAR_8->passwd_change_challenge_valid) {
  FUNC_4(VAR_4, "EAP-MSCHAPV2: Using challenge from the "
      "failure message");
  VAR_16 = VAR_8->passwd_change_challenge;
 } else
  VAR_16 = VAR_15;
 VAR_15 += VAR_14;
 VAR_13 -= VAR_14;
 FUNC_3(VAR_4, "EAP-MSCHAPV2: Authentication Servername",
      VAR_15, VAR_13);

 VAR_9->ignore = VAR_1;
 VAR_9->methodState = VAR_2;
 VAR_9->decision = VAR_0;
 VAR_9->allowNotifications = VAR_6;

 return FUNC_2(VAR_7, VAR_8, VAR_12, VAR_10->mschapv2_id,
         VAR_16);
}
