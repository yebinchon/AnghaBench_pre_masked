
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostapd_iface {struct hostapd_hw_modes* current_mode; } ;
struct hostapd_hw_modes {struct hostapd_channel_data* channels; } ;
struct hostapd_channel_data {int flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(struct hostapd_iface *VAR_4,
         int VAR_5, int VAR_6)
{
 struct hostapd_channel_data *VAR_7;
 struct hostapd_hw_modes *VAR_8;
 int VAR_9;

 VAR_8 = VAR_4->current_mode;

 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
  VAR_7 = &VAR_8->channels[VAR_5 + VAR_9];

  if (VAR_7->flag & VAR_2)
   break;

  if (!(VAR_7->flag & VAR_3))
   continue;

  if ((VAR_7->flag & VAR_1) !=
      VAR_0)
   break;
 }

 return VAR_9 == VAR_6;
}
