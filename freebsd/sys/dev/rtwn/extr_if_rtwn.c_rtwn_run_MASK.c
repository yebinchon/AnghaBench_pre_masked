
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct rtwn_vap {scalar_t__ id; } ;
struct rtwn_softc {scalar_t__ vaps_running; scalar_t__ monvaps_running; int sc_calib_to; int thermal_meter; int thcal_temp; int sc_flags; int sc_dev; int sc_pwrmode_init; } ;
struct ieee80211vap {int iv_opmode; int iv_bss; struct ieee80211com* iv_ic; } ;
struct ieee80211com {scalar_t__ ic_bsschan; int ic_caps; } ;
struct ieee80211_node {scalar_t__ ni_chan; int ni_intval; int ni_bssid; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (struct ieee80211_node*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_3 (struct rtwn_softc*) ;
 int VAR_15 ;
 int VAR_16 ;
 struct rtwn_vap* FUNC_4 (struct ieee80211vap*) ;
 int FUNC_5 (int *,int,int ,struct rtwn_softc*) ;
 int FUNC_6 (int ,char*,int) ;
 int VAR_17 ;
 int FUNC_7 (struct ieee80211_node*) ;
 struct ieee80211_node* FUNC_8 (int ) ;
 int FUNC_9 (struct rtwn_softc*) ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_10 (struct rtwn_softc*) ;
 int FUNC_11 (struct rtwn_softc*,int ,scalar_t__) ;
 int FUNC_12 (struct rtwn_softc*,int ,int) ;
 int FUNC_13 (struct rtwn_softc*,int ,scalar_t__) ;
 int FUNC_14 (struct rtwn_softc*,struct ieee80211_node*) ;
 int FUNC_15 (struct rtwn_softc*,struct ieee80211vap*) ;
 int FUNC_16 (struct rtwn_softc*,struct ieee80211vap*) ;
 int FUNC_17 (struct rtwn_softc*,scalar_t__,int) ;
 int FUNC_18 (struct rtwn_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_19(struct rtwn_softc *VAR_20, struct ieee80211vap *VAR_21)
{
 struct ieee80211com *VAR_22 = VAR_21->iv_ic;
 struct rtwn_vap *VAR_23 = FUNC_4(VAR_21);
 struct ieee80211_node *VAR_24;
 uint8_t VAR_25;
 int VAR_26;

 FUNC_3(VAR_20);

 VAR_26 = 0;
 VAR_24 = FUNC_8(VAR_21->iv_bss);

 if (VAR_22->ic_bsschan == VAR_1 ||
     VAR_24->ni_chan == VAR_1) {
  VAR_26 = VAR_0;
  goto fail;
 }

 switch (VAR_21->iv_opmode) {
 case 128:
  VAR_25 = VAR_7;
  break;
 case 129:
  VAR_25 = VAR_5;
  break;
 case 130:
  VAR_25 = VAR_6;
  break;
 default:
  FUNC_1(0, ("undefined opmode %d\n", VAR_21->iv_opmode));
  VAR_26 = VAR_0;
  goto fail;
 }


 FUNC_13(VAR_20, VAR_25, VAR_23->id);



 FUNC_18(VAR_20, VAR_3,
     0xc000 | FUNC_0(VAR_24));


 FUNC_11(VAR_20, VAR_24->ni_bssid, VAR_23->id);


 FUNC_18(VAR_20, FUNC_2(VAR_23->id), VAR_24->ni_intval);

 if (VAR_20->vaps_running == VAR_20->monvaps_running) {

  FUNC_18(VAR_20, VAR_9, 0xffff);


  FUNC_17(VAR_20, VAR_14, 0);
 }




 if ((VAR_22->ic_caps & VAR_2) != 0 &&
     VAR_21->iv_opmode == 128 && VAR_23->id == 0) {
  VAR_26 = FUNC_16(VAR_20, VAR_21);
  if (VAR_26 != 0)
   goto fail;






  FUNC_5(&VAR_20->sc_pwrmode_init, 5*VAR_17,
      VAR_19, VAR_20);
 }



 FUNC_15(VAR_20, VAR_21);

 if (VAR_21->iv_opmode == 130 ||
     VAR_21->iv_opmode == 129) {
  VAR_26 = FUNC_14(VAR_20, VAR_24);
  if (VAR_26 != 0) {
   FUNC_6(VAR_20->sc_dev,
       "unable to push beacon into the chip, "
       "error %d\n", VAR_26);
   goto fail;
  }
 }


 FUNC_10(VAR_20);


 FUNC_9(VAR_20);
 if (VAR_20->vaps_running == VAR_20->monvaps_running) {

  VAR_20->sc_flags &= ~VAR_16;
  VAR_20->thcal_temp = VAR_20->thermal_meter;


  FUNC_5(&VAR_20->sc_calib_to, 2*VAR_17, VAR_18,
      VAR_20);

  if (VAR_20->vaps_running == 0) {

   FUNC_12(VAR_20, VAR_15, 1);
  }
 }

fail:
 FUNC_7(VAR_24);

 return (VAR_26);
}
