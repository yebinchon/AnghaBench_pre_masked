
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath_hal {int dummy; } ;
struct ar5212AniParams {int maxNoiseImmunityLevel; int maxSpurImmunityLevel; int maxFirstepLevel; int ofdmTrigHigh; int ofdmTrigLow; int cckTrigHigh; int cckTrigLow; int rssiThrHigh; int rssiThrLow; int period; int firstep; int cycPwrThr1; int firpwr; int coarseLow; int coarseHigh; int totalSizeDesired; } ;
struct TYPE_2__ {int ah_ani_function; } ;


 TYPE_1__* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ath_hal*,struct ar5212AniParams const*,struct ar5212AniParams const*,int ) ;

__attribute__((used)) static void
FUNC_2(struct ath_hal *VAR_2)
{





        static const struct ar5212AniParams VAR_3 = {
                .maxNoiseImmunityLevel = 4,
                .totalSizeDesired = { -55, -55, -55, -55, -62 },
                .coarseHigh = { -14, -14, -14, -14, -12 },
                .coarseLow = { -64, -64, -64, -64, -70 },
                .firpwr = { -78, -78, -78, -78, -80 },
                .maxSpurImmunityLevel = 7,
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

 FUNC_0(VAR_2)->ah_ani_function &= ~ VAR_1;


        FUNC_1(VAR_2, &VAR_3, &VAR_3, VAR_0);
}
