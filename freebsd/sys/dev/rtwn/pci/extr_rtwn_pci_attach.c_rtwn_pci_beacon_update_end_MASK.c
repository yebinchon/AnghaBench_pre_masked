
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtwn_vap {scalar_t__ curr_mode; int id; } ;
struct rtwn_softc {int dummy; } ;
struct ieee80211vap {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct rtwn_softc*) ;
 struct rtwn_vap* FUNC_1 (struct ieee80211vap*) ;
 int FUNC_2 (struct rtwn_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct rtwn_softc *VAR_1, struct ieee80211vap *VAR_2)
{
 struct rtwn_vap *VAR_3 = FUNC_1(VAR_2);

 FUNC_0(VAR_1);

 if (VAR_3->curr_mode != VAR_0)
  FUNC_2(VAR_1, VAR_3->id, 1);
}
