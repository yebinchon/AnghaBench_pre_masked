
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostapd_hw_modes {int num_channels; struct hostapd_channel_data* channels; } ;
struct hostapd_channel_data {int freq; int flag; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct hostapd_hw_modes *VAR_1, int VAR_2,
      int VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1->num_channels; VAR_4++) {
  struct hostapd_channel_data *VAR_5 = &VAR_1->channels[VAR_4];
  if (VAR_5->freq - 10 >= VAR_2 && VAR_5->freq + 10 <= VAR_3)
   VAR_5->flag |= VAR_0;
 }
}
