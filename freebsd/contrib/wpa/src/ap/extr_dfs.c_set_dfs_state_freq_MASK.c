
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hostapd_iface {struct hostapd_hw_modes* current_mode; } ;
struct hostapd_hw_modes {int num_channels; struct hostapd_channel_data* channels; } ;
struct hostapd_channel_data {int freq; int flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int,...) ;

__attribute__((used)) static int FUNC_1(struct hostapd_iface *VAR_4, int VAR_5, u32 VAR_6)
{
 struct hostapd_hw_modes *VAR_7;
 struct hostapd_channel_data *VAR_8 = ((void*)0);
 int VAR_9;

 VAR_7 = VAR_4->current_mode;
 if (VAR_7 == ((void*)0))
  return 0;

 FUNC_0(VAR_2, "set_dfs_state 0x%X for %d MHz", VAR_6, VAR_5);
 for (VAR_9 = 0; VAR_9 < VAR_4->current_mode->num_channels; VAR_9++) {
  VAR_8 = &VAR_4->current_mode->channels[VAR_9];
  if (VAR_8->freq == VAR_5) {
   if (VAR_8->flag & VAR_1) {
    VAR_8->flag &= ~VAR_0;
    VAR_8->flag |= VAR_6;
    return 1;
   }
  }
 }
 FUNC_0(VAR_3, "Can't set DFS state for freq %d MHz", VAR_5);
 return 0;
}
