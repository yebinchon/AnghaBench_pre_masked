
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct ath_hal {int dummy; } ;
typedef int const HAL_RATE_TABLE ;
 int const* FUNC_0 (struct ath_hal*,int) ;
 int const VAR_0 ;
 int const VAR_1 ;
 int FUNC_1 (struct ath_hal*,int const*) ;

const HAL_RATE_TABLE *
FUNC_2(struct ath_hal *VAR_2, u_int VAR_3)
{
 HAL_RATE_TABLE *VAR_4;
 switch (VAR_3) {
 case 130:
 case 128:
 case 129:
  VAR_4 = &VAR_1;
  break;
 case 133:
 case 131:
 case 132:
  VAR_4 = &VAR_0;
  break;
 default:
  return FUNC_0(VAR_2, VAR_3);
 }
 FUNC_1(VAR_2, VAR_4);
 return VAR_4;
}
