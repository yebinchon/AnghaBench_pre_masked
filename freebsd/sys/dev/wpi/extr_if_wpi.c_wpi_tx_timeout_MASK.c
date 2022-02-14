
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int dummy; } ;
struct wpi_softc {struct ieee80211com sc_ic; } ;


 int FUNC_0 (struct ieee80211com*,char*) ;
 int FUNC_1 (struct ieee80211com*) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0)
{
 struct wpi_softc *VAR_1 = VAR_0;
 struct ieee80211com *VAR_2 = &VAR_1->sc_ic;

 FUNC_0(VAR_2, "device timeout\n");
 FUNC_1(VAR_2);
}
