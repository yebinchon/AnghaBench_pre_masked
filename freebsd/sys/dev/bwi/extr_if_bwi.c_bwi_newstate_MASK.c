
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ieee80211vap {int iv_state; scalar_t__ iv_opmode; TYPE_1__* iv_bss; struct ieee80211com* iv_ic; } ;
struct ieee80211com {scalar_t__ ic_opmode; struct bwi_softc* ic_softc; } ;
struct bwi_vap {int (* bv_newstate ) (struct ieee80211vap*,int,int) ;} ;
struct bwi_softc {int sc_flags; int sc_calib_ch; int sc_txpwrcb_type; TYPE_2__* sc_cur_regwin; } ;
struct bwi_mac {int dummy; } ;
typedef enum ieee80211_state { ____Placeholder_ieee80211_state } ieee80211_state ;
struct TYPE_4__ {scalar_t__ rw_type; } ;
struct TYPE_3__ {int ni_bssid; } ;


 int VAR_0 ;
 int FUNC_0 (struct bwi_softc*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct bwi_softc*) ;
 struct bwi_vap* FUNC_2 (struct ieee80211vap*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int,char*) ;
 int VAR_9 ;
 int FUNC_4 (struct bwi_softc*,int) ;
 int FUNC_5 (struct bwi_mac*,int ) ;
 int FUNC_6 (struct bwi_softc*,int ) ;
 int VAR_10 ;
 int FUNC_7 (int *,int ,int ,struct bwi_softc*) ;
 int FUNC_8 (int *) ;
 int VAR_11 ;
 int FUNC_9 (struct ieee80211vap*,int,int) ;

__attribute__((used)) static int
FUNC_10(struct ieee80211vap *VAR_12, enum ieee80211_state VAR_13, int VAR_14)
{
 struct bwi_vap *VAR_15 = FUNC_2(VAR_12);
 struct ieee80211com *VAR_16= VAR_12->iv_ic;
 struct bwi_softc *VAR_17 = VAR_16->ic_softc;
 enum ieee80211_state VAR_18 = VAR_12->iv_state;
 struct bwi_mac *VAR_19;
 int VAR_20;

 FUNC_0(VAR_17);

 FUNC_8(&VAR_17->sc_calib_ch);

 if (VAR_13 == VAR_7)
  VAR_17->sc_txpwrcb_type = VAR_4;

 FUNC_4(VAR_17, VAR_13);

 VAR_20 = VAR_15->bv_newstate(VAR_12, VAR_13, VAR_14);
 if (VAR_20 != 0)
  goto back;




 if (VAR_12->iv_opmode == VAR_6) {
  if (VAR_18 == VAR_8 && VAR_13 != VAR_8) {





   if (VAR_16->ic_opmode == VAR_6 &&
       !(VAR_17->sc_flags & VAR_0))
    FUNC_6(VAR_17, VAR_10);
  }
 }

 if (VAR_12->iv_opmode == VAR_5) {

 } else if (VAR_13 == VAR_8) {
  FUNC_6(VAR_17, VAR_12->iv_bss->ni_bssid);

  FUNC_3(VAR_17->sc_cur_regwin->rw_type == VAR_1,
      ("current regwin type %d", VAR_17->sc_cur_regwin->rw_type));
  VAR_19 = (struct bwi_mac *)VAR_17->sc_cur_regwin;


  FUNC_5(VAR_19, VAR_4);



  VAR_17->sc_txpwrcb_type = VAR_2;


  FUNC_7(&VAR_17->sc_calib_ch, VAR_11, VAR_9, VAR_17);
 }
back:
 FUNC_1(VAR_17);

 return VAR_20;
}
