
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int dummy; } ;
struct eap_psk_data {int state; } ;
struct eap_method_ret {scalar_t__ methodState; void* allowNotifications; void* ignore; int decision; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;



 void* VAR_7 ;
 int * FUNC_0 (int ,int ,struct wpabuf const*,size_t*) ;
 struct wpabuf* FUNC_1 (struct eap_psk_data*,struct eap_method_ret*,struct wpabuf const*) ;
 struct wpabuf* FUNC_2 (struct eap_psk_data*,struct eap_method_ret*,struct wpabuf const*) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static struct wpabuf * FUNC_4(struct eap_sm *VAR_8, void *VAR_9,
           struct eap_method_ret *VAR_10,
           const struct wpabuf *VAR_11)
{
 struct eap_psk_data *VAR_12 = VAR_9;
 const u8 *VAR_13;
 struct wpabuf *VAR_14 = ((void*)0);
 size_t VAR_15;

 VAR_13 = FUNC_0(VAR_2, VAR_1, VAR_11, &VAR_15);
 if (VAR_13 == ((void*)0)) {
  VAR_10->ignore = VAR_7;
  return ((void*)0);
 }

 VAR_10->ignore = VAR_3;
 VAR_10->methodState = VAR_5;
 VAR_10->decision = VAR_0;
 VAR_10->allowNotifications = VAR_7;

 switch (VAR_12->state) {
 case 129:
  VAR_14 = FUNC_1(VAR_12, VAR_10, VAR_11);
  break;
 case 128:
  VAR_14 = FUNC_2(VAR_12, VAR_10, VAR_11);
  break;
 case 130:
  FUNC_3(VAR_6, "EAP-PSK: in DONE state - ignore "
      "unexpected message");
  VAR_10->ignore = VAR_7;
  return ((void*)0);
 }

 if (VAR_10->methodState == VAR_4) {
  VAR_10->allowNotifications = VAR_3;
 }

 return VAR_14;
}
