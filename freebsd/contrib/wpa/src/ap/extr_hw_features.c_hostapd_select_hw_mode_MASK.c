
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hostapd_iface {int num_hw_features; int drv_flags; TYPE_1__* conf; int * bss; struct hostapd_hw_modes* current_mode; struct hostapd_hw_modes* hw_features; } ;
struct hostapd_hw_modes {scalar_t__ mode; } ;
struct TYPE_2__ {scalar_t__ hw_mode; int channel; scalar_t__ ieee80211ax; scalar_t__ ieee80211ac; scalar_t__ ieee80211n; } ;





 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct hostapd_iface*) ;
 int FUNC_1 (int ,int *,int ,int ,char*,int) ;
 int FUNC_2 (struct hostapd_iface*) ;
 int FUNC_3 (int ,char*) ;

int FUNC_4(struct hostapd_iface *VAR_8)
{
 int VAR_9;

 if (VAR_8->num_hw_features < 1)
  return -1;

 if ((VAR_8->conf->hw_mode == VAR_2 ||
      VAR_8->conf->ieee80211n || VAR_8->conf->ieee80211ac ||
      VAR_8->conf->ieee80211ax) &&
     VAR_8->conf->channel == 14) {
  FUNC_3(VAR_5, "Disable OFDM/HT/VHT/HE on channel 14");
  VAR_8->conf->hw_mode = VAR_1;
  VAR_8->conf->ieee80211n = 0;
  VAR_8->conf->ieee80211ac = 0;
  VAR_8->conf->ieee80211ax = 0;
 }

 VAR_8->current_mode = ((void*)0);
 for (VAR_9 = 0; VAR_9 < VAR_8->num_hw_features; VAR_9++) {
  struct hostapd_hw_modes *VAR_10 = &VAR_8->hw_features[VAR_9];
  if (VAR_10->mode == VAR_8->conf->hw_mode) {
   VAR_8->current_mode = VAR_10;
   break;
  }
 }

 if (VAR_8->current_mode == ((void*)0)) {
  if (!(VAR_8->drv_flags & VAR_6) ||
      !(VAR_8->drv_flags & VAR_7))
  {
   FUNC_3(VAR_4,
       "Hardware does not support configured mode");
   FUNC_1(VAR_8->bss[0], ((void*)0),
           VAR_3,
           VAR_0,
           "Hardware does not support configured mode (%d) (hw_mode in hostapd.conf)",
           (int) VAR_8->conf->hw_mode);
   return -2;
  }
 }

 switch (FUNC_0(VAR_8)) {
 case 128:
  return 0;
 case 130:
  return 1;
 case 129:
 default:
  FUNC_2(VAR_8);
  return -3;
 }
}
