
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hostapd_iface {int chan_util_samples_sum; int chan_util_num_sample_periods; int chan_util_average; scalar_t__ channel_utilization; int freq; } ;
struct hostapd_data {TYPE_1__* conf; struct hostapd_iface* iface; scalar_t__ started; scalar_t__ beacon_set_done; } ;
struct TYPE_2__ {int chan_util_avg_period; int bss_load_update_period; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,unsigned int,void (*) (void*,void*),struct hostapd_data*,int *) ;
 scalar_t__ FUNC_1 (struct hostapd_data*,unsigned int*,unsigned int*) ;
 int FUNC_2 (struct hostapd_data*,int ) ;
 int FUNC_3 (struct hostapd_data*) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static void FUNC_5(void *VAR_1, void *VAR_2)
{
 struct hostapd_data *VAR_3 = VAR_1;
 unsigned int VAR_4, VAR_5;
 int VAR_6;
 struct hostapd_iface *VAR_7 = VAR_3->iface;

 if (!(VAR_3->beacon_set_done && VAR_3->started))
  return;

 VAR_6 = FUNC_2(VAR_3, VAR_3->iface->freq);
 if (VAR_6) {
  FUNC_4(VAR_0, "BSS Load: Failed to get survey data");
  return;
 }

 FUNC_3(VAR_3);

 if (FUNC_1(VAR_3, &VAR_4, &VAR_5) < 0)
  return;

 if (VAR_3->conf->chan_util_avg_period) {
  VAR_7->chan_util_samples_sum += VAR_7->channel_utilization;
  VAR_7->chan_util_num_sample_periods +=
   VAR_3->conf->bss_load_update_period;
  if (VAR_7->chan_util_num_sample_periods >=
      VAR_3->conf->chan_util_avg_period) {
   VAR_7->chan_util_average =
    VAR_7->chan_util_samples_sum /
    (VAR_7->chan_util_num_sample_periods /
     VAR_3->conf->bss_load_update_period);
   VAR_7->chan_util_samples_sum = 0;
   VAR_7->chan_util_num_sample_periods = 0;
  }
 }

 FUNC_0(VAR_4, VAR_5, FUNC_5, VAR_3,
          ((void*)0));
}
