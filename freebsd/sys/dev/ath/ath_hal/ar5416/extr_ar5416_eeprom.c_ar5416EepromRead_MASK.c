
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int u_int ;
struct ath_hal {int dummy; } ;
typedef int HAL_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct ath_hal*,scalar_t__) ;
 int FUNC_2 (struct ath_hal*,scalar_t__,int,int ) ;

HAL_BOOL
FUNC_3(struct ath_hal *VAR_8, u_int VAR_9, uint16_t *VAR_10)
{
        FUNC_1(VAR_8, VAR_2 + (VAR_9 << VAR_3));
        if (!FUNC_2(VAR_8, VAR_4,
     VAR_5 | VAR_6, 0))
  return VAR_0;
        *VAR_10 = FUNC_0(FUNC_1(VAR_8, VAR_4),
     VAR_7);
 return VAR_1;
}
