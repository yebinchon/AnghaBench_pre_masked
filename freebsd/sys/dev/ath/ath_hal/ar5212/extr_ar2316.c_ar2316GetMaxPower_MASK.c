
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef int uint16_t ;
struct ath_hal {int dummy; } ;
typedef int int16_t ;
struct TYPE_5__ {TYPE_1__* pDataPerPDGain; } ;
struct TYPE_4__ {int numVpd; int* pwr_t4; } ;
typedef TYPE_2__ RAW_DATA_PER_CHANNEL_2316 ;


 size_t VAR_0 ;

__attribute__((used)) static int16_t
FUNC_0(struct ath_hal *VAR_1, const RAW_DATA_PER_CHANNEL_2316 *VAR_2)
{
 uint32_t VAR_3;
 uint16_t VAR_4=0,VAR_5;

 for (VAR_3=0; VAR_3< VAR_0; VAR_3++) {

  VAR_5 = VAR_2->pDataPerPDGain[VAR_3].numVpd;
  if (VAR_5 > 0) {
   VAR_4 = VAR_2->pDataPerPDGain[VAR_3].pwr_t4[VAR_5-1];
   return(VAR_4);
  }
 }
 return(VAR_4);
}
