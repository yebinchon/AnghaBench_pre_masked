
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
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ath_hal*,int ) ;
 int FUNC_1 (struct ath_hal*,int ,int) ;
 int FUNC_2 (struct ath_hal*) ;
 int FUNC_3 (struct ath_hal*,int) ;

HAL_BOOL
FUNC_4(struct ath_hal *VAR_8, HAL_BOOL VAR_9)
{
 uint32_t VAR_10, VAR_11;
 HAL_INT VAR_12 = FUNC_2(VAR_8);





 FUNC_3(VAR_8, VAR_12 &~ VAR_5);
 VAR_11 = FUNC_0(VAR_8, VAR_2);
 VAR_10 = (VAR_11 & VAR_3) >> VAR_4;
 if (VAR_9){

  VAR_10 = VAR_10 +
   ((VAR_6 - VAR_10) / 2);
 } else {

  if (VAR_10 > VAR_7) {

   VAR_10--;
  } else {


   FUNC_3(VAR_8, VAR_12);
   return VAR_0;
  }
 }

 FUNC_1(VAR_8, VAR_2, (VAR_11 &~ VAR_3) |
  ((VAR_10 << VAR_4) & VAR_3));

 FUNC_3(VAR_8, VAR_12);
 return VAR_1;
}
