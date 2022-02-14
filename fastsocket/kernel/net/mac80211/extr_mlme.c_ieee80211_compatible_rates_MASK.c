
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct ieee80211_supported_band {int n_bitrates; TYPE_1__* bitrates; } ;
struct TYPE_2__ {int bitrate; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(const u8 *VAR_0, int VAR_1,
          struct ieee80211_supported_band *VAR_2,
          u32 *VAR_3)
{
 int VAR_4, VAR_5, VAR_6;
 *VAR_3 = 0;
 VAR_6 = 0;
 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  int VAR_7 = (VAR_0[VAR_4] & 0x7F) * 5;

  for (VAR_5 = 0; VAR_5 < VAR_2->n_bitrates; VAR_5++)
   if (VAR_2->bitrates[VAR_5].bitrate == VAR_7) {
    *VAR_3 |= FUNC_0(VAR_5);
    VAR_6++;
    break;
   }
 }

 return VAR_6;
}
