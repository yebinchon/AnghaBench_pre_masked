
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct hostapd_nai_realm_eap {int num_auths; int eap_method; int* auth_id; int* auth_val; } ;
struct hostapd_nai_realm_data {int eap_method_count; struct hostapd_nai_realm_eap* eap_method; } ;


 int FUNC_0 (struct wpabuf*,int) ;

__attribute__((used)) static void FUNC_1(struct wpabuf *VAR_0,
       struct hostapd_nai_realm_data *VAR_1)
{
 unsigned int VAR_2, VAR_3;

 FUNC_0(VAR_0, VAR_1->eap_method_count);

 for (VAR_2 = 0; VAR_2 < VAR_1->eap_method_count; VAR_2++) {
  struct hostapd_nai_realm_eap *VAR_4 = &VAR_1->eap_method[VAR_2];
  FUNC_0(VAR_0, 2 + (3 * VAR_4->num_auths));
  FUNC_0(VAR_0, VAR_4->eap_method);
  FUNC_0(VAR_0, VAR_4->num_auths);
  for (VAR_3 = 0; VAR_3 < VAR_4->num_auths; VAR_3++) {
   FUNC_0(VAR_0, VAR_4->auth_id[VAR_3]);
   FUNC_0(VAR_0, 1);
   FUNC_0(VAR_0, VAR_4->auth_val[VAR_3]);
  }
 }
}
