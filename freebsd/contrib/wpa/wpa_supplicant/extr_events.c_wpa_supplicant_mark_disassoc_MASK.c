
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ usec; scalar_t__ sec; } ;
struct wpa_supplicant {scalar_t__ wpa_state; scalar_t__ key_mgmt; scalar_t__ enabled_4addr_mode; scalar_t__ ieee80211ac; int last_tk; int last_tk_alg; scalar_t__ wnmsleep_used; int eapol; int * current_ssid; scalar_t__ ap_ies_from_associnfo; scalar_t__ assoc_freq; int * current_bss; int pending_bssid; int bssid; TYPE_1__ session_start; int session_length; int * ibss_rsn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (struct wpa_supplicant*) ;
 int FUNC_10 (struct wpa_supplicant*) ;
 int FUNC_11 (struct wpa_supplicant*) ;
 int FUNC_12 (struct wpa_supplicant*,int ) ;
 scalar_t__ FUNC_13 (struct wpa_supplicant*,int ) ;
 scalar_t__ FUNC_14 (scalar_t__) ;
 int FUNC_15 (struct wpa_supplicant*) ;
 int FUNC_16 (struct wpa_supplicant*,int ) ;
 int FUNC_17 (struct wpa_supplicant*) ;
 int FUNC_18 (struct wpa_supplicant*) ;
 int FUNC_19 (struct wpa_supplicant*) ;

void FUNC_20(struct wpa_supplicant *VAR_7)
{
 int VAR_8;

 FUNC_10(VAR_7);
 if (VAR_7->wpa_state == VAR_4)
  return;

 if (FUNC_8(&VAR_7->session_start)) {
  FUNC_7(&VAR_7->session_start, &VAR_7->session_length);
  VAR_7->session_start.sec = 0;
  VAR_7->session_start.usec = 0;
  FUNC_18(VAR_7);
 }

 FUNC_16(VAR_7, VAR_3);
 VAR_8 = !FUNC_5(VAR_7->bssid);
 FUNC_6(VAR_7->bssid, 0, VAR_0);
 FUNC_6(VAR_7->pending_bssid, 0, VAR_0);
 FUNC_9(VAR_7);
 VAR_7->current_bss = ((void*)0);
 VAR_7->assoc_freq = 0;

 if (VAR_8)
  FUNC_17(VAR_7);

 FUNC_2(VAR_7->eapol, VAR_1);
 FUNC_3(VAR_7->eapol, VAR_1);
 if (FUNC_14(VAR_7->key_mgmt) ||
     VAR_7->key_mgmt == VAR_6 ||
     VAR_7->key_mgmt == VAR_5)
  FUNC_1(VAR_7->eapol, VAR_1);
 VAR_7->ap_ies_from_associnfo = 0;
 VAR_7->current_ssid = ((void*)0);
 FUNC_0(VAR_7->eapol, ((void*)0), ((void*)0));
 VAR_7->key_mgmt = 0;

 FUNC_19(VAR_7);
 VAR_7->wnmsleep_used = 0;
 FUNC_11(VAR_7);





 VAR_7->ieee80211ac = 0;

 if (VAR_7->enabled_4addr_mode && FUNC_13(VAR_7, 0) == 0)
  VAR_7->enabled_4addr_mode = 0;
}
