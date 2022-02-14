
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct ath_hal_5416 {int ah_btCoexFlag; } ;
struct ath_hal {int dummy; } ;


 struct ath_hal_5416* FUNC_0 (struct ath_hal*) ;
 int FUNC_1 (struct ath_hal*) ;

 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct ath_hal*,int,int) ;
 int FUNC_3 (struct ath_hal*) ;

void
FUNC_4(struct ath_hal *VAR_2, u_int32_t VAR_3, u_int32_t VAR_4)
{
 struct ath_hal_5416 *VAR_5 = FUNC_0(VAR_2);

 switch (VAR_3) {
 case 128:
  if (FUNC_1(VAR_2)) {
   VAR_5->ah_btCoexFlag |= VAR_0;
   if (VAR_4)
    VAR_5->ah_btCoexFlag |=
        VAR_1;
   else
    VAR_5->ah_btCoexFlag &=
        ~VAR_1;
   FUNC_3(VAR_2);
  }
  break;
 default:
  FUNC_2(VAR_2, VAR_3, VAR_4);
  break;
 }
}
