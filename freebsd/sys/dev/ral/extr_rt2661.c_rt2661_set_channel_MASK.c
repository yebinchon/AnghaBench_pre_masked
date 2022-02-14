
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt2661_softc {int dummy; } ;
struct ieee80211com {int ic_curchan; struct rt2661_softc* ic_softc; } ;


 int FUNC_0 (struct rt2661_softc*) ;
 int FUNC_1 (struct rt2661_softc*) ;
 int FUNC_2 (struct rt2661_softc*,int ) ;

__attribute__((used)) static void
FUNC_3(struct ieee80211com *VAR_0)
{
 struct rt2661_softc *VAR_1 = VAR_0->ic_softc;

 FUNC_0(VAR_1);
 FUNC_2(VAR_1, VAR_0->ic_curchan);
 FUNC_1(VAR_1);

}
