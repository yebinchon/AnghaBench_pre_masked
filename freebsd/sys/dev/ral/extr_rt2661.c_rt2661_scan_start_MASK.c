
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rt2661_softc {int dummy; } ;
struct ieee80211com {struct rt2661_softc* ic_softc; } ;


 int FUNC_0 (struct rt2661_softc*,int ) ;
 int FUNC_1 (struct rt2661_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct rt2661_softc*,int ) ;

__attribute__((used)) static void
FUNC_3(struct ieee80211com *VAR_2)
{
 struct rt2661_softc *VAR_3 = VAR_2->ic_softc;
 uint32_t VAR_4;


 VAR_4 = FUNC_0(VAR_3, VAR_0);
 FUNC_1(VAR_3, VAR_0, VAR_4 & ~0xffffff);
 FUNC_2(VAR_3, VAR_1);
}
