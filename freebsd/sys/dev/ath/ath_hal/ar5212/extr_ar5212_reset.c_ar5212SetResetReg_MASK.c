
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_int32_t ;
typedef int u_int16_t ;
struct ath_hal {int dummy; } ;
typedef int reg16 ;
struct TYPE_4__ {int ah_phyPowerOn; } ;
struct TYPE_3__ {scalar_t__ ah_bustype; scalar_t__ ah_ispcie; } ;
typedef scalar_t__ HAL_BOOL ;


 TYPE_2__* FUNC_0 (struct ath_hal*) ;
 TYPE_1__* FUNC_1 (struct ath_hal*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (struct ath_hal*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct ath_hal*,int ) ;
 int FUNC_5 (struct ath_hal*,int ,int) ;
 int VAR_15 ;
 scalar_t__ FUNC_6 (struct ath_hal*) ;
 scalar_t__ FUNC_7 (struct ath_hal*,int ,scalar_t__) ;
 int FUNC_8 (struct ath_hal*,int ,int *,int) ;
 scalar_t__ FUNC_9 (struct ath_hal*,int ,int,int) ;
 scalar_t__ FUNC_10 () ;

__attribute__((used)) static HAL_BOOL
FUNC_11(struct ath_hal *VAR_16, uint32_t VAR_17)
{
 uint32_t VAR_18 = VAR_17 ? VAR_17 : ~0;
 HAL_BOOL VAR_19;


 if (FUNC_1(VAR_16)->ah_ispcie) {
  VAR_17 &= ~VAR_10;
 }

 if (VAR_17 & (VAR_9 | VAR_10)) {




  VAR_19 = FUNC_7(VAR_16, VAR_13, VAR_0);

  if (VAR_19 != VAR_0) {
   return VAR_19;
  }




  FUNC_5(VAR_16, VAR_4, VAR_5);
  FUNC_4(VAR_16, VAR_4);

  if (FUNC_6(VAR_16) != VAR_0) {





   FUNC_3(15);
   FUNC_4(VAR_16, VAR_11);

   VAR_17 |= VAR_9 | VAR_8;

   if (! FUNC_1(VAR_16)->ah_ispcie) {
    VAR_17 |= VAR_10;
   }
  } else {




   VAR_17 &= ~VAR_10;


   FUNC_3(15);
   FUNC_4(VAR_16, VAR_11);
  }
 }

 (void) FUNC_4(VAR_16, VAR_11);
 FUNC_5(VAR_16, VAR_7, VAR_17);
 FUNC_3(15);

 VAR_18 &= (VAR_9 | VAR_8);
 VAR_17 &= (VAR_9 | VAR_8);
 VAR_19 = FUNC_9(VAR_16, VAR_7, VAR_18, VAR_17);
        if ((VAR_17 & VAR_9) == 0) {
  if (FUNC_10()) {



   VAR_18 = VAR_14 | VAR_2;

   VAR_18 |= VAR_3;

   FUNC_5(VAR_16, VAR_1, VAR_18);
  } else
   FUNC_5(VAR_16, VAR_1, VAR_14);
  if (FUNC_7(VAR_16, VAR_13, VAR_0))
   (void) FUNC_4(VAR_16, VAR_6);
 }


 FUNC_0(VAR_16)->ah_phyPowerOn = ((VAR_17 & VAR_8) == 0);
 return VAR_19;
}
