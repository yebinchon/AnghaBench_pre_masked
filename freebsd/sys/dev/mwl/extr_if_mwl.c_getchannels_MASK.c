
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct mwl_softc {int sc_mh; } ;
struct ieee80211_channel {int dummy; } ;
typedef int bands ;
typedef int MWL_HAL_CHANNELINFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct ieee80211_channel*,int,int*,int const*,int *) ;
 int FUNC_1 (struct ieee80211_channel*,int,int*,int const*,int ) ;
 int FUNC_2 (int *,int ,int) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int const**) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static void
FUNC_5(struct mwl_softc *VAR_12, int VAR_13, int *VAR_14,
 struct ieee80211_channel VAR_15[])
{
 const MWL_HAL_CHANNELINFO *VAR_16;
 uint8_t VAR_17[VAR_7];







 *VAR_14 = 0;
 if (FUNC_3(VAR_12->sc_mh,
     VAR_10, VAR_8, &VAR_16) == 0) {
  FUNC_2(VAR_17, 0, sizeof(VAR_17));
  FUNC_4(VAR_17, VAR_3);
  FUNC_4(VAR_17, VAR_4);
  FUNC_4(VAR_17, VAR_6);
  FUNC_0(VAR_15, VAR_13, VAR_14, VAR_16, VAR_17);
 }
 if (FUNC_3(VAR_12->sc_mh,
     VAR_11, VAR_8, &VAR_16) == 0) {
  FUNC_2(VAR_17, 0, sizeof(VAR_17));
  FUNC_4(VAR_17, VAR_2);
  FUNC_4(VAR_17, VAR_5);
  FUNC_0(VAR_15, VAR_13, VAR_14, VAR_16, VAR_17);
 }
 if (FUNC_3(VAR_12->sc_mh,
     VAR_10, VAR_9, &VAR_16) == 0)
  FUNC_1(VAR_15, VAR_13, VAR_14, VAR_16, VAR_1);
 if (FUNC_3(VAR_12->sc_mh,
     VAR_11, VAR_9, &VAR_16) == 0)
  FUNC_1(VAR_15, VAR_13, VAR_14, VAR_16, VAR_0);
}
