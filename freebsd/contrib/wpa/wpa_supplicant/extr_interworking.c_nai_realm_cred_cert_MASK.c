
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int dummy; } ;
struct nai_realm_eap {scalar_t__ method; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (struct wpa_supplicant*,int ,char*,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct wpa_supplicant *VAR_3,
          struct nai_realm_eap *VAR_4)
{
 if (FUNC_0(VAR_1, VAR_4->method) == ((void*)0)) {
  FUNC_1(VAR_3, VAR_2,
   "nai-realm-cred-cert: Method not supported: %d",
   VAR_4->method);
  return 0;
 }

 if (VAR_4->method != VAR_0) {

  FUNC_1(VAR_3, VAR_2,
   "nai-realm-cred-cert: Method not TLS: %d",
   VAR_4->method);
  return 0;
 }

 return 1;
}
