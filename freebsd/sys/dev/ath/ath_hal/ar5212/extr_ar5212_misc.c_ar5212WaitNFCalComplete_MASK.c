
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hal {int dummy; } ;
typedef int HAL_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ath_hal*) ;

HAL_BOOL
FUNC_2(struct ath_hal *VAR_2, int VAR_3)
{
 int VAR_4;
 if (VAR_3 <= 0)
  VAR_3 = 1;
 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  if (! FUNC_1(VAR_2))
   return VAR_1;
  FUNC_0(10);
 }
 return VAR_0;
}
