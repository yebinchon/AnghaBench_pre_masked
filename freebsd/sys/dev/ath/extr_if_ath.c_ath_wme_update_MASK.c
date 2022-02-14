
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {struct ath_softc* ic_softc; } ;
struct ath_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ath_softc*,int ) ;

int
FUNC_1(struct ieee80211com *VAR_5)
{
 struct ath_softc *VAR_6 = VAR_5->ic_softc;

 return !FUNC_0(VAR_6, VAR_1) ||
     !FUNC_0(VAR_6, VAR_2) ||
     !FUNC_0(VAR_6, VAR_3) ||
     !FUNC_0(VAR_6, VAR_4) ? VAR_0 : 0;
}
