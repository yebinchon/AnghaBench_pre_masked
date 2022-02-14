
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct rtwn_softc {int ntxchains; } ;
struct ieee80211_channel {int dummy; } ;
typedef int power ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (struct rtwn_softc*,int,int *) ;
 int FUNC_2 (struct rtwn_softc*,int,struct ieee80211_channel*,int *) ;

__attribute__((used)) static void
FUNC_3(struct rtwn_softc *VAR_1, struct ieee80211_channel *VAR_2)
{
 uint8_t VAR_3[VAR_0];
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1->ntxchains; VAR_4++) {
  FUNC_0(VAR_3, 0, sizeof(VAR_3));

  FUNC_2(VAR_1, VAR_4, VAR_2, VAR_3);

  FUNC_1(VAR_1, VAR_4, VAR_3);
 }
}
