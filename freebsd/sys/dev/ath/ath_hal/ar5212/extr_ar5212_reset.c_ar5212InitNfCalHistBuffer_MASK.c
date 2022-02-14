
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int first_run; int invalidNFcount; void** nfCalBuffer; void* privNF; scalar_t__ currIndex; } ;
struct ath_hal_5212 {TYPE_1__ ah_nfCalHist; } ;
struct ath_hal {int dummy; } ;


 struct ath_hal_5212* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 void* VAR_1 ;

void
FUNC_1(struct ath_hal *VAR_2)
{
 struct ath_hal_5212 *VAR_3 = FUNC_0(VAR_2);
 int VAR_4;

 VAR_3->ah_nfCalHist.first_run = 1;
 VAR_3->ah_nfCalHist.currIndex = 0;
 VAR_3->ah_nfCalHist.privNF = VAR_1;
 VAR_3->ah_nfCalHist.invalidNFcount = VAR_0;
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4 ++)
  VAR_3->ah_nfCalHist.nfCalBuffer[VAR_4] = VAR_1;
}
