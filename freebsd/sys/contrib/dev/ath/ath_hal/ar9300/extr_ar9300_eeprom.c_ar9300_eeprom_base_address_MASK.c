
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath_hal {int dummy; } ;
struct TYPE_2__ {scalar_t__ calibration_data_source; } ;


 TYPE_1__* FUNC_0 (struct ath_hal*) ;
 int FUNC_1 (struct ath_hal*) ;
 int FUNC_2 (struct ath_hal*) ;
 scalar_t__ VAR_0 ;

int
FUNC_3(struct ath_hal *VAR_1)
{
    int VAR_2;

    if (FUNC_0(VAR_1)->calibration_data_source == VAR_0) {
  return FUNC_2(VAR_1)-1;
 }
 else
 {
  VAR_2 = FUNC_1(VAR_1);
  if (VAR_2 > 0) {
   return VAR_2 - 1;
  } else {
   return FUNC_2(VAR_1)-1;
  }
 }
}
