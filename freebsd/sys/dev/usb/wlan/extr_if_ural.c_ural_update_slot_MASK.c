
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct ieee80211com {scalar_t__ ic_curmode; } ;
struct ural_softc {struct ieee80211com sc_ic; } ;


 int FUNC_0 (struct ieee80211com*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ural_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct ural_softc *VAR_5)
{
 struct ieee80211com *VAR_6 = &VAR_5->sc_ic;
 uint16_t VAR_7, VAR_8, VAR_9;

 VAR_7 = FUNC_0(VAR_6);





 if (VAR_6->ic_curmode == VAR_0) {
  VAR_8 = 16 - VAR_4;
  VAR_9 = 364;
 } else {
  VAR_8 = 10 - VAR_4;
  VAR_9 = 64;
 }

 FUNC_1(VAR_5, VAR_1, VAR_7);
 FUNC_1(VAR_5, VAR_2, VAR_8);
 FUNC_1(VAR_5, VAR_3, VAR_9);
}
