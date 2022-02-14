
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostapd_iface {struct hostapd_hw_modes* current_mode; } ;
struct hostapd_hw_modes {struct hostapd_channel_data* channels; } ;
struct hostapd_channel_data {int flag; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct hostapd_iface *VAR_1,
     int VAR_2, int VAR_3)
{
 struct hostapd_channel_data *VAR_4;
 struct hostapd_hw_modes *VAR_5;
 int VAR_6, VAR_7 = 0;

 VAR_5 = VAR_1->current_mode;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  VAR_4 = &VAR_5->channels[VAR_2 + VAR_6];
  if (VAR_4->flag & VAR_0)
   VAR_7++;
 }

 return VAR_7;
}
