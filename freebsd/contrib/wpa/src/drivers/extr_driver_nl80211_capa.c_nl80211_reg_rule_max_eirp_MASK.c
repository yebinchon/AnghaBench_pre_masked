
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef size_t u16 ;
struct phy_info_arg {size_t* num_modes; struct hostapd_hw_modes* modes; } ;
struct hostapd_hw_modes {int num_channels; struct hostapd_channel_data* channels; } ;
struct hostapd_channel_data {scalar_t__ max_tx_power; scalar_t__ freq; } ;



__attribute__((used)) static void FUNC_0(u32 VAR_0, u32 VAR_1, u32 VAR_2,
          struct phy_info_arg *VAR_3)
{
 u16 VAR_4;

 for (VAR_4 = 0; VAR_4 < *VAR_3->num_modes; VAR_4++) {
  int VAR_5;
  struct hostapd_hw_modes *VAR_6 = &VAR_3->modes[VAR_4];

  for (VAR_5 = 0; VAR_5 < VAR_6->num_channels; VAR_5++) {
   struct hostapd_channel_data *VAR_7 = &VAR_6->channels[VAR_5];
   if ((u32) VAR_7->freq - 10 >= VAR_0 &&
       (u32) VAR_7->freq + 10 <= VAR_1)
    VAR_7->max_tx_power = VAR_2;
  }
 }
}
