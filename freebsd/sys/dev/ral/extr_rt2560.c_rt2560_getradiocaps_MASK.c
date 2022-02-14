
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct rt2560_softc {scalar_t__ rf_rev; } ;
struct ieee80211com {struct rt2560_softc* ic_softc; } ;
struct ieee80211_channel {int dummy; } ;
typedef int bands ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct ieee80211_channel*,int,int*,int ,int ,int *,int ) ;
 int FUNC_1 (struct ieee80211_channel*,int,int*,int *,int ) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static void
FUNC_5(struct ieee80211com *VAR_6,
    int VAR_7, int *VAR_8, struct ieee80211_channel VAR_9[])
{
 struct rt2560_softc *VAR_10 = VAR_6->ic_softc;
 uint8_t VAR_11[VAR_3];

 FUNC_2(VAR_11, 0, sizeof(VAR_11));
 FUNC_4(VAR_11, VAR_1);
 FUNC_4(VAR_11, VAR_2);
 FUNC_1(VAR_9, VAR_7, VAR_8, VAR_11, 0);

 if (VAR_10->rf_rev == VAR_4) {
  FUNC_4(VAR_11, VAR_0);
  FUNC_0(VAR_9, VAR_7, VAR_8,
      VAR_5, FUNC_3(VAR_5), VAR_11, 0);
 }
}
