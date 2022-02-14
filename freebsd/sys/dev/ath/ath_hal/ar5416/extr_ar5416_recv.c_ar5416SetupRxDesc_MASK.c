
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
struct ath_hal {int dummy; } ;
struct ath_desc {int dummy; } ;
struct ar5416_desc {int ds_ctl1; int u; int ds_rxstatus8; } ;
typedef int HAL_BOOL ;


 int VAR_0 ;
 struct ar5416_desc* FUNC_0 (struct ath_desc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int FUNC_2 (int *,int) ;

HAL_BOOL
FUNC_3(struct ath_hal *VAR_5, struct ath_desc *VAR_6,
    uint32_t VAR_7, u_int VAR_8)
{
 struct ar5416_desc *VAR_9 = FUNC_0(VAR_6);

 FUNC_1((VAR_7 &~ VAR_1) == 0);

 VAR_9->ds_ctl1 = VAR_7 & VAR_1;
 if (VAR_8 & VAR_4)
  VAR_9->ds_ctl1 |= VAR_3;


 VAR_9->ds_rxstatus8 &= ~VAR_2;


 FUNC_2(&(VAR_9->u), sizeof(VAR_9->u));

 return VAR_0;
}
