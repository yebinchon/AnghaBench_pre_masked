
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {int dummy; } ;
struct hostapd_iface {TYPE_1__* mconf; } ;
struct TYPE_2__ {int * rsn_ie; } ;


 int FUNC_0 (struct hostapd_iface*) ;
 int FUNC_1 (struct hostapd_iface*) ;
 int FUNC_2 (struct wpa_supplicant*,struct hostapd_iface*) ;
 int FUNC_3 (TYPE_1__*) ;

void FUNC_4(struct wpa_supplicant *VAR_0,
          struct hostapd_iface *VAR_1)
{
 if (!VAR_1)
  return;

 if (VAR_1->mconf) {
  FUNC_2(VAR_0, VAR_1);
  if (VAR_1->mconf->rsn_ie) {
   VAR_1->mconf->rsn_ie = ((void*)0);






  }
  FUNC_3(VAR_1->mconf);
  VAR_1->mconf = ((void*)0);
 }


 FUNC_0(VAR_1);
 FUNC_1(VAR_1);
}
