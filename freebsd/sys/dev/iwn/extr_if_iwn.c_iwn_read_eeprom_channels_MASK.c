
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct ieee80211com {int ic_nchans; int ic_channels; } ;
struct iwn_softc {int * eeprom_channels; struct ieee80211com sc_ic; } ;
struct iwn_eeprom_chan {int dummy; } ;
struct TYPE_2__ {int nchan; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (struct iwn_softc*,int,int ,int *,int ) ;
 int FUNC_2 (struct iwn_softc*,int,int ,int *,int ) ;
 int FUNC_3 (struct iwn_softc*,int ,int *,int) ;

__attribute__((used)) static void
FUNC_4(struct iwn_softc *VAR_2, int VAR_3, uint32_t VAR_4)
{
 struct ieee80211com *VAR_5 = &VAR_2->sc_ic;

 FUNC_3(VAR_2, VAR_4, &VAR_2->eeprom_channels[VAR_3],
     VAR_1[VAR_3].nchan * sizeof (struct iwn_eeprom_chan));

 if (VAR_3 < 5) {
  FUNC_1(VAR_2, VAR_3, VAR_0, &VAR_5->ic_nchans,
      VAR_5->ic_channels);
 } else {
  FUNC_2(VAR_2, VAR_3, VAR_0, &VAR_5->ic_nchans,
      VAR_5->ic_channels);
 }
 FUNC_0(VAR_5->ic_channels, VAR_5->ic_nchans);
}
