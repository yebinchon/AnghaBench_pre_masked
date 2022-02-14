
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct iwn_softc {int dummy; } ;
struct ieee80211vap {struct ieee80211com* iv_ic; } ;
struct ieee80211com {int ic_flags; int ic_rt; int ic_curchan; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int ,int) ;

__attribute__((used)) static int
FUNC_2(struct iwn_softc *VAR_3,
    struct ieee80211vap *VAR_4, uint8_t VAR_5)
{
 struct ieee80211com *VAR_6 = VAR_4->iv_ic;





 if (! FUNC_0(VAR_6->ic_curchan)) {
  return (0);
 }




 if ((VAR_6->ic_flags & VAR_0) == 0)
  return (0);





 if (VAR_5 & VAR_1) {
  return (0);
 }





 if (FUNC_1(VAR_6->ic_rt, VAR_5) == VAR_2)
  return (0);




 return (1);
}
