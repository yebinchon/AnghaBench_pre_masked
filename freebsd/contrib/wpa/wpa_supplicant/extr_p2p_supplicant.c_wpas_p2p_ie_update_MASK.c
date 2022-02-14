
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wpabuf {int dummy; } ;
struct wpa_supplicant {TYPE_1__* ap_iface; } ;
struct hostapd_data {struct wpabuf* p2p_probe_resp_ie; struct wpabuf* p2p_beacon_ie; TYPE_2__* conf; } ;
struct TYPE_4__ {int p2p; } ;
struct TYPE_3__ {struct hostapd_data** bss; } ;


 int VAR_0 ;
 int FUNC_0 (struct wpa_supplicant*) ;
 int FUNC_1 (struct wpabuf*) ;

__attribute__((used)) static void FUNC_2(void *VAR_1, struct wpabuf *VAR_2,
          struct wpabuf *VAR_3)
{
 struct wpa_supplicant *VAR_4 = VAR_1;
 if (VAR_4->ap_iface) {
  struct hostapd_data *VAR_5 = VAR_4->ap_iface->bss[0];
  if (!(VAR_5->conf->p2p & VAR_0)) {
   FUNC_1(VAR_2);
   FUNC_1(VAR_3);
   return;
  }
  if (VAR_2) {
   FUNC_1(VAR_5->p2p_beacon_ie);
   VAR_5->p2p_beacon_ie = VAR_2;
  }
  FUNC_1(VAR_5->p2p_probe_resp_ie);
  VAR_5->p2p_probe_resp_ie = VAR_3;
 } else {
  FUNC_1(VAR_2);
  FUNC_1(VAR_3);
 }
 FUNC_0(VAR_4);
}
