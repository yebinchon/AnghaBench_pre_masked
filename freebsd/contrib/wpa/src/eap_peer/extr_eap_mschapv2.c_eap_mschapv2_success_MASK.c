
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int dummy; } ;
struct eap_mschapv2_hdr {int dummy; } ;
struct eap_mschapv2_data {int success; scalar_t__ prev_error; int auth_response; int auth_response_valid; } ;
struct eap_method_ret {int allowNotifications; int decision; void* methodState; int ignore; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct eap_sm*,struct eap_mschapv2_data*) ;
 struct wpabuf* FUNC_1 (int ,int ,int,int ,char) ;
 scalar_t__ FUNC_2 (int ,char const*,size_t) ;
 int FUNC_3 (int ,char*,char const*,size_t) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct wpabuf*,int ) ;

__attribute__((used)) static struct wpabuf * FUNC_6(struct eap_sm *VAR_14,
         struct eap_mschapv2_data *VAR_15,
         struct eap_method_ret *VAR_16,
         const struct eap_mschapv2_hdr *VAR_17,
         size_t VAR_18, u8 VAR_19)
{
 struct wpabuf *VAR_20;
 const u8 *VAR_21;
 size_t VAR_22;

 FUNC_4(VAR_10, "EAP-MSCHAPV2: Received success");
 VAR_22 = VAR_18 - sizeof(*VAR_17);
 VAR_21 = (const u8 *) (VAR_17 + 1);
 if (!VAR_15->auth_response_valid ||
     FUNC_2(VAR_15->auth_response, VAR_21, VAR_22)) {
  FUNC_4(VAR_12, "EAP-MSCHAPV2: Invalid authenticator "
      "response in success request");
  VAR_16->methodState = VAR_7;
  VAR_16->decision = VAR_0;
  return ((void*)0);
 }
 VAR_21 += 2 + 2 * VAR_8;
 VAR_22 -= 2 + 2 * VAR_8;
 while (VAR_22 > 0 && *VAR_21 == ' ') {
  VAR_21++;
  VAR_22--;
 }
 FUNC_3(VAR_10, "EAP-MSCHAPV2: Success message",
     VAR_21, VAR_22);
 FUNC_4(VAR_11, "EAP-MSCHAPV2: Authentication succeeded");



 VAR_20 = FUNC_1(VAR_4, VAR_3, 1,
        VAR_2, VAR_19);
 if (VAR_20 == ((void*)0)) {
  FUNC_4(VAR_10, "EAP-MSCHAPV2: Failed to allocate "
      "buffer for success response");
  VAR_16->ignore = VAR_13;
  return ((void*)0);
 }

 FUNC_5(VAR_20, VAR_9);

 VAR_16->methodState = VAR_7;
 VAR_16->decision = VAR_1;
 VAR_16->allowNotifications = VAR_6;
 VAR_15->success = 1;

 if (VAR_15->prev_error == VAR_5)
  FUNC_0(VAR_14, VAR_15);

 return VAR_20;
}
