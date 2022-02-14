
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hal {int dummy; } ;
struct ar5212AniParams {scalar_t__ ofdmTrigHigh; scalar_t__ cckTrigHigh; scalar_t__ cckPhyErrBase; scalar_t__ ofdmPhyErrBase; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ath_hal*,int ,char*,scalar_t__) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_1(struct ath_hal *VAR_2, struct ar5212AniParams *VAR_3)
{
 if (VAR_3->ofdmTrigHigh >= VAR_0) {
  FUNC_0(VAR_2, VAR_1,
      "OFDM Trigger %d is too high for hw counters, using max\n",
      VAR_3->ofdmTrigHigh);
  VAR_3->ofdmPhyErrBase = 0;
 } else
  VAR_3->ofdmPhyErrBase = VAR_0 - VAR_3->ofdmTrigHigh;
 if (VAR_3->cckTrigHigh >= VAR_0) {
  FUNC_0(VAR_2, VAR_1,
      "CCK Trigger %d is too high for hw counters, using max\n",
      VAR_3->cckTrigHigh);
  VAR_3->cckPhyErrBase = 0;
 } else
  VAR_3->cckPhyErrBase = VAR_0 - VAR_3->cckTrigHigh;
}
