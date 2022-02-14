
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hostapd_iface {TYPE_1__* current_mode; } ;
struct hostapd_channel_data {int flag; int freq; } ;
struct TYPE_2__ {int num_channels; struct hostapd_channel_data* channels; } ;


 int VAR_0 ;

__attribute__((used)) static struct hostapd_channel_data *FUNC_0(struct hostapd_iface *VAR_1,
        int VAR_2)
{
 struct hostapd_channel_data *VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1->current_mode->num_channels; VAR_4++) {
  VAR_3 = &VAR_1->current_mode->channels[VAR_4];

  if (VAR_3->flag & VAR_0)
   continue;

  if (VAR_3->freq == VAR_2)
   return VAR_3;
 }

 return ((void*)0);
}
