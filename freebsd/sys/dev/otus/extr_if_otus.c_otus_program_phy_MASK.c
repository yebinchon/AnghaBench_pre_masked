
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int deviceType; } ;
struct TYPE_4__ {TYPE_1__ baseEepHeader; } ;
struct otus_softc {int const* phy_vals; TYPE_2__ eeprom; } ;
struct ieee80211_channel {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (struct ieee80211_channel*) ;
 int * VAR_11 ;
 int* VAR_12 ;
 int* VAR_13 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct otus_softc*,struct ieee80211_channel*) ;
 int FUNC_4 (struct otus_softc*,int ,int const) ;
 int FUNC_5 (struct otus_softc*) ;

int
FUNC_6(struct otus_softc *VAR_14, struct ieee80211_channel *VAR_15)
{
 const uint32_t *VAR_16;
 int VAR_17, VAR_18;


 if (FUNC_1(VAR_15))
  VAR_16 = VAR_12;
 else
  VAR_16 = VAR_13;
 for (VAR_18 = 0; VAR_18 < FUNC_2(VAR_11); VAR_18++)
  FUNC_4(VAR_14, FUNC_0(VAR_11[VAR_18]), VAR_16[VAR_18]);
 VAR_14->phy_vals = VAR_16;

 if (VAR_14->eeprom.baseEepHeader.deviceType == 0x80)
  if ((VAR_17 = FUNC_3(VAR_14, VAR_15)) != 0)
   return VAR_17;


 FUNC_4(VAR_14, VAR_9, 0x7f);
 FUNC_4(VAR_14, VAR_0, 0x3f3f3f3f);
 FUNC_4(VAR_14, VAR_1, 0x3f3f3f3f);
 FUNC_4(VAR_14, VAR_2, 0x3f3f3f3f);
 FUNC_4(VAR_14, VAR_3, 0x3f3f3f3f);
 FUNC_4(VAR_14, VAR_4, 0x3f3f3f3f);
 FUNC_4(VAR_14, VAR_5, 0x3f3f3f3f);
 FUNC_4(VAR_14, VAR_6, 0x3f3f3f3f);
 FUNC_4(VAR_14, VAR_7, 0x3f3f3f3f);
 FUNC_4(VAR_14, VAR_8, 0x3f3f3f3f);

 if (FUNC_1(VAR_15))
  FUNC_4(VAR_14, VAR_10, 0x5163);
 else
  FUNC_4(VAR_14, VAR_10, 0x5143);

 return FUNC_5(VAR_14);
}
