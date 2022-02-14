
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int dummy; } ;
struct malo_softc {scalar_t__ malo_running; struct ieee80211com malo_ic; } ;


 int FUNC_0 (struct malo_softc*) ;
 int FUNC_1 (struct malo_softc*) ;
 int FUNC_2 (struct ieee80211com*) ;
 int FUNC_3 (struct malo_softc*) ;

__attribute__((used)) static void
FUNC_4(void *VAR_0)
{
 struct malo_softc *VAR_1 = (struct malo_softc *) VAR_0;
 struct ieee80211com *VAR_2 = &VAR_1->malo_ic;

 FUNC_0(VAR_1);
 FUNC_3(VAR_1);
 FUNC_1(VAR_1);

 if (VAR_1->malo_running)
  FUNC_2(VAR_2);
}
