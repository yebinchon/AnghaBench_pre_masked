
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ u_int ;
struct ath_hal {int dummy; } ;
struct ath_desc {int dummy; } ;
struct ar5416_desc {int ds_ctl1; int ds_ctl2; int ds_ctl3; } ;


 struct ar5416_desc* FUNC_0 (struct ath_desc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ath_hal*) ;
 int VAR_2 ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (scalar_t__,int ) ;
 scalar_t__* VAR_3 ;

void
FUNC_5(struct ath_hal *VAR_4, struct ath_desc *VAR_5,
                                                  u_int VAR_6)
{
 struct ar5416_desc *VAR_7 = FUNC_0(VAR_5);
 uint32_t VAR_8 = 0;
 uint8_t VAR_9;

 if (! FUNC_1(VAR_4)) {




  VAR_9 = FUNC_3(VAR_7->ds_ctl3, VAR_2);





  if (VAR_7->ds_ctl1 & VAR_1) {
   VAR_8 = VAR_3[FUNC_2(VAR_9)];
  }
 }

 VAR_7->ds_ctl2 &= ~VAR_0;
 VAR_7->ds_ctl2 |= FUNC_4(VAR_8 + VAR_6, VAR_0);
}
