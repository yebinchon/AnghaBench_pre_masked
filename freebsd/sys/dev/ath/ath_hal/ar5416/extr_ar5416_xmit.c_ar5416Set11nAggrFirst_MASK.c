
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int u_int ;
struct ath_hal {int dummy; } ;
struct ath_desc {int dummy; } ;
struct ar5416_desc {int ds_ctl1; int ds_ctl6; int ds_ctl0; int ds_ctl2; int ds_ctl3; } ;


 struct ar5416_desc* FUNC_0 (struct ath_desc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct ath_hal*) ;
 int VAR_7 ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int,int) ;
 int* VAR_8 ;

void
FUNC_5(struct ath_hal *VAR_9, struct ath_desc *VAR_10, u_int VAR_11,
    u_int VAR_12)
{
 struct ar5416_desc *VAR_13 = FUNC_0(VAR_10);
 uint32_t VAR_14;
 uint32_t VAR_15;
 uint8_t VAR_16;

 VAR_13->ds_ctl1 |= (VAR_3 | VAR_4);

 VAR_13->ds_ctl6 &= ~(VAR_0 | VAR_5);
 VAR_13->ds_ctl6 |= FUNC_4(VAR_11, VAR_0);
 VAR_13->ds_ctl6 |= FUNC_4(VAR_12, VAR_5);

 if (! FUNC_1(VAR_9)) {




  VAR_16 = FUNC_3(VAR_13->ds_ctl3, VAR_7);
  VAR_14 = VAR_13->ds_ctl0 & (VAR_2 | VAR_6);





  if (VAR_14 && (VAR_13->ds_ctl1 & VAR_3)) {
   VAR_15 = VAR_8[FUNC_2(VAR_16)];
   VAR_13->ds_ctl2 &= ~(VAR_1);
   VAR_13->ds_ctl2 |= FUNC_4(VAR_15, VAR_1);
  }
 }
}
