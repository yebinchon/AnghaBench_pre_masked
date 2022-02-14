
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct ieee80211com {int ic_vaps; } ;
struct rum_softc {int sc_dev; struct ieee80211com sc_ic; } ;
struct ieee80211vap {int iv_opmode; TYPE_1__* iv_bss; } ;
struct TYPE_2__ {int ni_intval; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct ieee80211vap* FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct rum_softc*,int ) ;
 int FUNC_4 (struct rum_softc*,int) ;
 scalar_t__ FUNC_5 (struct rum_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_6(struct rum_softc *VAR_10)
{
 struct ieee80211com *VAR_11 = &VAR_10->sc_ic;
 struct ieee80211vap *VAR_12 = FUNC_1(&VAR_11->ic_vaps);
 uint32_t VAR_13;
 uint16_t VAR_14;

 if (VAR_12->iv_opmode != 128) {




  if (FUNC_5(VAR_10, VAR_8, 1 << 12 | 8) != 0)
   return VAR_1;
 }

 VAR_13 = FUNC_3(VAR_10, VAR_9) & 0xff000000;


 VAR_14 = VAR_12->iv_bss->ni_intval;
 VAR_13 |= VAR_14 * 16;
 VAR_13 |= VAR_7 | VAR_3;

 switch (VAR_12->iv_opmode) {
 case 128:




  VAR_13 |= FUNC_0(VAR_6);
  break;
 case 129:




  VAR_13 |= FUNC_0(VAR_5);
  VAR_13 |= VAR_2;
  break;
 case 130:

  VAR_13 |= FUNC_0(VAR_4);
  VAR_13 |= VAR_2;
  break;
 default:
  FUNC_2(VAR_10->sc_dev,
      "Enabling TSF failed. undefined opmode %d\n",
      VAR_12->iv_opmode);
  return VAR_0;
 }

 if (FUNC_5(VAR_10, VAR_9, VAR_13) != 0)
  return VAR_1;


 return (FUNC_4(VAR_10, VAR_14));
}
