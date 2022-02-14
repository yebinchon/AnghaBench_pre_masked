
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {void* leap_done; } ;
struct eap_method_ret {int decision; int allowNotifications; int methodState; void* ignore; } ;
struct eap_leap_data {int state; int ap_challenge; int ap_response; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ const VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;
 scalar_t__ FUNC_0 (int ,scalar_t__*,scalar_t__*) ;
 scalar_t__* FUNC_1 (struct eap_sm*,size_t*,int*) ;
 scalar_t__* FUNC_2 (int ,int ,struct wpabuf const*,size_t*) ;
 scalar_t__ FUNC_3 (scalar_t__ const*,scalar_t__*) ;
 scalar_t__ FUNC_4 (scalar_t__ const*,size_t,scalar_t__*) ;
 scalar_t__ FUNC_5 (scalar_t__ const*,scalar_t__*,int) ;
 int FUNC_6 (int ,scalar_t__ const*,int) ;
 int FUNC_7 (int ,char*,scalar_t__ const*,int) ;
 int FUNC_8 (int ,char*,...) ;
 scalar_t__ FUNC_9 (struct wpabuf const*) ;

__attribute__((used)) static struct wpabuf * FUNC_10(struct eap_sm *VAR_13, void *VAR_14,
       struct eap_method_ret *VAR_15,
       const struct wpabuf *VAR_16)
{
 struct eap_leap_data *VAR_17 = VAR_14;
 const u8 *VAR_18, *VAR_19;
 u8 VAR_20, VAR_21[16], VAR_22[16],
  VAR_23[VAR_6];
 size_t VAR_24, VAR_25;
 int VAR_26;

 FUNC_8(VAR_9, "EAP-LEAP: Processing EAP-Response");

 VAR_19 = FUNC_1(VAR_13, &VAR_24, &VAR_26);
 if (VAR_19 == ((void*)0))
  return ((void*)0);

 VAR_18 = FUNC_2(VAR_3, VAR_2, VAR_16, &VAR_25);
 if (VAR_18 == ((void*)0) || VAR_25 < 3) {
  FUNC_8(VAR_10, "EAP-LEAP: Invalid EAP-Response frame");
  VAR_15->ignore = VAR_12;
  return ((void*)0);
 }

 if (*VAR_18 != VAR_7) {
  FUNC_8(VAR_11, "EAP-LEAP: Unsupported LEAP version "
      "%d", *VAR_18);
  VAR_15->ignore = VAR_12;
  return ((void*)0);
 }
 VAR_18++;

 VAR_18++;

 VAR_20 = *VAR_18++;
 if (VAR_20 != VAR_6 || VAR_20 > VAR_25 - 3) {
  FUNC_8(VAR_10, "EAP-LEAP: Invalid response "
      "(response_len=%d reqDataLen=%lu)",
      VAR_20, (unsigned long) FUNC_9(VAR_16));
  VAR_15->ignore = VAR_12;
  return ((void*)0);
 }

 FUNC_7(VAR_9, "EAP-LEAP: Response from AP",
      VAR_18, VAR_6);
 FUNC_6(VAR_17->ap_response, VAR_18, VAR_6);

 if (VAR_26) {
  if (FUNC_3(VAR_19, VAR_22)) {
   VAR_15->ignore = VAR_12;
   return ((void*)0);
  }
 } else {
  if (FUNC_4(VAR_19, VAR_24, VAR_21) ||
      FUNC_3(VAR_21, VAR_22)) {
   VAR_15->ignore = VAR_12;
   return ((void*)0);
  }
 }
 if (FUNC_0(VAR_17->ap_challenge, VAR_22, VAR_23)) {
  VAR_15->ignore = VAR_12;
  return ((void*)0);
 }

 VAR_15->methodState = VAR_8;
 VAR_15->allowNotifications = VAR_4;

 if (FUNC_5(VAR_18, VAR_23, VAR_6) != 0) {
  FUNC_8(VAR_11, "EAP-LEAP: AP sent an invalid "
      "response - authentication failed");
  FUNC_7(VAR_9, "EAP-LEAP: Expected response from AP",
       VAR_23, VAR_6);
  VAR_15->decision = VAR_0;
  return ((void*)0);
 }

 VAR_15->decision = VAR_1;




 VAR_13->leap_done = VAR_12;
 VAR_17->state = VAR_5;



 return ((void*)0);
}
