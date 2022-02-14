
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wtap_softc {int up; } ;
struct ieee80211com {scalar_t__ ic_nrunning; struct wtap_softc* ic_softc; } ;


 int FUNC_0 (struct ieee80211com*) ;

__attribute__((used)) static void
FUNC_1(struct ieee80211com *VAR_0)
{
 struct wtap_softc *VAR_1 = VAR_0->ic_softc;

 if (VAR_0->ic_nrunning > 0) {
  VAR_1->up = 1;
  FUNC_0(VAR_0);
 } else
  VAR_1->up = 0;
}
