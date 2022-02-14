
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ieee80211com {TYPE_1__* ic_curchan; struct bwn_softc* ic_softc; } ;
struct bwn_softc {scalar_t__ sc_rf_enabled; int sc_dev; struct bwn_mac* sc_curmac; } ;
struct bwn_phy {int chan; int txpower; scalar_t__ rf_on; int (* set_antenna ) (struct bwn_mac*,int ) ;} ;
struct bwn_mac {int mac_flags; struct bwn_phy mac_phy; } ;
struct TYPE_3__ {scalar_t__ ic_maxpower; } ;


 int VAR_0 ;
 int FUNC_0 (struct bwn_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct bwn_softc*) ;
 int FUNC_2 (struct bwn_mac*) ;
 int FUNC_3 (struct bwn_mac*) ;
 int FUNC_4 (struct bwn_mac*,int) ;
 int FUNC_5 (struct bwn_mac*) ;
 int FUNC_6 (struct bwn_mac*) ;
 int FUNC_7 (struct bwn_mac*,int ) ;
 int FUNC_8 (struct bwn_mac*,int ,int ) ;
 int FUNC_9 (struct bwn_softc*,TYPE_1__*) ;
 int FUNC_10 (struct bwn_mac*,int) ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (struct ieee80211com*,TYPE_1__*) ;
 int FUNC_13 (struct bwn_mac*,int ) ;

__attribute__((used)) static void
FUNC_14(struct ieee80211com *VAR_6)
{
 struct bwn_softc *VAR_7 = VAR_6->ic_softc;
 struct bwn_mac *VAR_8 = VAR_7->sc_curmac;
 struct bwn_phy *VAR_9 = &VAR_8->mac_phy;
 int VAR_10, VAR_11;

 FUNC_0(VAR_7);

 VAR_11 = FUNC_9(VAR_7, VAR_6->ic_curchan);
 if (VAR_11)
  goto fail;
 FUNC_3(VAR_8);
 FUNC_8(VAR_8, VAR_3, VAR_2);
 VAR_10 = FUNC_12(VAR_6, VAR_6->ic_curchan);
 if (VAR_10 != VAR_9->chan)
  FUNC_10(VAR_8, VAR_10);


 if (VAR_6->ic_curchan->ic_maxpower != 0 &&
     VAR_6->ic_curchan->ic_maxpower != VAR_9->txpower) {
  VAR_9->txpower = VAR_6->ic_curchan->ic_maxpower / 2;
  FUNC_4(VAR_8, VAR_4 |
      VAR_5);
 }

 FUNC_7(VAR_8, VAR_0);
 if (VAR_9->set_antenna)
  VAR_9->set_antenna(VAR_8, VAR_0);

 if (VAR_7->sc_rf_enabled != VAR_9->rf_on) {
  if (VAR_7->sc_rf_enabled) {
   FUNC_6(VAR_8);
   if (!(VAR_8->mac_flags & VAR_1))
    FUNC_11(VAR_7->sc_dev,
        "please turn on the RF switch\n");
  } else
   FUNC_5(VAR_8);
 }

 FUNC_2(VAR_8);

fail:
 FUNC_1(VAR_7);
}
