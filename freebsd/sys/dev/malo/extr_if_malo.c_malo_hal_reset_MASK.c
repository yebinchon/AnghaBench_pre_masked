
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int ic_curchan; } ;
struct malo_softc {int malo_txantenna; int malo_rxantenna; struct malo_hal* malo_mh; struct ieee80211com malo_ic; } ;
struct malo_hal {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct malo_softc*,int ) ;
 int FUNC_1 (struct malo_softc*) ;
 int FUNC_2 (struct malo_hal*,int ,int ) ;
 int FUNC_3 (struct malo_hal*,int,int ) ;

__attribute__((used)) static int
FUNC_4(struct malo_softc *VAR_3)
{
 static int VAR_4 = 0;
 struct ieee80211com *VAR_5 = &VAR_3->malo_ic;
 struct malo_hal *VAR_6 = VAR_3->malo_mh;

 if (VAR_4 == 0) {





  FUNC_1(VAR_3);
  VAR_4 = 1;
 }

 FUNC_2(VAR_6, VAR_0, VAR_3->malo_rxantenna);
 FUNC_2(VAR_6, VAR_1, VAR_3->malo_txantenna);
 FUNC_3(VAR_6, 1, VAR_2);
 FUNC_0(VAR_3, VAR_5->ic_curchan);



 return 1;
}
