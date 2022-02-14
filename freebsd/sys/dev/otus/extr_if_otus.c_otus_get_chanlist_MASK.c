
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint16_t ;
struct TYPE_4__ {int opCapFlags; int * regDmn; } ;
struct TYPE_5__ {TYPE_1__ baseEepHeader; } ;
struct ieee80211com {TYPE_3__* ic_channels; } ;
struct otus_softc {TYPE_2__ eeprom; struct ieee80211com sc_ic; } ;
struct TYPE_6__ {int ic_flags; void* ic_freq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct otus_softc*,int ,char*,int ) ;
 size_t* VAR_9 ;
 void* FUNC_1 (size_t,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (size_t*) ;

void
FUNC_4(struct otus_softc *VAR_10)
{
 struct ieee80211com *VAR_11 = &VAR_10->sc_ic;
 uint16_t VAR_12;
 uint8_t VAR_13;
 int VAR_14;


 VAR_12 = FUNC_2(VAR_10->eeprom.baseEepHeader.regDmn[0]);
 FUNC_0(VAR_10, VAR_8, "regdomain=0x%04x\n", VAR_12);

 if (VAR_10->eeprom.baseEepHeader.opCapFlags & VAR_1) {
  for (VAR_14 = 0; VAR_14 < 14; VAR_14++) {
   VAR_13 = VAR_9[VAR_14];
   VAR_11->ic_channels[VAR_13].ic_freq =
       FUNC_1(VAR_13, VAR_2);
   VAR_11->ic_channels[VAR_13].ic_flags =
       VAR_5 | VAR_7 |
       VAR_6 | VAR_2;
  }
 }
 if (VAR_10->eeprom.baseEepHeader.opCapFlags & VAR_0) {
  for (VAR_14 = 14; VAR_14 < FUNC_3(VAR_9); VAR_14++) {
   VAR_13 = VAR_9[VAR_14];
   VAR_11->ic_channels[VAR_13].ic_freq =
       FUNC_1(VAR_13, VAR_3);
   VAR_11->ic_channels[VAR_13].ic_flags = VAR_4;
  }
 }
}
