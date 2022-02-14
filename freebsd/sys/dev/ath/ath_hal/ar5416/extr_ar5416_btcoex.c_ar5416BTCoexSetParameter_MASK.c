
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
struct ath_hal_5416 {int ah_btCoexFlag; } ;
struct ath_hal {int dummy; } ;
struct TYPE_3__ {int ath_hal_desc_tpc; } ;
struct TYPE_4__ {int ah_extra_txpow; int ah_power_limit; TYPE_1__ ah_config; } ;


 struct ath_hal_5416* FUNC_0 (struct ath_hal*) ;
 TYPE_2__* FUNC_1 (struct ath_hal*) ;
 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;

 int FUNC_2 (struct ath_hal*,int ,int ) ;
 int FUNC_3 (struct ath_hal*,int ,int ,int ) ;

void
FUNC_4(struct ath_hal *VAR_5, u_int32_t VAR_6, u_int32_t VAR_7)
{
 struct ath_hal_5416 *VAR_8 = FUNC_0(VAR_5);

 switch (VAR_6) {
 case 128:
  if (VAR_7) {
   VAR_8->ah_btCoexFlag |= VAR_2;
   FUNC_2(VAR_5, VAR_0, VAR_4);
  } else {
   VAR_8->ah_btCoexFlag &= ~VAR_2;
   FUNC_2(VAR_5, VAR_0, VAR_3);
  }
  break;
 case 130:

  break;
 default:
   break;
 }
}
