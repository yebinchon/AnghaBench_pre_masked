
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwn_softc {struct iwn_eeprom_chan** eeprom_channels; } ;
struct iwn_eeprom_chan {int dummy; } ;
struct ieee80211_channel {int ic_extieee; int ic_ieee; } ;
struct TYPE_2__ {int nchan; int* chan; } ;


 scalar_t__ FUNC_0 (struct ieee80211_channel*) ;
 int FUNC_1 (struct ieee80211_channel*) ;
 scalar_t__ FUNC_2 (struct ieee80211_channel*) ;
 scalar_t__ FUNC_3 (struct ieee80211_channel*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static struct iwn_eeprom_chan *
FUNC_4(struct iwn_softc *VAR_1, struct ieee80211_channel *VAR_2)
{
 int VAR_3, VAR_4, VAR_5, VAR_6;

 if (FUNC_2(VAR_2)) {
  VAR_3 = FUNC_0(VAR_2) ? 6 : 5;
  if (FUNC_3(VAR_2))
   VAR_4 = VAR_2->ic_extieee;
  else
   VAR_4 = VAR_2->ic_ieee;
  for (VAR_5 = 0; VAR_5 < VAR_0[VAR_3].nchan; VAR_5++) {
   if (VAR_0[VAR_3].chan[VAR_5] == VAR_4)
    return &VAR_1->eeprom_channels[VAR_3][VAR_5];
  }
 } else {
  for (VAR_6 = 0; VAR_6 < 5; VAR_6++) {
   for (VAR_5 = 0; VAR_5 < VAR_0[VAR_6].nchan; VAR_5++) {
    if (VAR_0[VAR_6].chan[VAR_5] == VAR_2->ic_ieee &&
        ((VAR_6 == 0) ^ FUNC_1(VAR_2)) == 1)
     return &VAR_1->eeprom_channels[VAR_6][VAR_5];
   }
  }
 }
 return ((void*)0);
}
