
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_3__ {int* rx_mask; } ;
struct TYPE_4__ {TYPE_1__ mcs; } ;
struct ieee80211_supported_band {TYPE_2__ ht_cap; } ;


 int FUNC_0 (size_t) ;
 int VAR_0 ;
 int FUNC_1 (size_t*,int ,int) ;

__attribute__((used)) static bool FUNC_2(struct ieee80211_supported_band *VAR_1,
          u8 *VAR_2, u8 VAR_3,
          u8 VAR_4[VAR_0])
{
 u8 VAR_5;

 FUNC_1(VAR_4, 0, VAR_0);

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  int VAR_6, VAR_7;

  VAR_6 = VAR_2[VAR_5] / 8;
  VAR_7 = FUNC_0(VAR_2[VAR_5] % 8);


  if ((VAR_6 < 0) || (VAR_6 >= VAR_0))
   return 0;


  if (VAR_1->ht_cap.mcs.rx_mask[VAR_6] & VAR_7)
   VAR_4[VAR_6] |= VAR_7;
  else
   return 0;
 }

 return 1;
}
