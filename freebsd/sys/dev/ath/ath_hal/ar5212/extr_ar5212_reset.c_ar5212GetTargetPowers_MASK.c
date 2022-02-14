
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct ieee80211_channel {int dummy; } ;
struct ath_hal {int dummy; } ;
struct TYPE_4__ {int testChannel; void* twicePwr54; void* twicePwr48; void* twicePwr36; void* twicePwr6_24; } ;
typedef TYPE_1__ TRGT_POWER_INFO ;


 int VAR_0 ;
 int FUNC_0 (int,int*,int,int*,int*) ;
 int FUNC_1 (struct ath_hal*,struct ieee80211_channel const*) ;
 void* FUNC_2 (int,int,int,void*,void*) ;

__attribute__((used)) static void
FUNC_3(struct ath_hal *VAR_1, const struct ieee80211_channel *VAR_2,
 const TRGT_POWER_INFO *VAR_3,
 uint16_t VAR_4, TRGT_POWER_INFO *VAR_5)
{
 uint16_t VAR_6 = FUNC_1(VAR_1, VAR_2);

 uint16_t VAR_7[VAR_0];
 uint16_t VAR_8, VAR_9, VAR_10, VAR_11;
 int VAR_12;


 for (VAR_12 = 0; VAR_12 < VAR_4; VAR_12++)
  VAR_7[VAR_12] = VAR_3[VAR_12].testChannel;

 FUNC_0(VAR_6, VAR_7,
  VAR_4, &VAR_8, &VAR_9);


 VAR_10 = VAR_11 = 0;
 for (VAR_12 = 0; VAR_12 < VAR_4; VAR_12++) {
  if (VAR_8 == VAR_7[VAR_12]) {
   VAR_10 = VAR_12;
  }
  if (VAR_9 == VAR_7[VAR_12]) {
   VAR_11 = VAR_12;
   break;
  }
 }





 VAR_5->twicePwr6_24 = FUNC_2(VAR_6, VAR_8, VAR_9,
  VAR_3[VAR_10].twicePwr6_24, VAR_3[VAR_11].twicePwr6_24);
 VAR_5->twicePwr36 = FUNC_2(VAR_6, VAR_8, VAR_9,
  VAR_3[VAR_10].twicePwr36, VAR_3[VAR_11].twicePwr36);
 VAR_5->twicePwr48 = FUNC_2(VAR_6, VAR_8, VAR_9,
  VAR_3[VAR_10].twicePwr48, VAR_3[VAR_11].twicePwr48);
 VAR_5->twicePwr54 = FUNC_2(VAR_6, VAR_8, VAR_9,
  VAR_3[VAR_10].twicePwr54, VAR_3[VAR_11].twicePwr54);
}
