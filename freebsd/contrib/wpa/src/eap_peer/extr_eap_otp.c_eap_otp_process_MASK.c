
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int dummy; } ;
struct eap_method_ret {void* allowNotifications; int decision; int methodState; void* ignore; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 int FUNC_0 (struct eap_sm*) ;
 int * FUNC_1 (struct eap_sm*,size_t*) ;
 int * FUNC_2 (struct eap_sm*,size_t*) ;
 int FUNC_3 (struct wpabuf const*) ;
 int * FUNC_4 (int ,int ,struct wpabuf const*,size_t*) ;
 struct wpabuf* FUNC_5 (int ,int ,size_t,int ,int ) ;
 int FUNC_6 (struct eap_sm*,char const*,size_t) ;
 int FUNC_7 (int ,char*,int const*,size_t) ;
 int FUNC_8 (int ,char*,int const*,size_t) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (struct wpabuf*,int const*,size_t) ;

__attribute__((used)) static struct wpabuf * FUNC_11(struct eap_sm *VAR_10, void *VAR_11,
           struct eap_method_ret *VAR_12,
           const struct wpabuf *VAR_13)
{
 struct wpabuf *VAR_14;
 const u8 *VAR_15, *VAR_16;
 size_t VAR_17, VAR_18;
 int VAR_19;

 VAR_15 = FUNC_4(VAR_3, VAR_2, VAR_13, &VAR_18);
 if (VAR_15 == ((void*)0)) {
  VAR_12->ignore = VAR_9;
  return ((void*)0);
 }
 FUNC_7(VAR_8, "EAP-OTP: Request message",
     VAR_15, VAR_18);

 VAR_16 = FUNC_1(VAR_10, &VAR_17);
 if (VAR_16)
  VAR_19 = 1;
 else {
  VAR_16 = FUNC_2(VAR_10, &VAR_17);
  VAR_19 = 0;
 }

 if (VAR_16 == ((void*)0)) {
  FUNC_9(VAR_7, "EAP-OTP: Password not configured");
  FUNC_6(VAR_10, (const char *) VAR_15, VAR_18);
  VAR_12->ignore = VAR_9;
  return ((void*)0);
 }

 VAR_12->ignore = VAR_4;

 VAR_12->methodState = VAR_5;
 VAR_12->decision = VAR_0;
 VAR_12->allowNotifications = VAR_4;

 VAR_14 = FUNC_5(VAR_3, VAR_2, VAR_17,
        VAR_1, FUNC_3(VAR_13));
 if (VAR_14 == ((void*)0))
  return ((void*)0);
 FUNC_10(VAR_14, VAR_16, VAR_17);
 FUNC_8(VAR_8, "EAP-OTP: Response",
         VAR_16, VAR_17);

 if (VAR_19) {
  FUNC_9(VAR_6, "EAP-OTP: Forgetting used password");
  FUNC_0(VAR_10);
 }

 return VAR_14;
}
