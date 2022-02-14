
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int ic_flags; int ic_regdomain; int ic_curchan; } ;
struct mwl_softc {struct mwl_hal* sc_mh; int sc_txantenna; int sc_rxantenna; struct ieee80211com sc_ic; } ;
struct mwl_hal {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mwl_softc*,int ) ;
 int FUNC_1 (struct mwl_hal*,int,int) ;
 int FUNC_2 (struct mwl_hal*,int ,int ) ;
 int FUNC_3 (struct mwl_hal*,int ) ;
 int FUNC_4 (struct mwl_hal*,int) ;
 int FUNC_5 (struct mwl_hal*,int,int ) ;
 int FUNC_6 (struct mwl_hal*,int ) ;
 int FUNC_7 (struct mwl_hal*,int ) ;
 int FUNC_8 (struct mwl_hal*,int) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int
FUNC_10(struct mwl_softc *VAR_5)
{
 struct ieee80211com *VAR_6 = &VAR_5->sc_ic;
 struct mwl_hal *VAR_7 = VAR_5->sc_mh;

 FUNC_2(VAR_7, VAR_2, VAR_5->sc_rxantenna);
 FUNC_2(VAR_7, VAR_3, VAR_5->sc_txantenna);
 FUNC_5(VAR_7, 1, VAR_4);
 FUNC_8(VAR_5->sc_mh, (VAR_6->ic_flags & VAR_1) != 0);
 FUNC_0(VAR_5, VAR_6->ic_curchan);

 FUNC_6(VAR_7, 0);
 FUNC_4(VAR_7,
     (VAR_6->ic_flags & VAR_0) != 0);

 FUNC_7(VAR_7, FUNC_9(&VAR_6->ic_regdomain));

 FUNC_1(VAR_7, 1, 80);
 FUNC_3(VAR_7, 0);

 return 1;
}
