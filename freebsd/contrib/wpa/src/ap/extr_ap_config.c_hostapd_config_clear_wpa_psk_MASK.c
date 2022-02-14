
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostapd_wpa_psk {struct hostapd_wpa_psk* next; } ;


 int FUNC_0 (struct hostapd_wpa_psk*,int) ;

void FUNC_1(struct hostapd_wpa_psk **VAR_0)
{
 struct hostapd_wpa_psk *VAR_1, *VAR_2;

 for (VAR_1 = *VAR_0; VAR_1;) {
  VAR_2 = VAR_1;
  VAR_1 = VAR_1->next;
  FUNC_0(VAR_2, sizeof(*VAR_2));
 }
 *VAR_0 = ((void*)0);
}
