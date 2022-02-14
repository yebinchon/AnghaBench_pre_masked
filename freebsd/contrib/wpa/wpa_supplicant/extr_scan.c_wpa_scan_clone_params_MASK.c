
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpa_driver_scan_params {size_t num_ssids; int extra_ies_len; int num_filter_ssids; int sched_scan_plans_num; int relative_adjust_rssi; int relative_adjust_band; int relative_rssi; int relative_rssi_set; int * bssid; int * mac_addr_mask; int * mac_addr; scalar_t__ mac_addr_rand; int * sched_scan_plans; int oce_scan; int duration_mandatory; int duration; int low_priority; int only_new_results; int p2p_probe; int filter_rssi; int * filter_ssids; int * freqs; int * extra_ies; TYPE_1__* ssids; } ;
struct TYPE_2__ {int ssid_len; int * ssid; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int) ;
 int FUNC_2 (int *,int *,int) ;
 void* FUNC_3 (int *,int) ;
 struct wpa_driver_scan_params* FUNC_4 (int) ;
 int FUNC_5 (struct wpa_driver_scan_params*) ;

struct wpa_driver_scan_params *
FUNC_6(const struct wpa_driver_scan_params *VAR_1)
{
 struct wpa_driver_scan_params *VAR_2;
 size_t VAR_3;
 u8 *VAR_4;

 VAR_2 = FUNC_4(sizeof(*VAR_2));
 if (VAR_2 == ((void*)0))
  return ((void*)0);

 for (VAR_3 = 0; VAR_3 < VAR_1->num_ssids; VAR_3++) {
  if (VAR_1->ssids[VAR_3].ssid) {
   VAR_4 = FUNC_3(VAR_1->ssids[VAR_3].ssid,
          VAR_1->ssids[VAR_3].ssid_len);
   if (VAR_4 == ((void*)0))
    goto failed;
   VAR_2->ssids[VAR_3].ssid = VAR_4;
   VAR_2->ssids[VAR_3].ssid_len = VAR_1->ssids[VAR_3].ssid_len;
  }
 }
 VAR_2->num_ssids = VAR_1->num_ssids;

 if (VAR_1->extra_ies) {
  VAR_4 = FUNC_3(VAR_1->extra_ies, VAR_1->extra_ies_len);
  if (VAR_4 == ((void*)0))
   goto failed;
  VAR_2->extra_ies = VAR_4;
  VAR_2->extra_ies_len = VAR_1->extra_ies_len;
 }

 if (VAR_1->freqs) {
  int VAR_5 = FUNC_0(VAR_1->freqs);
  VAR_2->freqs = FUNC_3(VAR_1->freqs, (VAR_5 + 1) * sizeof(int));
  if (VAR_2->freqs == ((void*)0))
   goto failed;
 }

 if (VAR_1->filter_ssids) {
  VAR_2->filter_ssids = FUNC_3(VAR_1->filter_ssids,
       sizeof(*VAR_2->filter_ssids) *
       VAR_1->num_filter_ssids);
  if (VAR_2->filter_ssids == ((void*)0))
   goto failed;
  VAR_2->num_filter_ssids = VAR_1->num_filter_ssids;
 }

 VAR_2->filter_rssi = VAR_1->filter_rssi;
 VAR_2->p2p_probe = VAR_1->p2p_probe;
 VAR_2->only_new_results = VAR_1->only_new_results;
 VAR_2->low_priority = VAR_1->low_priority;
 VAR_2->duration = VAR_1->duration;
 VAR_2->duration_mandatory = VAR_1->duration_mandatory;
 VAR_2->oce_scan = VAR_1->oce_scan;

 if (VAR_1->sched_scan_plans_num > 0) {
  VAR_2->sched_scan_plans =
   FUNC_3(VAR_1->sched_scan_plans,
      sizeof(*VAR_1->sched_scan_plans) *
      VAR_1->sched_scan_plans_num);
  if (!VAR_2->sched_scan_plans)
   goto failed;

  VAR_2->sched_scan_plans_num = VAR_1->sched_scan_plans_num;
 }

 if (VAR_1->mac_addr_rand) {
  VAR_2->mac_addr_rand = VAR_1->mac_addr_rand;

  if (VAR_1->mac_addr && VAR_1->mac_addr_mask) {
   u8 *VAR_6;

   VAR_6 = FUNC_1(2 * VAR_0);
   if (!VAR_6)
    goto failed;

   FUNC_2(VAR_6, VAR_1->mac_addr, VAR_0);
   FUNC_2(VAR_6 + VAR_0, VAR_1->mac_addr_mask,
      VAR_0);
   VAR_2->mac_addr = VAR_6;
   VAR_2->mac_addr_mask = VAR_6 + VAR_0;
  }
 }

 if (VAR_1->bssid) {
  u8 *VAR_7;

  VAR_7 = FUNC_3(VAR_1->bssid, VAR_0);
  if (!VAR_7)
   goto failed;
  VAR_2->bssid = VAR_7;
 }

 VAR_2->relative_rssi_set = VAR_1->relative_rssi_set;
 VAR_2->relative_rssi = VAR_1->relative_rssi;
 VAR_2->relative_adjust_band = VAR_1->relative_adjust_band;
 VAR_2->relative_adjust_rssi = VAR_1->relative_adjust_rssi;
 return VAR_2;

failed:
 FUNC_5(VAR_2);
 return ((void*)0);
}
