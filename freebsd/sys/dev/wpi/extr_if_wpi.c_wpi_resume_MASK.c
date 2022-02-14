
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int dummy; } ;
struct wpi_softc {struct ieee80211com sc_ic; } ;
typedef int device_t ;


 struct wpi_softc* FUNC_0 (int ) ;
 int FUNC_1 (struct ieee80211com*) ;
 int FUNC_2 (int ,int,int ,int) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_0)
{
 struct wpi_softc *VAR_1 = FUNC_0(VAR_0);
 struct ieee80211com *VAR_2 = &VAR_1->sc_ic;


 FUNC_2(VAR_0, 0x41, 0, 1);

 FUNC_1(VAR_2);
 return 0;
}
