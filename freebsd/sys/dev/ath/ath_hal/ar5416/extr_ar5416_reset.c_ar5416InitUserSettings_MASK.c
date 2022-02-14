
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct ath_hal_5212 {int ah_miscMode; scalar_t__ ah_sifstime; scalar_t__ ah_slottime; scalar_t__ ah_acktimeout; scalar_t__ ah_ctstimeout; } ;
struct ath_hal {int dummy; } ;
struct TYPE_4__ {scalar_t__ ah_globaltxtimeout; } ;
struct TYPE_3__ {int ah_diagreg; } ;


 struct ath_hal_5212* FUNC_0 (struct ath_hal*) ;
 TYPE_2__* FUNC_1 (struct ath_hal*) ;
 TYPE_1__* FUNC_2 (struct ath_hal*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct ath_hal*,int ) ;
 int FUNC_4 (struct ath_hal*,int ,int) ;
 int FUNC_5 (struct ath_hal*,scalar_t__) ;
 int FUNC_6 (struct ath_hal*,scalar_t__) ;
 int FUNC_7 (struct ath_hal*,scalar_t__) ;
 int FUNC_8 (struct ath_hal*,scalar_t__) ;
 int FUNC_9 (struct ath_hal*,scalar_t__) ;

__attribute__((used)) static void
FUNC_10(struct ath_hal *VAR_2)
{
 struct ath_hal_5212 *VAR_3 = FUNC_0(VAR_2);


 if (VAR_3->ah_miscMode != 0)
  FUNC_4(VAR_2, VAR_1, FUNC_3(VAR_2, VAR_1)
      | VAR_3->ah_miscMode);
 if (VAR_3->ah_sifstime != (u_int) -1)
  FUNC_7(VAR_2, VAR_3->ah_sifstime);
 if (VAR_3->ah_slottime != (u_int) -1)
  FUNC_8(VAR_2, VAR_3->ah_slottime);
 if (VAR_3->ah_acktimeout != (u_int) -1)
  FUNC_5(VAR_2, VAR_3->ah_acktimeout);
 if (VAR_3->ah_ctstimeout != (u_int) -1)
  FUNC_6(VAR_2, VAR_3->ah_ctstimeout);
 if (FUNC_2(VAR_2)->ah_diagreg != 0)
  FUNC_4(VAR_2, VAR_0, FUNC_2(VAR_2)->ah_diagreg);
 if (FUNC_1(VAR_2)->ah_globaltxtimeout != (u_int) -1)
         FUNC_9(VAR_2, FUNC_1(VAR_2)->ah_globaltxtimeout);
}
