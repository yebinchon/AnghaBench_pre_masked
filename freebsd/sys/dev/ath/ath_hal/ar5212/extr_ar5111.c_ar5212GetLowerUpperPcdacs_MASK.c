
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_5__ {scalar_t__ channelValue; int numPcdacValues; int PcdacValues; } ;
struct TYPE_4__ {int numChannels; TYPE_2__* pDataPerChannel; } ;
typedef TYPE_1__ PCDACS_EEPROM ;
typedef TYPE_2__ DATA_PER_CHANNEL ;


 int FUNC_0 (scalar_t__,int ,int ,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static void
FUNC_1(uint16_t VAR_0, uint16_t VAR_1,
 const PCDACS_EEPROM *VAR_2,
 uint16_t *VAR_3, uint16_t *VAR_4)
{
 const DATA_PER_CHANNEL *VAR_5 = VAR_2->pDataPerChannel;
 int VAR_6;


 for (VAR_6 = 0; VAR_6 < VAR_2->numChannels; VAR_6++) {
  if (VAR_5->channelValue == VAR_1)
   break;
  VAR_5++;
 }
 FUNC_0(VAR_0, VAR_5->PcdacValues,
        VAR_5->numPcdacValues,
        VAR_3, VAR_4);
}
