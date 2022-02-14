
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct rtwn_softc {int ntxchains; int sc_debug; } ;
struct ieee80211_channel {int dummy; } ;
typedef int power ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int*,int ,int) ;
 int FUNC_2 (char*,int,...) ;
 int FUNC_3 (struct rtwn_softc*,int,int*) ;
 int FUNC_4 (struct rtwn_softc*,int,struct ieee80211_channel*,int*) ;

__attribute__((used)) static void
FUNC_5(struct rtwn_softc *VAR_3, struct ieee80211_channel *VAR_4)
{
 uint8_t VAR_5[VAR_2];
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_3->ntxchains; VAR_6++) {
  FUNC_1(VAR_5, 0, sizeof(VAR_5));

  FUNC_4(VAR_3, VAR_6, VAR_4, VAR_5);
  FUNC_3(VAR_3, VAR_6, VAR_5);
 }
}
