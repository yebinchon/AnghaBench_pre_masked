
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_bss_params {char const* ifname; int enabled; int wpa; int wpa_pairwise; int ieee80211w; int rsn_preauth; int wpa_key_mgmt; int wpa_group; int ieee802_1x; } ;
struct hostapd_data {TYPE_1__* conf; } ;
typedef int params ;
struct TYPE_2__ {int wpa; int wpa_pairwise; int rsn_pairwise; int ieee80211w; int rsn_preauth; int wpa_key_mgmt; int wpa_group; int ieee802_1x; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hostapd_data*,struct wpa_bss_params*) ;
 int FUNC_1 (struct wpa_bss_params*,int ,int) ;

int FUNC_2(struct hostapd_data *VAR_2, const char *VAR_3,
         int VAR_4)
{
 struct wpa_bss_params VAR_5;
 FUNC_1(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.ifname = VAR_3;
 VAR_5.enabled = VAR_4;
 if (VAR_4) {
  VAR_5.wpa = VAR_2->conf->wpa;
  VAR_5.ieee802_1x = VAR_2->conf->ieee802_1x;
  VAR_5.wpa_group = VAR_2->conf->wpa_group;
  if ((VAR_2->conf->wpa & (VAR_1 | VAR_0)) ==
      (VAR_1 | VAR_0))
   VAR_5.wpa_pairwise = VAR_2->conf->wpa_pairwise |
    VAR_2->conf->rsn_pairwise;
  else if (VAR_2->conf->wpa & VAR_0)
   VAR_5.wpa_pairwise = VAR_2->conf->rsn_pairwise;
  else if (VAR_2->conf->wpa & VAR_1)
   VAR_5.wpa_pairwise = VAR_2->conf->wpa_pairwise;
  VAR_5.wpa_key_mgmt = VAR_2->conf->wpa_key_mgmt;
  VAR_5.rsn_preauth = VAR_2->conf->rsn_preauth;



 }
 return FUNC_0(VAR_2, &VAR_5);
}
