
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct ath_hal {int dummy; } ;
typedef scalar_t__ int16_t ;
struct TYPE_5__ {TYPE_1__* pDataPerPDGain; } ;
struct TYPE_4__ {scalar_t__ numVpd; scalar_t__* pwr_t4; } ;
typedef TYPE_2__ RAW_DATA_PER_CHANNEL_2316 ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int16_t
FUNC_0(struct ath_hal *VAR_1, const RAW_DATA_PER_CHANNEL_2316 *VAR_2)
{
 uint32_t VAR_3,VAR_4;
 uint16_t VAR_5=0,VAR_6;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_4 = VAR_0 - VAR_3 - 1;

  VAR_6 = VAR_2->pDataPerPDGain[VAR_4].numVpd;
  if (VAR_6 > 0) {
   VAR_5 = VAR_2->pDataPerPDGain[VAR_4].pwr_t4[0];
   return(VAR_5);
  }
 }
 return(VAR_5);
}
