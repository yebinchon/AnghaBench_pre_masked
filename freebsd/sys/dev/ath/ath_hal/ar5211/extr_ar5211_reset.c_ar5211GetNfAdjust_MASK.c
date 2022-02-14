
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct ath_hal {int dummy; } ;
typedef int int16_t ;
struct TYPE_3__ {scalar_t__ channel; } ;
typedef TYPE_1__ HAL_CHANNEL_INTERNAL ;



int16_t
FUNC_0(struct ath_hal *VAR_0, const HAL_CHANNEL_INTERNAL *VAR_1)
{
 static const struct {
  uint16_t freqLow;
  int16_t adjust;
 } VAR_2[] = {
  { 5790, 11 },
  { 5730, 10 },
  { 5690, 9 },
  { 5660, 8 },
  { 5610, 7 },
  { 5530, 5 },
  { 5450, 4 },
  { 5379, 2 },
  { 5209, 0 },
  { 0, 1 },
 };
 int VAR_3;

 for (VAR_3 = 0; VAR_1->channel <= VAR_2[VAR_3].freqLow; VAR_3++)
  ;

 return VAR_2[VAR_3].adjust / 3;
}
