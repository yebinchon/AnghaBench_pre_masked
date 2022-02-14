
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint8_t ;
struct ath_hal {int dummy; } ;
struct TYPE_6__ {scalar_t__* rateCodeToIndex; int rateCount; TYPE_1__* info; } ;
struct TYPE_5__ {size_t rateCode; size_t controlRate; size_t shortPreamble; void* spAckDuration; void* lpAckDuration; } ;
typedef TYPE_2__ HAL_RATE_TABLE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 size_t FUNC_1 (scalar_t__*) ;
 int VAR_2 ;
 void* FUNC_2 (struct ath_hal*,TYPE_2__*,int ,size_t,int ,int ) ;

void
FUNC_3(struct ath_hal *VAR_3, HAL_RATE_TABLE *VAR_4)
{

 int VAR_5;

 if (VAR_4->rateCodeToIndex[0] != 0)
  return;
 for (VAR_5 = 0; VAR_5 < (sizeof(VAR_4->rateCodeToIndex)/sizeof(VAR_4->rateCodeToIndex[0])); VAR_5++)
  VAR_4->rateCodeToIndex[VAR_5] = (uint8_t) -1;
 for (VAR_5 = 0; VAR_5 < VAR_4->rateCount; VAR_5++) {
  uint8_t VAR_6 = VAR_4->info[VAR_5].rateCode;
  uint8_t VAR_7 = VAR_4->info[VAR_5].controlRate;

  FUNC_0(VAR_6 < (sizeof(VAR_4->rateCodeToIndex)/sizeof(VAR_4->rateCodeToIndex[0])));
  VAR_4->rateCodeToIndex[VAR_6] = VAR_5;
  FUNC_0((VAR_6 | VAR_4->info[VAR_5].shortPreamble) <
      (sizeof(VAR_4->rateCodeToIndex)/sizeof(VAR_4->rateCodeToIndex[0])));
  VAR_4->rateCodeToIndex[VAR_6 | VAR_4->info[VAR_5].shortPreamble] = VAR_5;






  VAR_4->info[VAR_5].lpAckDuration = FUNC_2(VAR_3, VAR_4,
   VAR_2, VAR_7, VAR_0, VAR_1);
  VAR_4->info[VAR_5].spAckDuration = FUNC_2(VAR_3, VAR_4,
   VAR_2, VAR_7, VAR_1, VAR_1);
 }

}
