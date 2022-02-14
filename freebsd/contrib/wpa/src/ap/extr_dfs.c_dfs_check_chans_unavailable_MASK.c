
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

__attribute__((used)) static int FUNC_0(struct hostapd_iface *VAR_3,
           int VAR_4,
           int VAR_5)
{
 struct hostapd_channel_data *VAR_6;
 struct hostapd_hw_modes *VAR_7;
 int VAR_8, VAR_9 = 0;

 VAR_7 = VAR_3->current_mode;

 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
  VAR_6 = &VAR_7->channels[VAR_4 + VAR_8];
  if (VAR_6->flag & VAR_2)
   VAR_9++;
  if ((VAR_6->flag & VAR_0) ==
      VAR_1)
   VAR_9++;
 }

 return VAR_9;
}
