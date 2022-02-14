
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpi_softc {struct wpi_eeprom_chan** eeprom_channels; } ;
struct wpi_eeprom_chan {int dummy; } ;
struct ieee80211_channel {scalar_t__ ic_ieee; } ;
struct TYPE_2__ {int nchan; scalar_t__* chan; } ;


 int FUNC_0 (struct ieee80211_channel*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static struct wpi_eeprom_chan *
FUNC_1(struct wpi_softc *VAR_2, struct ieee80211_channel *VAR_3)
{
 int VAR_4, VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  for (VAR_4 = 0; VAR_4 < VAR_1[VAR_5].nchan; VAR_4++)
   if (VAR_1[VAR_5].chan[VAR_4] == VAR_3->ic_ieee &&
       ((VAR_5 == 0) ^ FUNC_0(VAR_3)) == 1)
    return &VAR_2->eeprom_channels[VAR_5][VAR_4];

 return ((void*)0);
}
