
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int opCapFlags; } ;
struct TYPE_4__ {TYPE_1__ baseEepHeader; } ;
struct otus_softc {TYPE_2__ eeprom; scalar_t__ sc_ht; } ;
struct ieee80211com {struct otus_softc* ic_softc; } ;
struct ieee80211_channel {int dummy; } ;
typedef int bands ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 int FUNC_0 (struct ieee80211_channel*,int,int*,int *,int,int *,int ) ;
 int FUNC_1 (struct ieee80211_channel*,int,int*,int *,scalar_t__,int *,int ) ;
 int FUNC_2 (int *,int ,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static void
FUNC_5(struct ieee80211com *VAR_8,
    int VAR_9, int *VAR_10, struct ieee80211_channel VAR_11[])
{
 struct otus_softc *VAR_12 = VAR_8->ic_softc;
 uint8_t VAR_13[VAR_6];


 FUNC_2(VAR_13, 0, sizeof(VAR_13));
 if (VAR_12->eeprom.baseEepHeader.opCapFlags & VAR_1) {
  FUNC_4(VAR_13, VAR_3);
  FUNC_4(VAR_13, VAR_4);




  FUNC_0(VAR_11, VAR_9, VAR_10,
      VAR_7, 14, VAR_13, 0);
 }
 if (VAR_12->eeprom.baseEepHeader.opCapFlags & VAR_0) {
  FUNC_4(VAR_13, VAR_2);
  FUNC_1(VAR_11, VAR_9, VAR_10,
                    &VAR_7[14], FUNC_3(VAR_7) - 14, VAR_13, 0);
 }
}
