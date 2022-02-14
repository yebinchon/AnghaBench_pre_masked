
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int dummy; } ;
struct eap_method_ret {scalar_t__ methodState; void* allowNotifications; void* ignore; int decision; } ;
struct eap_eke_data {int dummy; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 struct wpabuf* FUNC_0 (struct eap_sm*,struct eap_eke_data*,struct eap_method_ret*,struct wpabuf const*,int const*,int) ;
 struct wpabuf* FUNC_1 (struct eap_eke_data*,struct eap_method_ret*,struct wpabuf const*,int const*,int) ;
 struct wpabuf* FUNC_2 (struct eap_eke_data*,struct eap_method_ret*,struct wpabuf const*,int const*,int) ;
 struct wpabuf* FUNC_3 (struct eap_eke_data*,struct eap_method_ret*,struct wpabuf const*,int const*,int) ;
 int* FUNC_4 (int ,int ,struct wpabuf const*,size_t*) ;
 int FUNC_5 (int ,char*,int const*,int) ;
 int FUNC_6 (int ,char*,int) ;

__attribute__((used)) static struct wpabuf * FUNC_7(struct eap_sm *VAR_8, void *VAR_9,
           struct eap_method_ret *VAR_10,
           const struct wpabuf *VAR_11)
{
 struct eap_eke_data *VAR_12 = VAR_9;
 struct wpabuf *VAR_13;
 const u8 *VAR_14, *VAR_15;
 size_t VAR_16;
 u8 VAR_17;

 VAR_14 = FUNC_4(VAR_2, VAR_1, VAR_11, &VAR_16);
 if (VAR_14 == ((void*)0) || VAR_16 < 1) {
  VAR_10->ignore = VAR_7;
  return ((void*)0);
 }

 VAR_15 = VAR_14 + VAR_16;
 VAR_17 = *VAR_14++;

 FUNC_6(VAR_6, "EAP-EKE: Received frame: exch %d", VAR_17);
 FUNC_5(VAR_6, "EAP-EKE: Received Data", VAR_14, VAR_15 - VAR_14);

 VAR_10->ignore = VAR_3;
 VAR_10->methodState = VAR_5;
 VAR_10->decision = VAR_0;
 VAR_10->allowNotifications = VAR_7;

 switch (VAR_17) {
 case 128:
  VAR_13 = FUNC_3(VAR_12, VAR_10, VAR_11, VAR_14, VAR_15 - VAR_14);
  break;
 case 131:
  VAR_13 = FUNC_0(VAR_8, VAR_12, VAR_10, VAR_11,
           VAR_14, VAR_15 - VAR_14);
  break;
 case 130:
  VAR_13 = FUNC_1(VAR_12, VAR_10, VAR_11,
            VAR_14, VAR_15 - VAR_14);
  break;
 case 129:
  VAR_13 = FUNC_2(VAR_12, VAR_10, VAR_11,
            VAR_14, VAR_15 - VAR_14);
  break;
 default:
  FUNC_6(VAR_6, "EAP-EKE: Ignoring message with unknown EKE-Exch %d", VAR_17);
  VAR_10->ignore = VAR_7;
  return ((void*)0);
 }

 if (VAR_10->methodState == VAR_4)
  VAR_10->allowNotifications = VAR_3;

 return VAR_13;
}
