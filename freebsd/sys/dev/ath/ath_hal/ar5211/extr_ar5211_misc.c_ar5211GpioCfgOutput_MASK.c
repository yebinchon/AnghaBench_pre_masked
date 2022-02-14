
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ath_hal {int dummy; } ;
typedef int HAL_GPIO_MUX_TYPE ;
typedef int HAL_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ath_hal*,int ) ;
 int FUNC_2 (struct ath_hal*,int ,int) ;

HAL_BOOL
FUNC_3(struct ath_hal *VAR_5, uint32_t VAR_6, HAL_GPIO_MUX_TYPE VAR_7)
{
 uint32_t VAR_8;

 FUNC_0(VAR_6 < VAR_4);

 VAR_8 = FUNC_1(VAR_5, VAR_1);
 VAR_8 &= ~(VAR_2 << (VAR_6 * VAR_3));
 VAR_8 |= VAR_2 << (VAR_6 * VAR_3);

 FUNC_2(VAR_5, VAR_1, VAR_8);
 return VAR_0;
}
