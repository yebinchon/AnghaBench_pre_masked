
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ath_hal {int dummy; } ;
typedef scalar_t__ int16_t ;
typedef size_t WIRELESS_MODE ;
struct TYPE_6__ {int ah_nchan; TYPE_1__* ah_channels; } ;
struct TYPE_5__ {scalar_t__ rawNoiseFloor; scalar_t__ noiseFloorAdjust; int channel; } ;
typedef TYPE_1__ HAL_CHANNEL_INTERNAL ;


 TYPE_4__* FUNC_0 (struct ath_hal*) ;
 int FUNC_1 (struct ath_hal*,int ,char*,int ,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__* VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_3 (struct ath_hal*,TYPE_1__*) ;

void
FUNC_4(struct ath_hal *VAR_4)
{
 HAL_CHANNEL_INTERNAL *VAR_5;
 int16_t VAR_6, VAR_7;
 int16_t VAR_8, VAR_9;
 int VAR_10;





 VAR_6 = VAR_8 = 0;
 VAR_7 = VAR_9 = 0;
 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_4)->ah_nchan; VAR_10++) {
  WIRELESS_MODE VAR_11;
  int16_t VAR_12;

  VAR_5 = &FUNC_0(VAR_4)->ah_channels[VAR_10];
  if (VAR_5->rawNoiseFloor >= 0)
   continue;

  VAR_11 = FUNC_2(VAR_5) ? VAR_2 : VAR_3;
  VAR_12 = VAR_5->rawNoiseFloor + VAR_1[VAR_11] +
   FUNC_3(VAR_4, VAR_5);
  if (FUNC_2(VAR_5)) {
   if (VAR_12 < VAR_9) {
    VAR_9 = VAR_12;
    VAR_7 = VAR_1[VAR_11] -
        (VAR_5->rawNoiseFloor + FUNC_3(VAR_4, VAR_5));
   }
  } else {
   if (VAR_12 < VAR_8) {
    VAR_8 = VAR_12;
    VAR_6 = VAR_1[VAR_11] -
        (VAR_5->rawNoiseFloor + FUNC_3(VAR_4, VAR_5));
   }
  }
 }


 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_4)->ah_nchan; VAR_10++) {
  VAR_5 = &FUNC_0(VAR_4)->ah_channels[VAR_10];
  if (VAR_5->rawNoiseFloor >= 0)
   continue;

  VAR_5->noiseFloorAdjust = FUNC_3(VAR_4, VAR_5) +
   (FUNC_2(VAR_5) ? VAR_7 : VAR_6);
  FUNC_1(VAR_4, VAR_0, "%u raw nf %d adjust %d\n",
      VAR_5->channel, VAR_5->rawNoiseFloor, VAR_5->noiseFloorAdjust);
 }
}
