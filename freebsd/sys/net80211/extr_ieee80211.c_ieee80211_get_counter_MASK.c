
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct ifnet {struct ieee80211vap* if_softc; } ;
struct ieee80211vap {struct ieee80211com* iv_ic; } ;
struct ieee80211com {int ic_ierrors; int ic_oerrors; } ;
typedef int ift_counter ;




 int FUNC_0 (int ) ;
 int FUNC_1 (struct ifnet*,int) ;

__attribute__((used)) static uint64_t
FUNC_2(struct ifnet *VAR_0, ift_counter VAR_1)
{
 struct ieee80211vap *VAR_2 = VAR_0->if_softc;
 struct ieee80211com *VAR_3 = VAR_2->iv_ic;
 uint64_t VAR_4;

 VAR_4 = FUNC_1(VAR_0, VAR_1);
 switch (VAR_1) {
 case 128:
  VAR_4 += FUNC_0(VAR_3->ic_oerrors);
  break;
 case 129:
  VAR_4 += FUNC_0(VAR_3->ic_ierrors);
  break;
 default:
  break;
 }

 return (VAR_4);
}
