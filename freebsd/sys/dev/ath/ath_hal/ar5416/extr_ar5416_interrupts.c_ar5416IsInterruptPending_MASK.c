
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
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct ath_hal*) ;
 int FUNC_1 (struct ath_hal*,int ) ;

HAL_BOOL
FUNC_2(struct ath_hal *VAR_7)
{
 uint32_t VAR_8;

 if (FUNC_0(VAR_7))
  return VAR_1;





 VAR_8 = FUNC_1(VAR_7, VAR_2);
 if (VAR_8 != VAR_4 && (VAR_8 & VAR_3) != 0)
  return VAR_1;

 VAR_8 = FUNC_1(VAR_7, VAR_5);
 if (VAR_8 != VAR_4 && (VAR_8 & VAR_6))
  return VAR_1;

 return VAR_0;
}
