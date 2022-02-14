
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int key_mgmt; int flags; int auth; } ;
struct wpa_driver_nl80211_data {int has_capability; int use_monitor; TYPE_2__ capa; int have_low_prio_scan; int p2p_go_ctwindow_supported; int data_tx_status; int poll_command_supported; scalar_t__ device_ap_sme; } ;
struct wiphy_info_data {TYPE_1__* capa; int data_tx_status; int poll_command_supported; scalar_t__ device_ap_sme; int have_low_prio_scan; scalar_t__ set_qos_map_supported; int p2p_go_ctwindow_supported; scalar_t__ error; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_0 (struct wpa_driver_nl80211_data*) ;
 int FUNC_1 (struct wpa_driver_nl80211_data*) ;
 int FUNC_2 (struct wpa_driver_nl80211_data*) ;
 scalar_t__ FUNC_3 (struct wpa_driver_nl80211_data*,struct wiphy_info_data*) ;

int FUNC_4(struct wpa_driver_nl80211_data *VAR_28)
{
 struct wiphy_info_data VAR_29;
 if (FUNC_3(VAR_28, &VAR_29))
  return -1;

 if (VAR_29.error)
  return -1;

 VAR_28->has_capability = 1;
 VAR_28->capa.key_mgmt = VAR_12 |
  VAR_15 |
  VAR_13 |
  VAR_14 |
  VAR_10 |
  VAR_11 |
  VAR_8 |
  VAR_3;

 if (VAR_28->capa.flags & VAR_27)
  VAR_28->capa.key_mgmt |= VAR_4 |
   VAR_5 |
   VAR_6 |
   VAR_7 |
   VAR_9;
 else if (VAR_28->capa.flags & VAR_21)
  VAR_28->capa.key_mgmt |= VAR_4 |
   VAR_5;







 VAR_28->capa.auth = VAR_1 |
  VAR_2 |
  VAR_0;

 VAR_28->capa.flags |= VAR_25;
 VAR_28->capa.flags |= VAR_26;
 VAR_28->capa.flags |= VAR_20;
 VAR_28->capa.flags |= VAR_17;

 if (!VAR_29.device_ap_sme) {
  VAR_28->capa.flags |= VAR_18;





  VAR_28->capa.flags |= VAR_16;
 }

 VAR_28->device_ap_sme = VAR_29.device_ap_sme;
 VAR_28->poll_command_supported = VAR_29.poll_command_supported;
 VAR_28->data_tx_status = VAR_29.data_tx_status;
 VAR_28->p2p_go_ctwindow_supported = VAR_29.p2p_go_ctwindow_supported;
 if (VAR_29.set_qos_map_supported)
  VAR_28->capa.flags |= VAR_24;
 VAR_28->have_low_prio_scan = VAR_29.have_low_prio_scan;





 VAR_28->use_monitor = !VAR_29.device_ap_sme &&
  (!VAR_29.poll_command_supported || !VAR_29.data_tx_status);






 if (!VAR_28->use_monitor && !VAR_29.data_tx_status)
  VAR_28->capa.flags &= ~VAR_20;
 return 0;
}
