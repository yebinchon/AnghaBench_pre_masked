
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct ieee80211_channel {int ic_freq; int ic_ieee; } ;
typedef int int8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ieee80211_channel*,int,int*,int ,int ,int ,int) ;
 struct ieee80211_channel* FUNC_1 (struct ieee80211_channel*,int,scalar_t__,int) ;
 scalar_t__ FUNC_2 (int ,int) ;

int
FUNC_3(struct ieee80211_channel VAR_6[], int VAR_7,
    int *VAR_8, uint8_t VAR_9, int8_t VAR_10, uint32_t VAR_11)
{
 struct ieee80211_channel *VAR_12, *VAR_13;
 uint16_t VAR_14;
 int VAR_15;

 VAR_14 = FUNC_2(VAR_9, VAR_11);





 VAR_11 |= VAR_3;
 VAR_12 = FUNC_1(VAR_6, *VAR_8, VAR_14, VAR_11);
 if (VAR_12 == ((void*)0))
  return (VAR_0);

 VAR_13 = FUNC_1(VAR_6, *VAR_8, VAR_14 + 20, VAR_11);
 if (VAR_13 == ((void*)0))
  return (VAR_1);

 VAR_11 &= ~VAR_2;
 VAR_15 = FUNC_0(VAR_6, VAR_7, VAR_8, VAR_12->ic_ieee, VAR_12->ic_freq,
     VAR_10, VAR_11 | VAR_5);
 if (VAR_15 != 0)
  return (VAR_15);

 VAR_15 = FUNC_0(VAR_6, VAR_7, VAR_8, VAR_13->ic_ieee, VAR_13->ic_freq,
     VAR_10, VAR_11 | VAR_4);

 return (VAR_15);
}
