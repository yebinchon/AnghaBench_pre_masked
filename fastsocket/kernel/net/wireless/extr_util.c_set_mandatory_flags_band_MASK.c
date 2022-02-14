
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int* rx_mask; } ;
struct TYPE_6__ {TYPE_2__ mcs; int ht_supported; } ;
struct ieee80211_supported_band {int n_bitrates; TYPE_3__ ht_cap; TYPE_1__* bitrates; } ;
typedef enum ieee80211_band { ____Placeholder_ieee80211_band } ieee80211_band ;
struct TYPE_4__ {int bitrate; int flags; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct ieee80211_supported_band *VAR_4,
         enum ieee80211_band VAR_5)
{
 int VAR_6, VAR_7;

 switch (VAR_5) {
 case 130:
  VAR_7 = 3;
  for (VAR_6 = 0; VAR_6 < VAR_4->n_bitrates; VAR_6++) {
   if (VAR_4->bitrates[VAR_6].bitrate == 60 ||
       VAR_4->bitrates[VAR_6].bitrate == 120 ||
       VAR_4->bitrates[VAR_6].bitrate == 240) {
    VAR_4->bitrates[VAR_6].flags |=
     VAR_1;
    VAR_7--;
   }
  }
  FUNC_0(VAR_7);
  break;
 case 131:
  VAR_7 = 7;
  for (VAR_6 = 0; VAR_6 < VAR_4->n_bitrates; VAR_6++) {
   if (VAR_4->bitrates[VAR_6].bitrate == 10) {
    VAR_4->bitrates[VAR_6].flags |=
     VAR_2 |
     VAR_3;
    VAR_7--;
   }

   if (VAR_4->bitrates[VAR_6].bitrate == 20 ||
       VAR_4->bitrates[VAR_6].bitrate == 55 ||
       VAR_4->bitrates[VAR_6].bitrate == 110 ||
       VAR_4->bitrates[VAR_6].bitrate == 60 ||
       VAR_4->bitrates[VAR_6].bitrate == 120 ||
       VAR_4->bitrates[VAR_6].bitrate == 240) {
    VAR_4->bitrates[VAR_6].flags |=
     VAR_3;
    VAR_7--;
   }

   if (VAR_4->bitrates[VAR_6].bitrate != 10 &&
       VAR_4->bitrates[VAR_6].bitrate != 20 &&
       VAR_4->bitrates[VAR_6].bitrate != 55 &&
       VAR_4->bitrates[VAR_6].bitrate != 110)
    VAR_4->bitrates[VAR_6].flags |=
     VAR_0;
  }
  FUNC_0(VAR_7 != 0 && VAR_7 != 3 && VAR_7 != 6);
  break;
 case 129:

  FUNC_0(!VAR_4->ht_cap.ht_supported);
  FUNC_0((VAR_4->ht_cap.mcs.rx_mask[0] & 0x1e) != 0x1e);
  break;
 case 128:
  FUNC_0(1);
  break;
 }
}
