
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hostapd_iface {TYPE_1__* current_mode; } ;
struct hostapd_channel_data {int flag; } ;
struct TYPE_2__ {int num_channels; struct hostapd_channel_data* channels; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct hostapd_channel_data*) ;

__attribute__((used)) static int FUNC_1(struct hostapd_iface *VAR_1)
{
 int VAR_2;
 struct hostapd_channel_data *VAR_3;
 int VAR_4 = 0;

 for (VAR_2 = 0; VAR_2 < VAR_1->current_mode->num_channels; VAR_2++) {
  VAR_3 = &VAR_1->current_mode->channels[VAR_2];
  if (!(VAR_3->flag & VAR_0) &&
      FUNC_0(VAR_3))
   VAR_4++;
 }


 return !!VAR_4;
}
