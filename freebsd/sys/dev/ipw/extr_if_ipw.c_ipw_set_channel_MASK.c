
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipw_softc {int dummy; } ;
struct ieee80211com {scalar_t__ ic_opmode; int ic_curchan; struct ipw_softc* ic_softc; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ipw_softc*) ;
 int FUNC_1 (struct ipw_softc*) ;
 int FUNC_2 (struct ipw_softc*) ;
 int FUNC_3 (struct ipw_softc*) ;
 int FUNC_4 (struct ipw_softc*,int ) ;

__attribute__((used)) static void
FUNC_5(struct ieee80211com *VAR_1)
{
 struct ipw_softc *VAR_2 = VAR_1->ic_softc;

 FUNC_0(VAR_2);
 if (VAR_1->ic_opmode == VAR_0) {
  FUNC_2(VAR_2);
  FUNC_4(VAR_2, VAR_1->ic_curchan);
  FUNC_3(VAR_2);
 }
 FUNC_1(VAR_2);
}
