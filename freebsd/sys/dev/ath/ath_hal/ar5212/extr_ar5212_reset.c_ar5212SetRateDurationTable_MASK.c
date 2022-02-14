
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct ieee80211_channel {int dummy; } ;
struct ath_hal {int dummy; } ;
struct TYPE_6__ {int rateCount; TYPE_1__* info; } ;
struct TYPE_5__ {scalar_t__ phy; int shortPreamble; int controlRate; int rateCode; } ;
typedef TYPE_2__ HAL_RATE_TABLE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_2 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_3 (struct ieee80211_channel const*) ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (struct ath_hal*,int,int ) ;
 int VAR_7 ;
 TYPE_2__* FUNC_5 (struct ath_hal*,int ) ;
 int FUNC_6 (struct ath_hal*,TYPE_2__ const*,int ,int ,int ,int ) ;

void
FUNC_7(struct ath_hal *VAR_8,
 const struct ieee80211_channel *VAR_9)
{
 const HAL_RATE_TABLE *VAR_10;
 int VAR_11;


 if (FUNC_1(VAR_9)) {
  VAR_10 = FUNC_5(VAR_8, VAR_2);
 } else if (FUNC_2(VAR_9)) {
  VAR_10 = FUNC_5(VAR_8, VAR_3);
 } else {
  VAR_10 = FUNC_5(VAR_8,
   FUNC_3(VAR_9) ? VAR_5 : VAR_4);
 }

 for (VAR_11 = 0; VAR_11 < VAR_10->rateCount; ++VAR_11)
  FUNC_4(VAR_8,
   FUNC_0(VAR_10->info[VAR_11].rateCode),
   FUNC_6(VAR_8, VAR_10,
    VAR_7,
    VAR_10->info[VAR_11].controlRate, VAR_0, VAR_1));
 if (!FUNC_3(VAR_9)) {

  VAR_10 = FUNC_5(VAR_8, VAR_4);
  for (VAR_11 = 0; VAR_11 < VAR_10->rateCount; ++VAR_11) {
   uint32_t VAR_12 = FUNC_0(VAR_10->info[VAR_11].rateCode);

   if (VAR_10->info[VAR_11].phy != VAR_6)
    continue;

   FUNC_4(VAR_8, VAR_12,
    FUNC_6(VAR_8, VAR_10,
     VAR_7,
     VAR_10->info[VAR_11].controlRate, VAR_0,
     VAR_1));

   if (VAR_10->info[VAR_11].shortPreamble) {
    VAR_12 += VAR_10->info[VAR_11].shortPreamble << 2;
    FUNC_4(VAR_8, VAR_12,
     FUNC_6(VAR_8, VAR_10,
      VAR_7,
      VAR_10->info[VAR_11].controlRate,
      VAR_1, VAR_1));
   }
  }
 }
}
