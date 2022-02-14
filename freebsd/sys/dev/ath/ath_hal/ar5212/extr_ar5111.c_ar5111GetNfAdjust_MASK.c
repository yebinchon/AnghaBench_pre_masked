
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



__attribute__((used)) static int16_t
FUNC_0(struct ath_hal *VAR_0, const HAL_CHANNEL_INTERNAL *VAR_1)
{
 static const struct {
  uint16_t freqLow;
  int16_t adjust;
 } VAR_2[] = {
  { 5790, 6 },
  { 5730, 4 },
  { 5690, 3 },
  { 5660, 2 },
  { 5610, 1 },
  { 5530, 0 },
  { 5450, 0 },
  { 5379, 1 },
  { 5209, 3 },
  { 3000, 5 },
  { 0, 0 },
 };
 int VAR_3;

 for (VAR_3 = 0; VAR_1->channel <= VAR_2[VAR_3].freqLow; VAR_3++)
  ;
 return VAR_2[VAR_3].adjust;
}
