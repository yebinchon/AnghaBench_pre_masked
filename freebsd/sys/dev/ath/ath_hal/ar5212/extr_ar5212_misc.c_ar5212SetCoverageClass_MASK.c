
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int u_int ;
struct ath_hal {int dummy; } ;
struct TYPE_2__ {int ah_coverageClass; int ah_curchan; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct ath_hal*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_4 (struct ath_hal*,int ,int) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (struct ath_hal*,int) ;

void
FUNC_7(struct ath_hal *VAR_12, uint8_t VAR_13, int VAR_14)
{
 uint32_t VAR_15, VAR_16, VAR_17;
 u_int VAR_18;

 FUNC_0(VAR_12)->ah_coverageClass = VAR_13;

 if (VAR_14) {
  if (FUNC_0(VAR_12)->ah_coverageClass == 0)
   return;


  if (!FUNC_1(FUNC_0(VAR_12)->ah_curchan))
   return;


  VAR_18 = FUNC_6(VAR_12, 1);


  VAR_15 = VAR_13 * 3 * VAR_18;
  VAR_17 = VAR_13 * 6 * VAR_18;
  if (FUNC_2(FUNC_0(VAR_12)->ah_curchan)) {
   VAR_15 += VAR_10;
   VAR_17 += VAR_7;
  } else if (FUNC_3(FUNC_0(VAR_12)->ah_curchan)) {
   VAR_15 += VAR_11;
   VAR_17 += VAR_8;
  } else {
   VAR_15 += VAR_9;
   VAR_17 += VAR_6;
  }





  VAR_16 = VAR_0 + (VAR_13 * 3 * VAR_18);




  FUNC_4(VAR_12, VAR_2, VAR_15);
  FUNC_4(VAR_12, VAR_1, VAR_17);
  FUNC_4(VAR_12, VAR_3,
     FUNC_5(VAR_16, VAR_5)
   | FUNC_5(VAR_16, VAR_4));
 }
}
