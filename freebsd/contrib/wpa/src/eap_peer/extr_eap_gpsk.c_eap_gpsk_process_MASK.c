
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int dummy; } ;
struct eap_method_ret {void* ignore; void* allowNotifications; int decision; int methodState; } ;
struct eap_gpsk_data {int dummy; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int FUNC_0 (struct wpabuf const*) ;
 struct wpabuf* FUNC_1 (struct eap_sm*,struct eap_gpsk_data*,struct eap_method_ret*,int,int const*,size_t) ;
 struct wpabuf* FUNC_2 (struct eap_sm*,struct eap_gpsk_data*,struct eap_method_ret*,int,int const*,size_t) ;
 int* FUNC_3 (int ,int ,struct wpabuf const*,size_t*) ;
 int FUNC_4 (int ,char*,int) ;

__attribute__((used)) static struct wpabuf * FUNC_5(struct eap_sm *VAR_7, void *VAR_8,
     struct eap_method_ret *VAR_9,
     const struct wpabuf *VAR_10)
{
 struct eap_gpsk_data *VAR_11 = VAR_8;
 struct wpabuf *VAR_12;
 const u8 *VAR_13;
 size_t VAR_14;
 u8 VAR_15, VAR_16;

 VAR_13 = FUNC_3(VAR_2, VAR_1, VAR_10, &VAR_14);
 if (VAR_13 == ((void*)0) || VAR_14 < 1) {
  VAR_9->ignore = VAR_6;
  return ((void*)0);
 }

 VAR_16 = FUNC_0(VAR_10);
 VAR_15 = *VAR_13++;
 VAR_14--;
 FUNC_4(VAR_5, "EAP-GPSK: Received frame: opcode %d", VAR_15);

 VAR_9->ignore = VAR_3;
 VAR_9->methodState = VAR_4;
 VAR_9->decision = VAR_0;
 VAR_9->allowNotifications = VAR_3;

 switch (VAR_15) {
 case 129:
  VAR_12 = FUNC_1(VAR_7, VAR_11, VAR_9, VAR_16, VAR_13, VAR_14);
  break;
 case 128:
  VAR_12 = FUNC_2(VAR_7, VAR_11, VAR_9, VAR_16, VAR_13, VAR_14);
  break;
 default:
  FUNC_4(VAR_5,
      "EAP-GPSK: Ignoring message with unknown opcode %d",
      VAR_15);
  VAR_9->ignore = VAR_6;
  return ((void*)0);
 }

 return VAR_12;
}
