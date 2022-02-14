
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostapd_sta_wpa_psk_short {struct hostapd_sta_wpa_psk_short* next; scalar_t__ ref; } ;


 int FUNC_0 (struct hostapd_sta_wpa_psk_short*) ;

void FUNC_1(struct hostapd_sta_wpa_psk_short *VAR_0)
{
 if (VAR_0 && VAR_0->ref) {

  VAR_0->ref--;
  return;
 }

 while (VAR_0) {
  struct hostapd_sta_wpa_psk_short *VAR_1 = VAR_0;
  VAR_0 = VAR_0->next;
  FUNC_0(VAR_1);
 }
}
