
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_10__ {int numChannels; int* pChannels; } ;
struct TYPE_9__ {int numChannels; int xpd_mask; int* pChannels; TYPE_2__* pDataPerChannel; } ;
struct TYPE_8__ {int channelValue; int numPdGains; TYPE_1__* pDataPerPDGain; } ;
struct TYPE_7__ {int pd_gain; scalar_t__ numVpd; } ;
typedef TYPE_3__ RAW_DATA_STRUCT_2413 ;
typedef TYPE_4__ EEPROM_DATA_STRUCT_2413 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_0(RAW_DATA_STRUCT_2413 *VAR_3, EEPROM_DATA_STRUCT_2413 *VAR_4)
{
 uint16_t VAR_5, VAR_6, VAR_7, VAR_8;
 uint16_t VAR_9;
 uint16_t VAR_10;

 VAR_3->numChannels = VAR_4->numChannels;

 VAR_9 = VAR_3->xpd_mask;
 VAR_10 = 0;
 if ((VAR_9 >> 0) & 0x1) VAR_10++;
 if ((VAR_9 >> 1) & 0x1) VAR_10++;
 if ((VAR_9 >> 2) & 0x1) VAR_10++;
 if ((VAR_9 >> 3) & 0x1) VAR_10++;

 for (VAR_5 = 0; VAR_5 < VAR_4->numChannels; VAR_5++) {
  VAR_8 = VAR_4->pChannels[VAR_5];

  VAR_3->pChannels[VAR_5] = VAR_8;

  VAR_3->pDataPerChannel[VAR_5].channelValue = VAR_8;
  VAR_3->pDataPerChannel[VAR_5].numPdGains = VAR_10;

  VAR_7 = 0;
  for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
   VAR_3->pDataPerChannel[VAR_5].pDataPerPDGain[VAR_6].pd_gain = VAR_6;
   if ((VAR_9 >> VAR_6) & 0x1) {
    VAR_3->pDataPerChannel[VAR_5].pDataPerPDGain[VAR_6].numVpd = VAR_2;
    VAR_7++;
    if (VAR_7 == 1) {





     VAR_3->pDataPerChannel[VAR_5].pDataPerPDGain[VAR_6].numVpd = VAR_1;
    }
   } else {
    VAR_3->pDataPerChannel[VAR_5].pDataPerPDGain[VAR_6].numVpd = 0;
   }
  }
 }
}
