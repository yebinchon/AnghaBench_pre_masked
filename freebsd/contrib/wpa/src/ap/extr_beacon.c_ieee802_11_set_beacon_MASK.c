
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct wpa_driver_ap_params {struct hostapd_freq_params* freq; scalar_t__ reenable; struct wpabuf* assocresp_ies; struct wpabuf* proberesp_ies; struct wpabuf* beacon_ies; } ;
struct hostapd_iface {int freq; struct hostapd_hw_modes* current_mode; struct hostapd_config* conf; } ;
struct hostapd_hw_modes {int * he_capab; int vht_capab; } ;
struct hostapd_freq_params {int dummy; } ;
struct hostapd_data {int beacon_set_done; scalar_t__ reenable_beacon; scalar_t__ csa_in_progress; struct hostapd_iface* iface; } ;
struct hostapd_config {int secondary_channel; int ieee80211ax; int ieee80211ac; int ieee80211n; int channel; int hw_mode; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct hostapd_data*,struct wpabuf**,struct wpabuf**,struct wpabuf**) ;
 int FUNC_1 (struct hostapd_data*,struct wpa_driver_ap_params*) ;
 int FUNC_2 (struct hostapd_data*,struct wpabuf*,struct wpabuf*,struct wpabuf*) ;
 int FUNC_3 (struct hostapd_config*) ;
 int FUNC_4 (struct hostapd_config*) ;
 int FUNC_5 (struct hostapd_config*) ;
 scalar_t__ FUNC_6 (struct hostapd_freq_params*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int *) ;
 scalar_t__ FUNC_7 (struct hostapd_data*,struct wpa_driver_ap_params*) ;
 int FUNC_8 (struct wpa_driver_ap_params*) ;
 int FUNC_9 (int ,char*) ;

int FUNC_10(struct hostapd_data *VAR_2)
{
 struct wpa_driver_ap_params VAR_3;
 struct hostapd_freq_params VAR_4;
 struct hostapd_iface *VAR_5 = VAR_2->iface;
 struct hostapd_config *VAR_6 = VAR_5->conf;
 struct hostapd_hw_modes *VAR_7 = VAR_5->current_mode;
 struct wpabuf *VAR_8, *VAR_9, *VAR_10;
 int VAR_11, VAR_12 = -1;

 if (VAR_2->csa_in_progress) {
  FUNC_9(VAR_1, "Cannot set beacons during CSA period");
  return -1;
 }

 VAR_2->beacon_set_done = 1;

 if (FUNC_7(VAR_2, &VAR_3) < 0)
  return -1;

 if (FUNC_0(VAR_2, &VAR_8, &VAR_9, &VAR_10) <
     0)
  goto fail;

 VAR_3.beacon_ies = VAR_8;
 VAR_3.proberesp_ies = VAR_9;
 VAR_3.assocresp_ies = VAR_10;
 VAR_3.reenable = VAR_2->reenable_beacon;
 VAR_2->reenable_beacon = 0;

 if (VAR_7 &&
     FUNC_6(&VAR_4, VAR_6->hw_mode, VAR_5->freq,
        VAR_6->channel, VAR_6->ieee80211n,
        VAR_6->ieee80211ac, VAR_6->ieee80211ax,
        VAR_6->secondary_channel,
        FUNC_5(VAR_6),
        FUNC_3(VAR_6),
        FUNC_4(VAR_6),
        VAR_7->vht_capab,
        &VAR_7->he_capab[VAR_0]) == 0)
  VAR_3.freq = &VAR_4;

 VAR_11 = FUNC_1(VAR_2, &VAR_3);
 FUNC_2(VAR_2, VAR_8, VAR_9, VAR_10);
 if (VAR_11)
  FUNC_9(VAR_1, "Failed to set beacon parameters");
 else
  VAR_12 = 0;
fail:
 FUNC_8(&VAR_3);
 return VAR_12;
}
