
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct ath_hal_9300 {int * ah_keytype; } ;
struct ath_hal {int dummy; } ;
struct ath_desc {int dummy; } ;
typedef int HAL_PKT_TYPE ;
typedef int HAL_KEY_TYPE ;
typedef int HAL_BOOL ;


 struct ath_hal_9300* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (struct ath_hal*,struct ath_desc*,size_t,int ,size_t,size_t,int ,size_t) ;

HAL_BOOL
FUNC_2(struct ath_hal *VAR_2, struct ath_desc *VAR_3,
    u_int VAR_4, u_int VAR_5, HAL_PKT_TYPE VAR_6, u_int VAR_7,
    u_int VAR_8, u_int VAR_9, u_int VAR_10, u_int VAR_11, u_int VAR_12,
    u_int VAR_13, u_int VAR_14, u_int VAR_15,
    u_int VAR_16, u_int VAR_17)
{
 struct ath_hal_9300 *VAR_18 = FUNC_0(VAR_2);

 HAL_KEY_TYPE VAR_19 = 0;

 if (VAR_10 != VAR_1)
  VAR_19 = VAR_18->ah_keytype[VAR_10];


 FUNC_1(VAR_2, VAR_3, VAR_4, VAR_6, VAR_7, VAR_10,
     VAR_19, VAR_12);

 return VAR_0;
}
