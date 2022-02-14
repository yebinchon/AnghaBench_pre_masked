
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtwn_vap {int id; } ;
struct rtwn_softc {int dummy; } ;
struct ieee80211vap {int dummy; } ;


 int FUNC_0 (struct rtwn_softc*) ;
 struct rtwn_vap* FUNC_1 (struct ieee80211vap*) ;
 int FUNC_2 (struct rtwn_softc*,int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct rtwn_softc *VAR_0, struct ieee80211vap *VAR_1)
{
 struct rtwn_vap *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_0);

 FUNC_2(VAR_0, VAR_2->id, 0);
}
