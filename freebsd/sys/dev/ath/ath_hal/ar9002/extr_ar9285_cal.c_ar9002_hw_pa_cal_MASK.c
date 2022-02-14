
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ath_hal {int dummy; } ;
struct TYPE_3__ {int skipcount; } ;
struct TYPE_4__ {TYPE_1__ pacal_info; } ;
typedef scalar_t__ HAL_BOOL ;


 TYPE_2__* FUNC_0 (struct ath_hal*) ;
 scalar_t__ FUNC_1 (struct ath_hal*) ;
 int FUNC_2 (struct ath_hal*,scalar_t__) ;

void
FUNC_3(struct ath_hal *VAR_0, HAL_BOOL VAR_1)
{
 if (FUNC_1(VAR_0)) {
  if (VAR_1 || !FUNC_0(VAR_0)->pacal_info.skipcount)
   FUNC_2(VAR_0, VAR_1);
  else
   FUNC_0(VAR_0)->pacal_info.skipcount--;
 }
}
