
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {scalar_t__ key_mgmt; int eapol; } ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

const char * FUNC_2(struct wpa_supplicant *VAR_1)
{
 const char *VAR_2;

        if (FUNC_1(VAR_1->key_mgmt) == 0 &&
            VAR_1->key_mgmt != VAR_0) {
  return "NO-EAP";
 }

 VAR_2 = FUNC_0(VAR_1->eapol);
 if (VAR_2 == ((void*)0))
  return "UNKNOWN-EAP";

 return VAR_2;
}
