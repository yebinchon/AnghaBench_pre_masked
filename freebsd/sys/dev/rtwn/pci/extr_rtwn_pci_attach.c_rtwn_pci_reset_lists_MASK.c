
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtwn_softc {scalar_t__ qfullmsk; } ;
struct ieee80211vap {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct rtwn_softc*) ;
 int FUNC_1 (struct rtwn_softc*,struct ieee80211vap*,int) ;

__attribute__((used)) static void
FUNC_2(struct rtwn_softc *VAR_1, struct ieee80211vap *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_1(VAR_1, VAR_2, VAR_3);

 if (VAR_2 == ((void*)0)) {
  VAR_1->qfullmsk = 0;
  FUNC_0(VAR_1);
 }
}
