
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hostapd_iface {TYPE_1__* current_mode; } ;
struct hostapd_channel_data {int interference_factor; int freq; int chan; } ;
struct TYPE_2__ {int num_channels; struct hostapd_channel_data* channels; } ;


 int VAR_0 ;
 int FUNC_0 (struct hostapd_iface*,struct hostapd_channel_data*) ;
 int FUNC_1 (struct hostapd_channel_data*) ;
 int FUNC_2 (struct hostapd_iface*,struct hostapd_channel_data*) ;
 int FUNC_3 (int ,char*,int ,...) ;

__attribute__((used)) static void FUNC_4(
 struct hostapd_iface *VAR_1)
{
 int VAR_2;
 struct hostapd_channel_data *VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_1->current_mode->num_channels; VAR_2++) {
  VAR_3 = &VAR_1->current_mode->channels[VAR_2];

  if (!FUNC_1(VAR_3))
   continue;

  if (!FUNC_2(VAR_1, VAR_3))
   continue;

  FUNC_3(VAR_0, "ACS: Survey analysis for channel %d (%d MHz)",
      VAR_3->chan, VAR_3->freq);

  FUNC_0(VAR_1, VAR_3);

  FUNC_3(VAR_0, "ACS:  * interference factor average: %Lg",
      VAR_3->interference_factor);
 }
}
