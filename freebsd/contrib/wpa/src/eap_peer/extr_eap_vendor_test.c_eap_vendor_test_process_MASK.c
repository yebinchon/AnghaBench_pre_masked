
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_vendor_test_data {scalar_t__ state; scalar_t__ first_try; scalar_t__ test_pending_req; } ;
struct eap_sm {int dummy; } ;
struct eap_method_ret {int decision; int methodState; void* allowNotifications; void* ignore; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 void* VAR_12 ;
 int FUNC_0 (struct wpabuf const*) ;
 int* FUNC_1 (int ,int ,struct wpabuf const*,size_t*) ;
 struct wpabuf* FUNC_2 (int ,int ,int,int ,int ) ;
 int VAR_13 ;
 int FUNC_3 (int,int ,int ,struct eap_sm*,int *) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (struct wpabuf*,int) ;

__attribute__((used)) static struct wpabuf * FUNC_6(struct eap_sm *VAR_14, void *VAR_15,
            struct eap_method_ret *VAR_16,
            const struct wpabuf *VAR_17)
{
 struct eap_vendor_test_data *VAR_18 = VAR_15;
 struct wpabuf *VAR_19;
 const u8 *VAR_20;
 size_t VAR_21;

 VAR_20 = FUNC_1(VAR_4, VAR_5, VAR_17, &VAR_21);
 if (VAR_20 == ((void*)0) || VAR_21 < 1) {
  VAR_16->ignore = VAR_12;
  return ((void*)0);
 }

 if (VAR_18->state == VAR_7 && *VAR_20 != 1) {
  FUNC_4(VAR_10, "EAP-VENDOR-TEST: Unexpected message "
      "%d in INIT state", *VAR_20);
  VAR_16->ignore = VAR_12;
  return ((void*)0);
 }

 if (VAR_18->state == VAR_0 && *VAR_20 != 3) {
  FUNC_4(VAR_10, "EAP-VENDOR-TEST: Unexpected message "
      "%d in CONFIRM state", *VAR_20);
  VAR_16->ignore = VAR_12;
  return ((void*)0);
 }

 if (VAR_18->state == VAR_11) {
  FUNC_4(VAR_10, "EAP-VENDOR-TEST: Unexpected message "
      "in SUCCESS state");
  VAR_16->ignore = VAR_12;
  return ((void*)0);
 }

 if (VAR_18->state == VAR_0) {
  if (VAR_18->test_pending_req && VAR_18->first_try) {
   VAR_18->first_try = 0;
   FUNC_4(VAR_10, "EAP-VENDOR-TEST: Testing "
       "pending request");
   VAR_16->ignore = VAR_12;
   FUNC_3(1, 0, VAR_13, VAR_14,
            ((void*)0));
   return ((void*)0);
  }
 }

 VAR_16->ignore = VAR_6;

 FUNC_4(VAR_10, "EAP-VENDOR-TEST: Generating Response");
 VAR_16->allowNotifications = VAR_12;

 VAR_19 = FUNC_2(VAR_4, VAR_5, 1,
        VAR_3, FUNC_0(VAR_17));
 if (VAR_19 == ((void*)0))
  return ((void*)0);

 if (VAR_18->state == VAR_7) {
  FUNC_5(VAR_19, 2);
  VAR_18->state = VAR_0;
  VAR_16->methodState = VAR_8;
  VAR_16->decision = VAR_1;
 } else {
  FUNC_5(VAR_19, 4);
  VAR_18->state = VAR_11;
  VAR_16->methodState = VAR_9;
  VAR_16->decision = VAR_2;
 }

 return VAR_19;
}
