
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
struct ath_hal {int dummy; } ;
struct ath_desc {int dummy; } ;
struct ar5212_desc {int ds_ctl1; scalar_t__ ds_rxstatus1; scalar_t__ ds_rxstatus0; scalar_t__ ds_ctl0; } ;
typedef int HAL_BOOL ;


 int VAR_0 ;
 struct ar5212_desc* FUNC_0 (struct ath_desc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;

HAL_BOOL
FUNC_2(struct ath_hal *VAR_4, struct ath_desc *VAR_5,
 uint32_t VAR_6, u_int VAR_7)
{
 struct ar5212_desc *VAR_8 = FUNC_0(VAR_5);

 FUNC_1((VAR_6 &~ VAR_1) == 0);

 VAR_8->ds_ctl0 = 0;
 VAR_8->ds_ctl1 = VAR_6 & VAR_1;

 if (VAR_7 & VAR_3)
  VAR_8->ds_ctl1 |= VAR_2;
 VAR_8->ds_rxstatus0 = VAR_8->ds_rxstatus1 = 0;

 return VAR_0;
}
