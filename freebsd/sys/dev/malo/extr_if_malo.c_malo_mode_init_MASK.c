
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {scalar_t__ ic_promisc; } ;
struct malo_softc {struct malo_hal* malo_mh; struct ieee80211com malo_ic; } ;
struct malo_hal {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct malo_hal*,int) ;
 int FUNC_1 (struct malo_softc*) ;

__attribute__((used)) static int
FUNC_2(struct malo_softc *VAR_1)
{
 struct ieee80211com *VAR_2 = &VAR_1->malo_ic;
 struct malo_hal *VAR_3 = VAR_1->malo_mh;

 FUNC_0(VAR_3, VAR_2->ic_promisc > 0);
 FUNC_1(VAR_1);

 return VAR_0;
}
