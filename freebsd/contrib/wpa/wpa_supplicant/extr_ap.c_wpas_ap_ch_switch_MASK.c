
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {int assoc_freq; TYPE_1__* current_ssid; struct hostapd_iface* ifmsh; struct hostapd_iface* ap_iface; } ;
struct hostapd_iface {int * bss; } ;
struct TYPE_2__ {int frequency; } ;


 int FUNC_0 (int ,int,int,int,int,int,int,int) ;

void FUNC_1(struct wpa_supplicant *VAR_0, int VAR_1, int VAR_2,
         int VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
 struct hostapd_iface *VAR_8 = VAR_0->ap_iface;

 if (!VAR_8)
  VAR_8 = VAR_0->ifmsh;
 if (!VAR_8)
  return;
 VAR_0->assoc_freq = VAR_1;
 if (VAR_0->current_ssid)
  VAR_0->current_ssid->frequency = VAR_1;
 FUNC_0(VAR_8->bss[0], VAR_1, VAR_2,
    VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
}
