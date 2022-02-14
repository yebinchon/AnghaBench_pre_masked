
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t num_modes; struct hostapd_hw_modes* modes; } ;
struct wpa_supplicant {TYPE_1__ hw; } ;
struct hostapd_hw_modes {int num_channels; struct hostapd_channel_data* channels; } ;
struct hostapd_channel_data {int freq; unsigned int dfs_cac_ms; } ;



__attribute__((used)) static unsigned int FUNC_0(const struct wpa_supplicant *VAR_0,
          int VAR_1)
{
 size_t VAR_2;
 int VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_0->hw.num_modes; VAR_2++) {
  const struct hostapd_hw_modes *VAR_4 = &VAR_0->hw.modes[VAR_2];

  for (VAR_3 = 0; VAR_3 < VAR_4->num_channels; VAR_3++) {
   const struct hostapd_channel_data *VAR_5;

   VAR_5 = &VAR_4->channels[VAR_3];
   if (VAR_5->freq == VAR_1)
    return VAR_5->dfs_cac_ms;
  }
 }

 return 0;
}
