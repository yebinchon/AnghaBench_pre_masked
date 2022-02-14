
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int num_modes; struct hostapd_hw_modes* modes; } ;
struct wpa_supplicant {TYPE_1__ hw; } ;
struct hostapd_hw_modes {int num_channels; struct hostapd_channel_data* channels; } ;
struct hostapd_channel_data {int freq; int flag; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct wpa_supplicant *VAR_1, int VAR_2)
{
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->hw.num_modes; VAR_3++) {
  struct hostapd_hw_modes *VAR_4 = &VAR_1->hw.modes[VAR_3];
  int VAR_5;

  for (VAR_5 = 0; VAR_5 < VAR_4->num_channels; VAR_5++) {
   struct hostapd_channel_data *VAR_6;

   VAR_6 = &VAR_4->channels[VAR_5];
   if (VAR_6->freq == VAR_2 &&
       !(VAR_6->flag & VAR_0))
    return 1;
  }
 }

 return 0;
}
