
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
 int FUNC_0 (struct ath_hal*,int ) ;
 int FUNC_1 (struct ath_hal*,int ,int) ;

__attribute__((used)) static HAL_BOOL
FUNC_2(struct ath_hal *VAR_4, uint32_t VAR_5)
{
 uint32_t VAR_6;

 if (VAR_5 >= 64)
  return (VAR_0);
 if (VAR_5 >= 32) {
  VAR_6 = FUNC_0(VAR_4, VAR_3);
  FUNC_1(VAR_4, VAR_3, (VAR_6 &~ (1<<(VAR_5-32))));
 } else {
  VAR_6 = FUNC_0(VAR_4, VAR_2);
  FUNC_1(VAR_4, VAR_2, (VAR_6 &~ (1<<VAR_5)));
 }
 return VAR_1;
}
