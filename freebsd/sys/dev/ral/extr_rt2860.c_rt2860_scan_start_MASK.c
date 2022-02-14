
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rt2860_softc {int dummy; } ;
struct ieee80211com {struct rt2860_softc* ic_softc; } ;


 int FUNC_0 (struct rt2860_softc*,int ) ;
 int FUNC_1 (struct rt2860_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct rt2860_softc*,int ) ;

__attribute__((used)) static void
FUNC_3(struct ieee80211com *VAR_4)
{
 struct rt2860_softc *VAR_5 = VAR_4->ic_softc;
 uint32_t VAR_6;

 VAR_6 = FUNC_0(VAR_5, VAR_0);
 FUNC_1(VAR_5, VAR_0,
     VAR_6 & ~(VAR_1 | VAR_3 |
     VAR_2));
 FUNC_2(VAR_5, 0);
}
