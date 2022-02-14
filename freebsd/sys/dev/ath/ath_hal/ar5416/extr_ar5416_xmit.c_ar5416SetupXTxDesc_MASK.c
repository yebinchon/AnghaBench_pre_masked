
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct ath_hal {int dummy; } ;
struct ath_desc {int dummy; } ;
struct ar5416_desc {int ds_ctl3; int ds_ctl2; } ;
typedef int HAL_BOOL ;


 int VAR_0 ;
 struct ar5416_desc* FUNC_0 (struct ath_desc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int) ;

HAL_BOOL
FUNC_4(struct ath_hal *VAR_7, struct ath_desc *VAR_8,
 u_int VAR_9, u_int VAR_10,
 u_int VAR_11, u_int VAR_12,
 u_int VAR_13, u_int VAR_14)
{
 struct ar5416_desc *VAR_15 = FUNC_0(VAR_8);

 if (VAR_10) {
  FUNC_1(FUNC_3(VAR_9));
  VAR_15->ds_ctl2 |= FUNC_2(VAR_10, VAR_1);
  VAR_15->ds_ctl3 |= (VAR_9 << VAR_4);
 }
 if (VAR_12) {
  FUNC_1(FUNC_3(VAR_11));
  VAR_15->ds_ctl2 |= FUNC_2(VAR_12, VAR_2);
  VAR_15->ds_ctl3 |= (VAR_11 << VAR_5);
 }
 if (VAR_14) {
  FUNC_1(FUNC_3(VAR_13));
  VAR_15->ds_ctl2 |= FUNC_2(VAR_14, VAR_3);
  VAR_15->ds_ctl3 |= (VAR_13 << VAR_6);
 }
 return VAR_0;
}
