
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_5__ {scalar_t__ channelValue; scalar_t__* PcdacValues; scalar_t__ numPcdacValues; scalar_t__* PwrValues; } ;
struct TYPE_4__ {scalar_t__ numChannels; TYPE_2__* pDataPerChannel; } ;
typedef TYPE_1__ PCDACS_EEPROM ;
typedef int HAL_BOOL ;
typedef TYPE_2__ DATA_PER_CHANNEL ;


 int VAR_0 ;
 int VAR_1 ;

HAL_BOOL
FUNC_0(uint16_t VAR_2, uint16_t VAR_3,
 const PCDACS_EEPROM *VAR_4, uint16_t *VAR_5)
{
 const DATA_PER_CHANNEL *VAR_6;
 const uint16_t *VAR_7;
 uint16_t VAR_8, VAR_9;

 VAR_6 = VAR_4->pDataPerChannel;
 for (VAR_8 = 0; VAR_8 < VAR_4->numChannels; VAR_8++ ) {
  if (VAR_6->channelValue == VAR_2) {
   VAR_7 = VAR_6->PcdacValues;
   for (VAR_9 = 0; VAR_9 < VAR_6->numPcdacValues; VAR_9++ ) {
    if (*VAR_7 == VAR_3) {
     *VAR_5 = VAR_6->PwrValues[VAR_9];
     return VAR_1;
    }
    VAR_7++;
   }
  }
  VAR_6++;
 }
 return VAR_0;
}
