
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtwn_softc {scalar_t__ bcn_vaps; } ;
struct ieee80211com {struct rtwn_softc* ic_softc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtwn_softc*) ;
 int FUNC_1 (struct rtwn_softc*) ;
 int FUNC_2 (struct rtwn_softc*,int) ;
 int FUNC_3 (struct rtwn_softc*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct ieee80211com *VAR_2)
{
 struct rtwn_softc *VAR_3 = VAR_2->ic_softc;

 FUNC_0(VAR_3);

 FUNC_3(VAR_3, VAR_0, 0, VAR_1);

 if (VAR_3->bcn_vaps == 0)
  FUNC_2(VAR_3, 1);
 FUNC_1(VAR_3);
}
