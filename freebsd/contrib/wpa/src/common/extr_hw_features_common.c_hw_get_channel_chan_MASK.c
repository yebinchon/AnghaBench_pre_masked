
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostapd_hw_modes {int num_channels; struct hostapd_channel_data* channels; } ;
struct hostapd_channel_data {int chan; int freq; } ;



struct hostapd_channel_data * FUNC_0(struct hostapd_hw_modes *VAR_0,
        int VAR_1, int *VAR_2)
{
 int VAR_3;

 if (VAR_2)
  *VAR_2 = 0;

 if (!VAR_0)
  return ((void*)0);

 for (VAR_3 = 0; VAR_3 < VAR_0->num_channels; VAR_3++) {
  struct hostapd_channel_data *VAR_4 = &VAR_0->channels[VAR_3];
  if (VAR_4->chan == VAR_1) {
   if (VAR_2)
    *VAR_2 = VAR_4->freq;
   return VAR_4;
  }
 }

 return ((void*)0);
}
