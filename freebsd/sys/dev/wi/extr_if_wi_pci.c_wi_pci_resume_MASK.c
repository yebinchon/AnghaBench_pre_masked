
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {scalar_t__ ic_nrunning; } ;
struct wi_softc {scalar_t__ wi_bus_type; struct ieee80211com sc_ic; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct wi_softc*) ;
 int FUNC_1 (struct wi_softc*) ;
 struct wi_softc* FUNC_2 (int ) ;
 int FUNC_3 (struct wi_softc*) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_1)
{
 struct wi_softc *VAR_2 = FUNC_2(VAR_1);
 struct ieee80211com *VAR_3 = &VAR_2->sc_ic;

 FUNC_0(VAR_2);
 if (VAR_2->wi_bus_type != VAR_0) {
  FUNC_1(VAR_2);
  return (0);
 }
 if (VAR_3->ic_nrunning > 0)
  FUNC_3(VAR_2);
 FUNC_1(VAR_2);
 return (0);
}
