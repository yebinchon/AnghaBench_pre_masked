
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint16_t ;
struct ath_hal_5212 {int* ah_decompMask; } ;
struct ath_hal {int dummy; } ;
typedef int HAL_BOOL ;


 struct ath_hal_5212* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_1 (struct ath_hal*,int ,size_t) ;

HAL_BOOL
FUNC_2(struct ath_hal *VAR_6, uint16_t VAR_7, int VAR_8)
{
 struct ath_hal_5212 *VAR_9 = FUNC_0(VAR_6);

        if (VAR_7 >= VAR_5)
                return VAR_0;
        FUNC_1(VAR_6, VAR_2, VAR_7);
        FUNC_1(VAR_6, VAR_3, VAR_8 ? VAR_4 : 0);
        VAR_9->ah_decompMask[VAR_7] = VAR_8;

        return VAR_1;
}
