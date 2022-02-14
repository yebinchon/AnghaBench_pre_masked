
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {struct ieee80211vap* if_softc; } ;
struct ieee80211vap {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ifnet*) ;
 int FUNC_1 (struct ieee80211vap*) ;

__attribute__((used)) static int
FUNC_2(struct ifnet *VAR_1)
{
 struct ieee80211vap *VAR_2 = VAR_1->if_softc;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1);

 if (VAR_3 == VAR_0) {
  FUNC_1(VAR_2);
  VAR_3 = 0;
 }
 return VAR_3;
}
