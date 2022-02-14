
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {void* leap_done; } ;
struct eap_method_ret {void* ignore; int decision; int methodState; void* allowNotifications; } ;
struct eap_hdr {int code; int length; } ;


 int VAR_0 ;



 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (struct eap_sm*,size_t*) ;
 struct wpabuf* FUNC_2 (struct eap_sm*,void*,struct eap_method_ret*,struct wpabuf const*) ;
 struct wpabuf* FUNC_3 (struct eap_sm*,void*,struct eap_method_ret*,struct wpabuf const*) ;
 struct wpabuf* FUNC_4 (struct eap_sm*,void*,struct eap_method_ret*,struct wpabuf const*) ;
 int FUNC_5 (struct eap_sm*) ;
 int FUNC_6 (int ,char*,...) ;
 struct eap_hdr* FUNC_7 (struct wpabuf const*) ;
 int FUNC_8 (struct wpabuf const*) ;

__attribute__((used)) static struct wpabuf * FUNC_9(struct eap_sm *VAR_5, void *VAR_6,
     struct eap_method_ret *VAR_7,
     const struct wpabuf *VAR_8)
{
 const struct eap_hdr *VAR_9;
 size_t VAR_10;
 const u8 *VAR_11;

 VAR_11 = FUNC_1(VAR_5, &VAR_10);
 if (VAR_11 == ((void*)0)) {
  FUNC_6(VAR_3, "EAP-LEAP: Password not configured");
  FUNC_5(VAR_5);
  VAR_7->ignore = VAR_4;
  return ((void*)0);
 }







 VAR_9 = FUNC_7(VAR_8);
 if (FUNC_8(VAR_8) < sizeof(*VAR_9) ||
     FUNC_0(VAR_9->length) > FUNC_8(VAR_8)) {
  FUNC_6(VAR_3, "EAP-LEAP: Invalid frame");
  VAR_7->ignore = VAR_4;
  return ((void*)0);
 }

 VAR_7->ignore = VAR_1;
 VAR_7->allowNotifications = VAR_4;
 VAR_7->methodState = VAR_2;
 VAR_7->decision = VAR_0;

 VAR_5->leap_done = VAR_1;

 switch (VAR_9->code) {
 case 130:
  return FUNC_2(VAR_5, VAR_6, VAR_7, VAR_8);
 case 128:
  return FUNC_4(VAR_5, VAR_6, VAR_7, VAR_8);
 case 129:
  return FUNC_3(VAR_5, VAR_6, VAR_7, VAR_8);
 default:
  FUNC_6(VAR_3, "EAP-LEAP: Unexpected EAP code (%d) - "
      "ignored", VAR_9->code);
  VAR_7->ignore = VAR_4;
  return ((void*)0);
 }
}
