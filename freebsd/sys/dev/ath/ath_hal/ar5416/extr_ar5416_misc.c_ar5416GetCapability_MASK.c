
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct ath_hal {int ah_macVersion; } ;
struct TYPE_2__ {int ah_miscMode; } ;
typedef int HAL_STATUS ;
typedef int HAL_CAPABILITY_TYPE ;


 TYPE_1__* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int FUNC_1 (struct ath_hal*) ;
 int FUNC_2 (struct ath_hal*) ;
 int FUNC_3 (struct ath_hal*) ;
 int VAR_1 ;
 int VAR_2 ;







 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct ath_hal*,int,int,int*) ;

HAL_STATUS
FUNC_5(struct ath_hal *VAR_6, HAL_CAPABILITY_TYPE VAR_7,
        uint32_t VAR_8, uint32_t *VAR_9)
{
 switch (VAR_7) {
 case 131:
  switch (VAR_8) {
  case 133:
   return (FUNC_1(VAR_6) || FUNC_3(VAR_6)) ? VAR_5 : VAR_3;
  case 134:
   return (FUNC_1(VAR_6) || FUNC_3(VAR_6)) ? VAR_5 : VAR_3;
  case 132:
   return FUNC_2(VAR_6) ? VAR_5 : VAR_3;
  }
  break;
 case 128:
  return ((VAR_6->ah_macVersion == VAR_1) ||
      (VAR_6->ah_macVersion == VAR_2) ||
      FUNC_1(VAR_6) || FUNC_3(VAR_6)) ?
   VAR_5 : VAR_3;
 case 130:
  return VAR_4;
 case 129:
  if (VAR_8 == 0)
   return (VAR_5);
  if (VAR_8 != 1)
   return (VAR_3);
  (*VAR_9) =
      !! (FUNC_0(VAR_6)->ah_miscMode & VAR_0);
  return (VAR_5);
 default:
  break;
 }
 return FUNC_4(VAR_6, VAR_7, VAR_8, VAR_9);
}
