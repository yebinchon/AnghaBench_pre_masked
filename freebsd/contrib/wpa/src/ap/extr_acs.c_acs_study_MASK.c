
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hostapd_iface {TYPE_1__* conf; } ;
struct hostapd_channel_data {int chan; } ;
struct TYPE_2__ {scalar_t__ ieee80211ax; scalar_t__ ieee80211ac; int channel; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hostapd_iface*) ;
 int FUNC_1 (struct hostapd_iface*) ;
 int FUNC_2 (struct hostapd_iface*) ;
 struct hostapd_channel_data* FUNC_3 (struct hostapd_iface*) ;
 int FUNC_4 (struct hostapd_iface*) ;
 scalar_t__ FUNC_5 (struct hostapd_iface*,int) ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static void FUNC_7(struct hostapd_iface *VAR_2)
{
 struct hostapd_channel_data *VAR_3;
 int VAR_4;

 VAR_4 = FUNC_4(VAR_2);
 if (VAR_4 < 0) {
  FUNC_6(VAR_1, "ACS: All study options have failed");
  goto fail;
 }

 VAR_3 = FUNC_3(VAR_2);
 if (!VAR_3) {
  FUNC_6(VAR_1, "ACS: Failed to compute ideal channel");
  VAR_4 = -1;
  goto fail;
 }

 VAR_2->conf->channel = VAR_3->chan;

 if (VAR_2->conf->ieee80211ac || VAR_2->conf->ieee80211ax)
  FUNC_0(VAR_2);

 VAR_4 = 0;
fail:




 if (FUNC_5(VAR_2, VAR_4) == VAR_0) {
  FUNC_1(VAR_2);
  return;
 }



 FUNC_6(VAR_1, "ACS: Possibly channel configuration is invalid, please report this along with your config file.");
 FUNC_2(VAR_2);
}
