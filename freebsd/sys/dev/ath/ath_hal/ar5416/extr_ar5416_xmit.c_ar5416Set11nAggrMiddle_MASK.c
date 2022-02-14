
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
struct ath_hal {int dummy; } ;
struct ath_desc {int dummy; } ;
struct ar5416_desc {int ds_ctl1; int ds_ctl6; } ;


 struct ar5416_desc* FUNC_0 (struct ath_desc*) ;
 int * FUNC_1 (struct ath_hal*,struct ar5416_desc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ) ;

void
FUNC_3(struct ath_hal *VAR_5, struct ath_desc *VAR_6, u_int VAR_7)
{
 struct ar5416_desc *VAR_8 = FUNC_0(VAR_6);
 uint32_t *VAR_9 = FUNC_1(VAR_5,VAR_8);

 VAR_8->ds_ctl1 |= (VAR_1 | VAR_2);

 VAR_8->ds_ctl6 &= ~VAR_3;
 VAR_8->ds_ctl6 |= FUNC_2(VAR_7, VAR_3);
 VAR_8->ds_ctl6 &= ~VAR_0;





 VAR_9[9] &= ~VAR_4;
}
