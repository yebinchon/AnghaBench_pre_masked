
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ieee80211com {int dummy; } ;
struct iwn_softc {int int_mask; int sc_dev; struct ieee80211com sc_ic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct iwn_softc*) ;
 int FUNC_1 (struct iwn_softc*,int ) ;
 int FUNC_2 (struct iwn_softc*) ;
 int FUNC_3 (struct iwn_softc*,int ,int) ;
 int FUNC_4 (int ,char*,char*) ;
 int FUNC_5 (struct ieee80211com*) ;
 int FUNC_6 (struct ieee80211com*) ;

__attribute__((used)) static void
FUNC_7(void *VAR_4, int VAR_5)
{
 struct iwn_softc *VAR_6 = VAR_4;
 struct ieee80211com *VAR_7 = &VAR_6->sc_ic;
 uint32_t VAR_8;

 FUNC_0(VAR_6);
 VAR_8 = FUNC_1(VAR_6, VAR_0);
 FUNC_2(VAR_6);

 FUNC_4(VAR_6->sc_dev, "RF switch: radio %s\n",
     (VAR_8 & VAR_1) ? "enabled" : "disabled");
 if (!(VAR_8 & VAR_1)) {
  FUNC_6(VAR_7);


  FUNC_0(VAR_6);
  FUNC_3(VAR_6, VAR_2, 0xffffffff);
  FUNC_3(VAR_6, VAR_3, VAR_6->int_mask);
  FUNC_2(VAR_6);
 } else
  FUNC_5(VAR_7);
}
