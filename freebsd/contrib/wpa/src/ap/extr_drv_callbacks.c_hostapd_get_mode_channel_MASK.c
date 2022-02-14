
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hostapd_iface {TYPE_1__* current_mode; } ;
struct hostapd_channel_data {scalar_t__ freq; } ;
struct TYPE_2__ {int num_channels; struct hostapd_channel_data* channels; } ;



__attribute__((used)) static struct hostapd_channel_data * FUNC_0(
 struct hostapd_iface *VAR_0, unsigned int VAR_1)
{
 int VAR_2;
 struct hostapd_channel_data *VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_0->current_mode->num_channels; VAR_2++) {
  VAR_3 = &VAR_0->current_mode->channels[VAR_2];
  if ((unsigned int) VAR_3->freq == VAR_1)
   return VAR_3;
 }

 return ((void*)0);
}
