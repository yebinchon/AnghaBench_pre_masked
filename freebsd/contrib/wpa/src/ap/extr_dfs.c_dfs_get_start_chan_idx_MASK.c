
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct hostapd_iface {TYPE_1__* conf; struct hostapd_hw_modes* current_mode; } ;
struct hostapd_hw_modes {int num_channels; struct hostapd_channel_data* channels; } ;
struct hostapd_channel_data {int chan; } ;
struct TYPE_4__ {int channel; int secondary_channel; int ieee80211n; scalar_t__ ieee80211ax; scalar_t__ ieee80211ac; } ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,char*,...) ;

__attribute__((used)) static int FUNC_4(struct hostapd_iface *VAR_2, int *VAR_3)
{
 struct hostapd_hw_modes *VAR_4;
 struct hostapd_channel_data *VAR_5;
 int VAR_6 = VAR_2->conf->channel;
 int VAR_7 = -1, VAR_8;
 int VAR_9 = -1;

 *VAR_3 = -1;


 if (VAR_2->conf->ieee80211n && VAR_2->conf->secondary_channel == -1)
  VAR_6 -= 4;


 if (VAR_2->conf->ieee80211ac || VAR_2->conf->ieee80211ax) {
  switch (FUNC_2(VAR_2->conf)) {
  case 128:
   break;
  case 130:
   VAR_6 = FUNC_0(
    VAR_2->conf) - 6;
   break;
  case 131:
   VAR_6 = FUNC_0(
    VAR_2->conf) - 14;
   break;
  case 129:
   VAR_6 = FUNC_0(
    VAR_2->conf) - 6;
   VAR_9 = FUNC_1(
    VAR_2->conf) - 6;
   break;
  default:
   FUNC_3(VAR_1,
       "DFS only VHT20/40/80/160/80+80 is supported now");
   VAR_6 = -1;
   break;
  }
 }


 VAR_4 = VAR_2->current_mode;
 for (VAR_8 = 0; VAR_8 < VAR_4->num_channels; VAR_8++) {
  VAR_5 = &VAR_4->channels[VAR_8];
  if (VAR_5->chan == VAR_6) {
   VAR_7 = VAR_8;
   break;
  }
 }

 if (VAR_7 != -1 && VAR_9 > -1) {
  int VAR_10 = 0;


  VAR_4 = VAR_2->current_mode;
  for (VAR_8 = 0; VAR_8 < VAR_4->num_channels; VAR_8++) {
   VAR_5 = &VAR_4->channels[VAR_8];
   if (VAR_5->chan == VAR_9) {
    *VAR_3 = VAR_8;
    VAR_10 = 1;
    break;
   }
  }
  if (!VAR_10)
   VAR_7 = -1;
 }

 if (VAR_7 == -1) {
  FUNC_3(VAR_0,
      "DFS chan_idx seems wrong; num-ch: %d ch-no: %d conf-ch-no: %d 11n: %d sec-ch: %d vht-oper-width: %d",
      VAR_4->num_channels, VAR_6, VAR_2->conf->channel,
      VAR_2->conf->ieee80211n,
      VAR_2->conf->secondary_channel,
      FUNC_2(VAR_2->conf));

  for (VAR_8 = 0; VAR_8 < VAR_4->num_channels; VAR_8++) {
   FUNC_3(VAR_0, "Available channel: %d",
       VAR_4->channels[VAR_8].chan);
  }
 }

 return VAR_7;
}
