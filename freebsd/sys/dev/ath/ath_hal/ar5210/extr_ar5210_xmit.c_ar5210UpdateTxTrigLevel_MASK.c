
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ath_hal {int dummy; } ;
typedef int HAL_INT ;
typedef scalar_t__ HAL_BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ath_hal*,int ) ;
 int FUNC_1 (struct ath_hal*,int ,int) ;
 int FUNC_2 (struct ath_hal*) ;
 int FUNC_3 (struct ath_hal*,int) ;

HAL_BOOL
FUNC_4(struct ath_hal *VAR_6, HAL_BOOL VAR_7)
{
 uint32_t VAR_8;
 HAL_INT VAR_9 = FUNC_2(VAR_6);





 (void) FUNC_3(VAR_6, VAR_9 &~ VAR_3);
 VAR_8 = FUNC_0(VAR_6, VAR_2);
 if (VAR_7){

  VAR_8 = VAR_8 +
   ((VAR_4 - VAR_8) / 2);
 } else {

  if (VAR_8 > VAR_5) {

   VAR_8--;
  } else {


   FUNC_3(VAR_6, VAR_9);
   return VAR_0;
  }
 }

 FUNC_1(VAR_6, VAR_2, VAR_8);

 FUNC_3(VAR_6, VAR_9);
 return VAR_1;
}
