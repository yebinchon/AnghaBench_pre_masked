
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtwn_softc {scalar_t__ bcn_vaps; scalar_t__ vaps_running; } ;
struct ieee80211com {scalar_t__ ic_promisc; struct rtwn_softc* ic_softc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rtwn_softc*) ;
 int FUNC_1 (struct rtwn_softc*) ;
 int FUNC_2 (struct rtwn_softc*) ;
 int FUNC_3 (struct rtwn_softc*,int ,int) ;
 int FUNC_4 (struct rtwn_softc*,int ) ;
 int FUNC_5 (struct rtwn_softc*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_6(struct ieee80211com *VAR_3)
{
 struct rtwn_softc *VAR_4 = VAR_3->ic_softc;

 FUNC_0(VAR_4);

 if (VAR_3->ic_promisc == 0 && VAR_4->bcn_vaps == 0)
  FUNC_4(VAR_4, 0);


 FUNC_3(VAR_4, VAR_2, (VAR_4->vaps_running != 0));


 FUNC_2(VAR_4);


 FUNC_5(VAR_4, VAR_0, VAR_1, 0);
 FUNC_1(VAR_4);
}
