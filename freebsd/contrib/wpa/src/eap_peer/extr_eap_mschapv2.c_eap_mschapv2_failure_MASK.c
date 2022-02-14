
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int dummy; } ;
struct eap_peer_config {scalar_t__ pending_req_new_password; scalar_t__ new_password; } ;
struct eap_mschapv2_hdr {int dummy; } ;
struct eap_mschapv2_data {scalar_t__ prev_error; int passwd_change_version; } ;
struct eap_method_ret {void* allowNotifications; int decision; int methodState; void* ignore; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 char* FUNC_0 (int const*,size_t) ;
 struct eap_peer_config* FUNC_1 (struct eap_sm*) ;
 struct wpabuf* FUNC_2 (struct eap_sm*,struct eap_mschapv2_data*,struct eap_method_ret*,struct eap_mschapv2_hdr const*,int ) ;
 int FUNC_3 (struct eap_sm*,struct eap_mschapv2_data*,char*) ;
 struct wpabuf* FUNC_4 (int ,int ,int,int ,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,char*,int const*,size_t) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (struct wpabuf*,int ) ;

__attribute__((used)) static struct wpabuf * FUNC_9(struct eap_sm *VAR_10,
         struct eap_mschapv2_data *VAR_11,
         struct eap_method_ret *VAR_12,
         const struct eap_mschapv2_hdr *VAR_13,
         size_t VAR_14, u8 VAR_15)
{
 struct wpabuf *VAR_16;
 const u8 *VAR_17 = (const u8 *) (VAR_13 + 1);
 char *VAR_18;
 size_t VAR_19 = VAR_14 - sizeof(*VAR_13);
 int VAR_20 = 0;

 FUNC_7(VAR_9, "EAP-MSCHAPV2: Received failure");
 FUNC_6(VAR_9, "EAP-MSCHAPV2: Failure data",
     VAR_17, VAR_19);





 VAR_18 = FUNC_0(VAR_17, VAR_19);
 if (VAR_18) {
  VAR_20 = FUNC_3(VAR_10, VAR_11, VAR_18);
  FUNC_5(VAR_18);
 }

 VAR_12->ignore = VAR_6;
 VAR_12->methodState = VAR_7;
 VAR_12->decision = VAR_0;
 VAR_12->allowNotifications = VAR_6;

 if (VAR_11->prev_error == VAR_5 &&
     VAR_11->passwd_change_version == 3) {
  struct eap_peer_config *VAR_21 = FUNC_1(VAR_10);
  if (VAR_21 && VAR_21->new_password)
   return FUNC_2(VAR_10, VAR_11, VAR_12, VAR_13,
           VAR_15);
  if (VAR_21 && VAR_21->pending_req_new_password)
   return ((void*)0);
 } else if (VAR_20 && VAR_11->prev_error == VAR_4) {



  return ((void*)0);
 }



 VAR_16 = FUNC_4(VAR_3, VAR_2, 1,
        VAR_1, VAR_15);
 if (VAR_16 == ((void*)0))
  return ((void*)0);

 FUNC_8(VAR_16, VAR_8);

 return VAR_16;
}
