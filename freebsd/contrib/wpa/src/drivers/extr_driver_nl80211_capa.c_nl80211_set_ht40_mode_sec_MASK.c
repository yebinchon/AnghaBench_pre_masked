
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostapd_hw_modes {int num_channels; struct hostapd_channel_data* channels; } ;
struct hostapd_channel_data {int flag; int freq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct hostapd_hw_modes *VAR_3, int VAR_4,
          int VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_3->num_channels; VAR_6++) {
  struct hostapd_channel_data *VAR_7 = &VAR_3->channels[VAR_6];
  if (!(VAR_7->flag & VAR_0))
   continue;
  if (VAR_7->freq - 30 >= VAR_4 && VAR_7->freq - 10 <= VAR_5)
   VAR_7->flag |= VAR_1;
  if (VAR_7->freq + 10 >= VAR_4 && VAR_7->freq + 30 <= VAR_5)
   VAR_7->flag |= VAR_2;
 }
}
