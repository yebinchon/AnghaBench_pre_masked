
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct ath_hal {int dummy; } ;
struct ath_desc {int dummy; } ;
struct ar5212_desc {int ds_ctl2; int ds_ctl3; } ;
typedef int HAL_BOOL ;


 int VAR_0 ;
 struct ar5212_desc* FUNC_0 (struct ath_desc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int) ;

HAL_BOOL
FUNC_4(struct ath_hal *VAR_8, struct ath_desc *VAR_9,
 u_int VAR_10, u_int VAR_11,
 u_int VAR_12, u_int VAR_13,
 u_int VAR_14, u_int VAR_15)
{
 struct ar5212_desc *VAR_16 = FUNC_0(VAR_9);

 if (VAR_11) {
  FUNC_1(FUNC_3(VAR_10));
  VAR_16->ds_ctl2 |= FUNC_2(VAR_11, VAR_2)
        | VAR_1
        ;
  VAR_16->ds_ctl3 |= (VAR_10 << VAR_5);
 }
 if (VAR_13) {
  FUNC_1(FUNC_3(VAR_12));
  VAR_16->ds_ctl2 |= FUNC_2(VAR_13, VAR_3)
        | VAR_1
        ;
  VAR_16->ds_ctl3 |= (VAR_12 << VAR_6);
 }
 if (VAR_15) {
  FUNC_1(FUNC_3(VAR_14));
  VAR_16->ds_ctl2 |= FUNC_2(VAR_15, VAR_4)
        | VAR_1
        ;
  VAR_16->ds_ctl3 |= (VAR_14 << VAR_7);
 }
 return VAR_0;
}
