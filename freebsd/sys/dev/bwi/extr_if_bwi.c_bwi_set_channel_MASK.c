
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211com {struct ieee80211_channel* ic_curchan; struct bwi_softc* ic_softc; } ;
struct ieee80211_channel {int dummy; } ;
struct bwi_softc {int sc_rates; TYPE_1__* sc_cur_regwin; } ;
struct bwi_mac {int dummy; } ;
struct TYPE_2__ {scalar_t__ rw_type; } ;


 int FUNC_0 (struct bwi_softc*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct bwi_softc*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (struct bwi_mac*,int ,int ) ;
 int FUNC_4 (struct ieee80211com*,struct ieee80211_channel*) ;
 int FUNC_5 (struct ieee80211_channel*) ;

__attribute__((used)) static void
FUNC_6(struct ieee80211com *VAR_1)
{
 struct bwi_softc *VAR_2 = VAR_1->ic_softc;
 struct ieee80211_channel *VAR_3 = VAR_1->ic_curchan;
 struct bwi_mac *VAR_4;

 FUNC_0(VAR_2);
 FUNC_2(VAR_2->sc_cur_regwin->rw_type == VAR_0,
     ("current regwin type %d", VAR_2->sc_cur_regwin->rw_type));
 VAR_4 = (struct bwi_mac *)VAR_2->sc_cur_regwin;
 FUNC_3(VAR_4, FUNC_4(VAR_1, VAR_3), 0);

 VAR_2->sc_rates = FUNC_5(VAR_3);
 FUNC_1(VAR_2);
}
