
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
struct ath_hal {int dummy; } ;
struct ath_desc {int dummy; } ;
struct ar9300_txc {int ds_ctl17; } ;
typedef int HAL_KEY_TYPE ;
typedef int HAL_DMA_ADDR ;
typedef int HAL_BOOL ;


 struct ar9300_txc* FUNC_0 (struct ath_desc const*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct ath_hal*,struct ath_desc*,int *,int *,int ,int ,int ,int ,int ,struct ath_desc const*) ;

HAL_BOOL
FUNC_3(struct ath_hal *VAR_1, struct ath_desc *VAR_2,
    HAL_DMA_ADDR *VAR_3, uint32_t *VAR_4, u_int VAR_5, u_int VAR_6,
    HAL_BOOL VAR_7, HAL_BOOL VAR_8,
    const struct ath_desc *VAR_9)
{
 HAL_KEY_TYPE VAR_10 = 0;
 const struct ar9300_txc *VAR_11 = FUNC_0(VAR_9);







 VAR_10 = FUNC_1(VAR_11->ds_ctl17, VAR_0);

 return FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
     VAR_6, VAR_10, VAR_7, VAR_8, VAR_9);
}
