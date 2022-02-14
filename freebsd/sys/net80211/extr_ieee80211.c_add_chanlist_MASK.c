
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct ieee80211_channel {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ieee80211_channel*,int,int*,scalar_t__ const,int,int ,int) ;
 int FUNC_1 (struct ieee80211_channel*,int,int*,int) ;
 int FUNC_2 (scalar_t__ const,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int
FUNC_4(struct ieee80211_channel VAR_4[], int VAR_5, int *VAR_6,
    const uint8_t VAR_7[], int VAR_8, uint32_t VAR_9[])
{
 uint16_t VAR_10;
 int VAR_11, VAR_12, VAR_13;
 int VAR_14;

 for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++) {
  VAR_10 = FUNC_2(VAR_7[VAR_11], VAR_9[0]);
  for (VAR_12 = 0; VAR_9[VAR_12] != 0; VAR_12++) {
   VAR_14 = !! (VAR_9[VAR_12] & VAR_2);
   if (VAR_14 && VAR_9[VAR_12] & VAR_3)
    if (! FUNC_3(VAR_10))
     continue;
   if (VAR_9[VAR_12] & VAR_0)
    if (VAR_11 == 0 || VAR_7[VAR_11] < VAR_7[0] + 4 ||
        VAR_10 - 20 !=
        FUNC_2(VAR_7[VAR_11] - 4, VAR_9[VAR_12]))
     continue;
   if (VAR_9[VAR_12] & VAR_1)
    if (VAR_11 == VAR_8 - 1 ||
        VAR_7[VAR_11] + 4 > VAR_7[VAR_8 - 1] ||
        VAR_10 + 20 !=
        FUNC_2(VAR_7[VAR_11] + 4, VAR_9[VAR_12]))
     continue;

   if (VAR_12 == 0) {
    VAR_13 = FUNC_0(VAR_4, VAR_5, VAR_6,
        VAR_7[VAR_11], VAR_10, 0, VAR_9[VAR_12]);
   } else {
    VAR_13 = FUNC_1(VAR_4, VAR_5, VAR_6,
        VAR_9[VAR_12]);
   }
   if (VAR_13 != 0)
    return (VAR_13);
  }
 }

 return (0);
}
