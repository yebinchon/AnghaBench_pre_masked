
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ath_hal {int dummy; } ;
typedef int HAL_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;



 int FUNC_1 (struct ath_hal*,int ,int) ;
 int FUNC_2 (struct ath_hal*,int) ;
 int FUNC_3 (struct ath_hal*) ;

HAL_BOOL
FUNC_4(struct ath_hal *VAR_4, uint32_t VAR_5)
{



 FUNC_1(VAR_4, VAR_1,
     VAR_2 | VAR_3);

 switch (VAR_5) {
 case 129:
  return FUNC_3(VAR_4);
 case 128:
 case 130:
  return FUNC_2(VAR_4, VAR_5);
 default:
  FUNC_0(VAR_0);
  return VAR_0;
 }
}
