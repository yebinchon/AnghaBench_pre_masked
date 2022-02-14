
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ath_hal {int dummy; } ;
typedef struct ar5212AniParams {int maxNoiseImmunityLevel; int maxSpurImmunityLevel; int maxFirstepLevel; int ofdmTrigHigh; int ofdmTrigLow; int cckTrigHigh; int cckTrigLow; int rssiThrHigh; int rssiThrLow; int period; int firstep; int cycPwrThr1; int firpwr; int coarseLow; int coarseHigh; int totalSizeDesired; } const ar5212AniParams ;
struct TYPE_4__ {int ah_aniControl; } ;
struct TYPE_3__ {scalar_t__ ah_macVersion; } ;


 TYPE_2__* FUNC_0 (struct ath_hal*) ;
 TYPE_1__* FUNC_1 (struct ath_hal*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct ar5212AniParams const*,struct ar5212AniParams const*,int) ;
 int FUNC_3 (struct ath_hal*,struct ar5212AniParams const*,struct ar5212AniParams const*,int ) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_4(struct ath_hal *VAR_3)
{
 static const struct ar5212AniParams VAR_4 = {
  .maxNoiseImmunityLevel = 4,
  .totalSizeDesired = { -55, -55, -55, -55, -62 },
  .coarseHigh = { -14, -14, -14, -14, -12 },
  .coarseLow = { -64, -64, -64, -64, -70 },
  .firpwr = { -78, -78, -78, -78, -80 },
  .maxSpurImmunityLevel = 2,
  .cycPwrThr1 = { 2, 4, 6, 8, 10, 12, 14, 16 },
  .maxFirstepLevel = 2,
  .firstep = { 0, 4, 8 },
  .ofdmTrigHigh = 500,
  .ofdmTrigLow = 200,
  .cckTrigHigh = 200,
  .cckTrigLow = 100,
  .rssiThrHigh = 40,
  .rssiThrLow = 7,
  .period = 100,
 };
 if (FUNC_1(VAR_3)->ah_macVersion < VAR_1) {
  struct ar5212AniParams VAR_5;
  FUNC_2(&VAR_5, &VAR_4, sizeof(struct ar5212AniParams));
  VAR_5.maxSpurImmunityLevel = 7;
  FUNC_3(VAR_3, &VAR_5, &VAR_5, VAR_0);
 } else
  FUNC_3(VAR_3, &VAR_4, &VAR_4, VAR_0);


 FUNC_0(VAR_3)->ah_aniControl = VAR_2;
}
