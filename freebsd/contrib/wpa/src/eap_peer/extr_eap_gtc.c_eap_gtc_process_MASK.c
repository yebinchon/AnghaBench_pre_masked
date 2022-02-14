
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int dummy; } ;
struct eap_method_ret {void* allowNotifications; int decision; int methodState; void* ignore; } ;
struct eap_hdr {int dummy; } ;
struct eap_gtc_data {scalar_t__ prefix; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 int FUNC_0 (struct eap_sm*) ;
 char* FUNC_1 (struct eap_sm*,size_t*) ;
 char* FUNC_2 (struct eap_sm*,size_t*) ;
 char* FUNC_3 (struct eap_sm*,size_t*) ;
 char FUNC_4 (struct wpabuf const*) ;
 char* FUNC_5 (int ,int ,struct wpabuf const*,size_t*) ;
 struct wpabuf* FUNC_6 (int ,int ,size_t,int ,char) ;
 int FUNC_7 (struct eap_sm*,char const*,size_t) ;
 scalar_t__ FUNC_8 (char const*,char*,int) ;
 int FUNC_9 (int ,char*,char const*,size_t) ;
 int FUNC_10 (int ,char*,scalar_t__,size_t) ;
 int FUNC_11 (int ,char*) ;
 scalar_t__ FUNC_12 (struct wpabuf*) ;
 int FUNC_13 (struct wpabuf*,char const*,size_t) ;
 int FUNC_14 (struct wpabuf*,char) ;

__attribute__((used)) static struct wpabuf * FUNC_15(struct eap_sm *VAR_11, void *VAR_12,
           struct eap_method_ret *VAR_13,
           const struct wpabuf *VAR_14)
{
 struct eap_gtc_data *VAR_15 = VAR_12;
 struct wpabuf *VAR_16;
 const u8 *VAR_17, *VAR_18, *VAR_19;
 size_t VAR_20, VAR_21, VAR_22, VAR_23;
 int VAR_24;
 u8 VAR_25;

 VAR_17 = FUNC_5(VAR_3, VAR_2, VAR_14, &VAR_22);
 if (VAR_17 == ((void*)0)) {
  VAR_13->ignore = VAR_10;
  return ((void*)0);
 }
 VAR_25 = FUNC_4(VAR_14);

 FUNC_9(VAR_9, "EAP-GTC: Request message", VAR_17, VAR_22);
 if (VAR_15->prefix &&
     (VAR_22 < 10 || FUNC_8(VAR_17, "CHALLENGE=", 10) != 0)) {
  FUNC_11(VAR_7, "EAP-GTC: Challenge did not start with "
      "expected prefix");





  VAR_16 = FUNC_6(VAR_3, VAR_2,
         0, VAR_1, VAR_25);
  return VAR_16;
 }

 VAR_18 = FUNC_2(VAR_11, &VAR_20);
 if (VAR_18)
  VAR_24 = 1;
 else {
  VAR_18 = FUNC_3(VAR_11, &VAR_20);
  VAR_24 = 0;
 }

 if (VAR_18 == ((void*)0)) {
  FUNC_11(VAR_8, "EAP-GTC: Password not configured");
  FUNC_7(VAR_11, (const char *) VAR_17, VAR_22);
  VAR_13->ignore = VAR_10;
  return ((void*)0);
 }

 VAR_13->ignore = VAR_4;

 VAR_13->methodState = VAR_15->prefix ? VAR_6 : VAR_5;
 VAR_13->decision = VAR_0;
 VAR_13->allowNotifications = VAR_4;

 VAR_23 = VAR_20;
 VAR_19 = FUNC_1(VAR_11, &VAR_21);
 if (VAR_19 == ((void*)0))
  return ((void*)0);
 if (VAR_15->prefix)
  VAR_23 += 9 + VAR_21 + 1;
 VAR_16 = FUNC_6(VAR_3, VAR_2, VAR_23,
        VAR_1, VAR_25);
 if (VAR_16 == ((void*)0))
  return ((void*)0);
 if (VAR_15->prefix) {
  FUNC_13(VAR_16, "RESPONSE=", 9);
  FUNC_13(VAR_16, VAR_19, VAR_21);
  FUNC_14(VAR_16, '\0');
 }
 FUNC_13(VAR_16, VAR_18, VAR_20);
 FUNC_10(VAR_9, "EAP-GTC: Response",
         FUNC_12(VAR_16) + sizeof(struct eap_hdr) +
         1, VAR_23);

 if (VAR_24) {
  FUNC_11(VAR_7, "EAP-GTC: Forgetting used password");
  FUNC_0(VAR_11);
 }

 return VAR_16;
}
