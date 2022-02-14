
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wpa_supplicant {struct hostapd_iface* ap_iface; struct wpa_ssid* current_ssid; } ;
struct wpa_ssid {scalar_t__ mode; } ;
struct hostapd_iface {struct hostapd_data** bss; TYPE_2__* conf; } ;
struct hostapd_data {int * drv_priv; } ;
struct TYPE_4__ {TYPE_1__** bss; } ;
struct TYPE_3__ {void* p2p; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct hostapd_data*) ;
 int FUNC_1 (struct hostapd_iface*) ;

int FUNC_2(struct wpa_supplicant *VAR_7)
{
 struct hostapd_iface *VAR_8 = VAR_7->ap_iface;
 struct wpa_ssid *VAR_9 = VAR_7->current_ssid;
 struct hostapd_data *VAR_10;

 if (VAR_9 == ((void*)0) || VAR_7->ap_iface == ((void*)0) ||
     VAR_9->mode == VAR_4 ||
     VAR_9->mode == VAR_3)
  return -1;
 VAR_10 = VAR_8->bss[0];
 if (VAR_10->drv_priv == ((void*)0))
  return -1;
 FUNC_1(VAR_8);
 FUNC_0(VAR_10);

 return 0;
}
