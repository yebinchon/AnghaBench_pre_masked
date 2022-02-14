
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int dummy; } ;
struct nai_realm_eap {scalar_t__ method; scalar_t__ inner_method; scalar_t__ inner_non_eap; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int * FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (struct wpa_supplicant*,int ,char*,...) ;

__attribute__((used)) static int FUNC_2(struct wpa_supplicant *VAR_11,
       struct nai_realm_eap *VAR_12)
{
 if (FUNC_0(VAR_5, VAR_12->method) == ((void*)0)) {
  FUNC_1(VAR_11, VAR_6,
   "nai-realm-cred-username: EAP method not supported: %d",
   VAR_12->method);
  return 0;
 }

 if (VAR_12->method != VAR_4 && VAR_12->method != VAR_3 &&
     VAR_12->method != VAR_0) {

  FUNC_1(VAR_11, VAR_6,
   "nai-realm-cred-username: Method: %d is not TTLS, PEAP, or FAST",
   VAR_12->method);
  return 0;
 }

 if (VAR_12->method == VAR_3 || VAR_12->method == VAR_0) {
  if (VAR_12->inner_method &&
      FUNC_0(VAR_5, VAR_12->inner_method) == ((void*)0)) {
   FUNC_1(VAR_11, VAR_6,
    "nai-realm-cred-username: PEAP/FAST: Inner method not supported: %d",
    VAR_12->inner_method);
   return 0;
  }
  if (!VAR_12->inner_method &&
      FUNC_0(VAR_5, VAR_2) == ((void*)0)) {
   FUNC_1(VAR_11, VAR_6,
    "nai-realm-cred-username: MSCHAPv2 not supported");
   return 0;
  }
 }

 if (VAR_12->method == VAR_4) {
  if (VAR_12->inner_method == 0 && VAR_12->inner_non_eap == 0)
   return 1;
  if (VAR_12->inner_method &&
      FUNC_0(VAR_5, VAR_12->inner_method) == ((void*)0)) {
   FUNC_1(VAR_11, VAR_6,
    "nai-realm-cred-username: TTLS, but inner not supported: %d",
    VAR_12->inner_method);
   return 0;
  }
  if (VAR_12->inner_non_eap &&
      VAR_12->inner_non_eap != VAR_10 &&
      VAR_12->inner_non_eap != VAR_7 &&
      VAR_12->inner_non_eap != VAR_8 &&
      VAR_12->inner_non_eap != VAR_9) {
   FUNC_1(VAR_11, VAR_6,
    "nai-realm-cred-username: TTLS, inner-non-eap not supported: %d",
    VAR_12->inner_non_eap);
   return 0;
  }
 }

 if (VAR_12->inner_method &&
     VAR_12->inner_method != VAR_1 &&
     VAR_12->inner_method != VAR_2) {
  FUNC_1(VAR_11, VAR_6,
   "nai-realm-cred-username: inner-method not GTC or MSCHAPv2: %d",
   VAR_12->inner_method);
  return 0;
 }

 return 1;
}
