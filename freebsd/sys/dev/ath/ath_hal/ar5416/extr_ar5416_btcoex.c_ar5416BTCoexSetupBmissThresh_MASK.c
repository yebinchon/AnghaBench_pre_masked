
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct ath_hal_5416 {int ah_btCoexMode2; } ;
struct ath_hal {int dummy; } ;


 struct ath_hal_5416* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;

void
FUNC_2(struct ath_hal *VAR_1, u_int32_t VAR_2)
{
 struct ath_hal_5416 *VAR_3 = FUNC_0(VAR_1);

 VAR_3->ah_btCoexMode2 |= FUNC_1(VAR_2, VAR_0);
}
