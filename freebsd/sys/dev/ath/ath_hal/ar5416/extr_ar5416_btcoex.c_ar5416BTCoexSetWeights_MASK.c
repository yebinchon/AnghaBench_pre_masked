
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct ath_hal_5416 {int ah_btCoexBTWeight; int ah_btCoexWLANWeight; } ;
struct ath_hal {int dummy; } ;


 struct ath_hal_5416* FUNC_0 (struct ath_hal*) ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 scalar_t__ FUNC_1 (struct ath_hal*) ;
void
FUNC_2(struct ath_hal *VAR_6, u_int32_t VAR_7)
{
 struct ath_hal_5416 *VAR_8 = FUNC_0(VAR_6);

 if (FUNC_1(VAR_6)) {

  switch (VAR_7) {
  case 131:

  case 133:
   VAR_8->ah_btCoexBTWeight = VAR_0;
   VAR_8->ah_btCoexWLANWeight = VAR_2;
   break;
  case 130:
   VAR_8->ah_btCoexBTWeight = VAR_0;
   VAR_8->ah_btCoexWLANWeight = VAR_4;
   break;
  case 132:
   VAR_8->ah_btCoexBTWeight = VAR_0;
   VAR_8->ah_btCoexWLANWeight =
       VAR_1;
   break;
  case 129:
   VAR_8->ah_btCoexBTWeight = VAR_0;
   VAR_8->ah_btCoexWLANWeight =
       VAR_3;
   break;
  case 128:
  case 134:
   VAR_8->ah_btCoexBTWeight = VAR_0;
   VAR_8->ah_btCoexWLANWeight = VAR_5;
   break;
  default:

   VAR_8->ah_btCoexBTWeight = VAR_7 & 0xffff;
   VAR_8->ah_btCoexWLANWeight = VAR_7 >> 16;
   break;
  }
 } else {
  switch (VAR_7) {
  case 131:

  case 133:
   VAR_8->ah_btCoexBTWeight = VAR_0;
   VAR_8->ah_btCoexWLANWeight = VAR_2;
   break;
  case 130:
   VAR_8->ah_btCoexBTWeight = VAR_0;
   VAR_8->ah_btCoexWLANWeight = VAR_4;
   break;
  case 132:
   VAR_8->ah_btCoexBTWeight = VAR_0;
   VAR_8->ah_btCoexWLANWeight =
       VAR_1;
   break;
  case 129:
   VAR_8->ah_btCoexBTWeight = VAR_0;
   VAR_8->ah_btCoexWLANWeight =
       VAR_3;
   break;
  case 128:
  case 134:
   VAR_8->ah_btCoexBTWeight = VAR_0;
   VAR_8->ah_btCoexWLANWeight = VAR_5;
   break;
  default:

   VAR_8->ah_btCoexBTWeight = VAR_7 & 0xffff;
   VAR_8->ah_btCoexWLANWeight = VAR_7 >> 16;
   break;
  }
 }
}
