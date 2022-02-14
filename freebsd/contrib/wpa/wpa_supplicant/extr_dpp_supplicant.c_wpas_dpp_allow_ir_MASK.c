
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_modes; struct hostapd_hw_modes* modes; } ;
struct wpa_supplicant {TYPE_1__ hw; } ;
struct hostapd_hw_modes {int num_channels; struct hostapd_channel_data* channels; } ;
struct hostapd_channel_data {int freq; int flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct wpa_supplicant *VAR_4, unsigned int VAR_5)
{
 int VAR_6, VAR_7;

 if (!VAR_4->hw.modes)
  return -1;

 for (VAR_6 = 0; VAR_6 < VAR_4->hw.num_modes; VAR_6++) {
  struct hostapd_hw_modes *VAR_8 = &VAR_4->hw.modes[VAR_6];

  for (VAR_7 = 0; VAR_7 < VAR_8->num_channels; VAR_7++) {
   struct hostapd_channel_data *VAR_9 = &VAR_8->channels[VAR_7];

   if (VAR_9->freq != (int) VAR_5)
    continue;

   if (VAR_9->flag & (VAR_0 |
       VAR_1 |
       VAR_2))
    continue;

   return 1;
  }
 }

 FUNC_0(VAR_3,
     "DPP: Frequency %u MHz not supported or does not allow PKEX initiation in the current channel list",
     VAR_5);

 return 0;
}
