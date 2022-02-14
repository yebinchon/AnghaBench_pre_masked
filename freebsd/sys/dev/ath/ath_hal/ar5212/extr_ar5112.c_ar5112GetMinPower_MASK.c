
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ath_hal {int dummy; } ;
typedef scalar_t__ int16_t ;
struct TYPE_5__ {TYPE_1__* pDataPerXPD; } ;
struct TYPE_4__ {scalar_t__ xpd_gain; scalar_t__* pwr_t4; scalar_t__* pcdac; } ;
typedef TYPE_2__ EXPN_DATA_PER_CHANNEL_5112 ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int16_t
FUNC_0(struct ath_hal *VAR_2, const EXPN_DATA_PER_CHANNEL_5112 *VAR_3)
{
 int VAR_4, VAR_5;
 int16_t VAR_6,VAR_7,VAR_8,VAR_9;


 VAR_6 = VAR_3->pDataPerXPD[0].xpd_gain;
 for (VAR_5=0,VAR_4=1; VAR_4<VAR_1; VAR_4++) {
  if (VAR_3->pDataPerXPD[VAR_4].xpd_gain < VAR_6) {
   VAR_5 = VAR_4;
   VAR_6 = VAR_3->pDataPerXPD[VAR_4].xpd_gain;
  }
 }
 VAR_7 = VAR_3->pDataPerXPD[VAR_5].pwr_t4[0];
 VAR_8 = VAR_3->pDataPerXPD[VAR_5].pcdac[0];
 for (VAR_4=1; VAR_4<VAR_0; VAR_4++) {
  if (VAR_3->pDataPerXPD[VAR_5].pwr_t4[VAR_4] < VAR_7) {
   VAR_7 = VAR_3->pDataPerXPD[VAR_5].pwr_t4[VAR_4];
   VAR_8 = VAR_3->pDataPerXPD[VAR_5].pcdac[VAR_4];
  }
 }
 VAR_9 = VAR_7 - (VAR_8*2);
 return(VAR_9);
}
