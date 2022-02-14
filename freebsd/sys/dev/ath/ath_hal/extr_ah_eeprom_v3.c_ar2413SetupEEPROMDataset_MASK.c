
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef size_t uint16_t ;
struct TYPE_5__ {size_t numChannels; int xpd_mask; size_t* pChannels; TYPE_1__* pDataPerChannel; } ;
struct TYPE_4__ {size_t channelValue; size_t numPdGains; } ;
typedef TYPE_2__ EEPROM_DATA_STRUCT_2413 ;



__attribute__((used)) static void
FUNC_0(EEPROM_DATA_STRUCT_2413 *VAR_0,
 uint16_t VAR_1, uint16_t *VAR_2)
{
 uint16_t VAR_3, VAR_4;
 uint32_t VAR_5;
 uint16_t VAR_6;

 VAR_0->numChannels = VAR_1;

 VAR_5 = VAR_0->xpd_mask;
 VAR_6 = 0;
 if ((VAR_5 >> 0) & 0x1) VAR_6++;
 if ((VAR_5 >> 1) & 0x1) VAR_6++;
 if ((VAR_5 >> 2) & 0x1) VAR_6++;
 if ((VAR_5 >> 3) & 0x1) VAR_6++;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  VAR_4 = VAR_2[VAR_3];
  VAR_0->pChannels[VAR_3] = VAR_4;
  VAR_0->pDataPerChannel[VAR_3].channelValue = VAR_4;
  VAR_0->pDataPerChannel[VAR_3].numPdGains = VAR_6;
 }
}
