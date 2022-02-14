
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct ieee80211_obss_scan_parameters {void* scan_activity_threshold; void* channel_transition_delay_factor; void* scan_active_total_per_channel; void* scan_passive_total_per_channel; void* scan_active_dwell; void* scan_passive_dwell; void* width_trigger_scan_interval; int supported_mcs_set; int a_mpdu_params; void* ht_capabilities_info; } ;
struct ieee80211_ht_capabilities {void* scan_activity_threshold; void* channel_transition_delay_factor; void* scan_active_total_per_channel; void* scan_passive_total_per_channel; void* scan_active_dwell; void* scan_passive_dwell; void* width_trigger_scan_interval; int supported_mcs_set; int a_mpdu_params; void* ht_capabilities_info; } ;
struct hostapd_data {TYPE_4__* iconf; TYPE_3__* iface; TYPE_1__* conf; } ;
struct TYPE_8__ {int ht_capab; int obss_interval; int ieee80211n; } ;
struct TYPE_7__ {TYPE_2__* current_mode; } ;
struct TYPE_6__ {int mcs_set; int a_mpdu_params; } ;
struct TYPE_5__ {scalar_t__ disable_11n; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct ieee80211_obss_scan_parameters*,int ,int) ;

u8 * FUNC_3(struct hostapd_data *VAR_2, u8 *VAR_3)
{
 struct ieee80211_ht_capabilities *VAR_4;
 u8 *VAR_5 = VAR_3;

 if (!VAR_2->iconf->ieee80211n || !VAR_2->iface->current_mode ||
     VAR_2->conf->disable_11n)
  return VAR_3;

 *VAR_5++ = VAR_0;
 *VAR_5++ = sizeof(*VAR_4);

 VAR_4 = (struct ieee80211_ht_capabilities *) VAR_5;
 FUNC_2(VAR_4, 0, sizeof(*VAR_4));
 VAR_4->ht_capabilities_info = FUNC_0(VAR_2->iconf->ht_capab);
 VAR_4->a_mpdu_params = VAR_2->iface->current_mode->a_mpdu_params;
 FUNC_1(VAR_4->supported_mcs_set, VAR_2->iface->current_mode->mcs_set,
    16);





  VAR_5 += sizeof(*VAR_4);

 if (VAR_2->iconf->obss_interval) {
  struct ieee80211_obss_scan_parameters *VAR_6;

  *VAR_5++ = VAR_1;
  *VAR_5++ = sizeof(*VAR_6);

  VAR_6 = (struct ieee80211_obss_scan_parameters *) VAR_5;
  FUNC_2(VAR_6, 0, sizeof(*VAR_6));
  VAR_6->width_trigger_scan_interval =
   FUNC_0(VAR_2->iconf->obss_interval);



  VAR_6->scan_passive_dwell =
   FUNC_0(20);
  VAR_6->scan_active_dwell =
   FUNC_0(10);
  VAR_6->scan_passive_total_per_channel =
   FUNC_0(200);
  VAR_6->scan_active_total_per_channel =
   FUNC_0(20);
  VAR_6->channel_transition_delay_factor =
   FUNC_0(5);
  VAR_6->scan_activity_threshold =
   FUNC_0(25);

  VAR_5 += sizeof(*VAR_6);
 }

 return VAR_5;
}
