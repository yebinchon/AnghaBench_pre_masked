
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
 int FUNC_0 (int) ;
 int FUNC_1 (struct ath_hal*,int ) ;
 int FUNC_2 (struct ath_hal*,int ,int) ;

HAL_BOOL
FUNC_3(struct ath_hal *VAR_3, uint32_t VAR_4, uint32_t VAR_5)
{
 uint32_t VAR_6;

 FUNC_0(VAR_4 < VAR_2);

 VAR_6 = FUNC_1(VAR_3, VAR_1);
 VAR_6 &= ~(1 << VAR_4);
 VAR_6 |= (VAR_5&1) << VAR_4;

 FUNC_2(VAR_3, VAR_1, VAR_6);
 return VAR_0;
}
