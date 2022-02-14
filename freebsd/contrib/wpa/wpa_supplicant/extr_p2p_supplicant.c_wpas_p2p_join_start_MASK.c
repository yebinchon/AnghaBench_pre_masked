
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpa_supplicant {int p2p_in_provisioning; scalar_t__ roc_waiting_drv_freq; scalar_t__ off_channel_freq; int const* pending_join_iface_addr; int pending_join_wps_method; int const* pending_join_dev_addr; int p2p_fallback_to_go_neg; TYPE_1__* global; struct wpa_supplicant* parent; int p2p_wps_method; int const* p2p_pin; } ;
struct wpa_bss {int freq; size_t ssid_len; int const* ssid; } ;
struct p2p_go_neg_results {int freq; size_t ssid_len; int const* ssid; int wps_method; int const* peer_interface_addr; int const* peer_device_addr; } ;
typedef int res ;
struct TYPE_2__ {struct wpa_supplicant* p2p_group_formation; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct wpa_supplicant*,int *) ;
 int FUNC_1 (int,int ,int ,struct wpa_supplicant*,int *) ;
 int FUNC_2 (int const*,int const*,size_t) ;
 int FUNC_3 (struct p2p_go_neg_results*,int ,int) ;
 struct wpa_bss* FUNC_4 (struct wpa_supplicant*,int const*,int const*,size_t) ;
 struct wpa_bss* FUNC_5 (struct wpa_supplicant*,int const*) ;
 int FUNC_6 (struct wpa_supplicant*) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (int const*,size_t) ;
 struct wpa_supplicant* FUNC_9 (struct wpa_supplicant*,int ,int ) ;
 int VAR_2 ;
 int FUNC_10 (struct wpa_supplicant*,struct p2p_go_neg_results*) ;

__attribute__((used)) static int FUNC_11(struct wpa_supplicant *VAR_3, int VAR_4,
          const u8 *VAR_5, size_t VAR_6)
{
 struct wpa_supplicant *VAR_7;
 struct p2p_go_neg_results VAR_8;
 struct wpa_bss *VAR_9;

 VAR_7 = FUNC_9(VAR_3, 0, 0);
 if (VAR_7 == ((void*)0))
  return -1;
 if (VAR_7 != VAR_3) {
  FUNC_2(VAR_7->p2p_pin, VAR_3->p2p_pin,
     sizeof(VAR_7->p2p_pin));
  VAR_7->p2p_wps_method = VAR_3->p2p_wps_method;
 }
 if (VAR_7 == VAR_3->parent)
  VAR_3->global->p2p_group_formation = VAR_7;

 VAR_7->p2p_in_provisioning = 1;
 VAR_7->p2p_fallback_to_go_neg = VAR_3->p2p_fallback_to_go_neg;

 FUNC_3(&VAR_8, 0, sizeof(VAR_8));
 FUNC_2(VAR_8.peer_device_addr, VAR_3->pending_join_dev_addr, VAR_0);
 FUNC_2(VAR_8.peer_interface_addr, VAR_3->pending_join_iface_addr,
    VAR_0);
 VAR_8.wps_method = VAR_3->pending_join_wps_method;
 if (VAR_4 && VAR_5 && VAR_6) {
  VAR_8.freq = VAR_4;
  VAR_8.ssid_len = VAR_6;
  FUNC_2(VAR_8.ssid, VAR_5, VAR_6);
 } else {
  if (VAR_5 && VAR_6) {
   VAR_9 = FUNC_4(VAR_3, VAR_3->pending_join_iface_addr,
       VAR_5, VAR_6);
  } else {
   VAR_9 = FUNC_5(
    VAR_3, VAR_3->pending_join_iface_addr);
  }
  if (VAR_9) {
   VAR_8.freq = VAR_9->freq;
   VAR_8.ssid_len = VAR_9->ssid_len;
   FUNC_2(VAR_8.ssid, VAR_9->ssid, VAR_9->ssid_len);
   FUNC_7(VAR_1, "P2P: Join target GO operating frequency from BSS table: %d MHz (SSID %s)",
       VAR_9->freq,
       FUNC_8(VAR_9->ssid, VAR_9->ssid_len));
  } else if (VAR_5 && VAR_6) {
   VAR_8.ssid_len = VAR_6;
   FUNC_2(VAR_8.ssid, VAR_5, VAR_6);
   FUNC_7(VAR_1, "P2P: Join target GO (SSID %s)",
       FUNC_8(VAR_5, VAR_6));
  }
 }

 if (VAR_3->off_channel_freq || VAR_3->roc_waiting_drv_freq) {
  FUNC_7(VAR_1, "P2P: Cancel remain-on-channel prior to "
      "starting client");
  FUNC_6(VAR_3);
  VAR_3->off_channel_freq = 0;
  VAR_3->roc_waiting_drv_freq = 0;
 }
 FUNC_10(VAR_7, &VAR_8);






 FUNC_0(VAR_2, VAR_3, ((void*)0));
 FUNC_1(60, 0, VAR_2,
          VAR_3, ((void*)0));

 return 0;
}
