
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ieee80211com {int ic_bsschan; } ;
struct rt2661_softc {struct ieee80211com sc_ic; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct rt2661_softc*,int ) ;
 int FUNC_2 (struct rt2661_softc*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_3(struct rt2661_softc *VAR_3)
{
 struct ieee80211com *VAR_4 = &VAR_3->sc_ic;
 uint32_t VAR_5;

 VAR_5 = FUNC_1(VAR_3, VAR_2);

 VAR_5 &= ~VAR_0;
 if (!FUNC_0(VAR_4->ic_bsschan))
  VAR_5 |= VAR_0;
 VAR_5 |= VAR_1;

 FUNC_2(VAR_3, VAR_2, VAR_5);
}
