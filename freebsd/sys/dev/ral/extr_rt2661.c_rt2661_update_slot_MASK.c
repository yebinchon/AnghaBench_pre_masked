
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct rt2661_softc {int dummy; } ;
struct ieee80211com {struct rt2661_softc* ic_softc; } ;


 int FUNC_0 (struct ieee80211com*) ;
 int FUNC_1 (struct rt2661_softc*,int ) ;
 int FUNC_2 (struct rt2661_softc*,int ,int) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(struct ieee80211com *VAR_1)
{
 struct rt2661_softc *VAR_2 = VAR_1->ic_softc;
 uint8_t VAR_3;
 uint32_t VAR_4;

 VAR_3 = FUNC_0(VAR_1);

 VAR_4 = FUNC_1(VAR_2, VAR_0);
 VAR_4 = (VAR_4 & ~0xff) | VAR_3;
 FUNC_2(VAR_2, VAR_0, VAR_4);
}
