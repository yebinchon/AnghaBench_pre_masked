
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct run_softc {scalar_t__ rf_rev; } ;
struct ieee80211com {struct run_softc* ic_softc; } ;
struct ieee80211_channel {int dummy; } ;
typedef int bands ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct ieee80211_channel*,int,int*,int ,int ,int *,int ) ;
 int FUNC_1 (struct ieee80211_channel*,int,int*,int *,int ) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int ) ;
 int VAR_9 ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static void
FUNC_5(struct ieee80211com *VAR_10,
    int VAR_11, int *VAR_12, struct ieee80211_channel VAR_13[])
{
 struct run_softc *VAR_14 = VAR_10->ic_softc;
 uint8_t VAR_15[VAR_3];

 FUNC_2(VAR_15, 0, sizeof(VAR_15));
 FUNC_4(VAR_15, VAR_1);
 FUNC_4(VAR_15, VAR_2);
 FUNC_1(VAR_13, VAR_11, VAR_12, VAR_15, 0);

 if (VAR_14->rf_rev == VAR_4 || VAR_14->rf_rev == VAR_5 ||
     VAR_14->rf_rev == VAR_6 || VAR_14->rf_rev == VAR_7 ||
     VAR_14->rf_rev == VAR_8) {
  FUNC_4(VAR_15, VAR_0);
  FUNC_0(VAR_13, VAR_11, VAR_12,
      VAR_9, FUNC_3(VAR_9), VAR_15, 0);
 }
}
