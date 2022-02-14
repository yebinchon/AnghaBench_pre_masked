
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {TYPE_1__* currStep; } ;
struct ath_hal_5212 {TYPE_2__ ah_gainValues; } ;
struct ath_hal {int dummy; } ;
struct TYPE_3__ {int* paramVal; } ;
typedef TYPE_2__ GAIN_VALUES ;


 struct ath_hal_5212* FUNC_0 (struct ath_hal*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ath_hal*) ;
 int FUNC_3 (struct ath_hal*,int) ;
 int FUNC_4 (int ,int,int,int ) ;

__attribute__((used)) static uint32_t
FUNC_5(struct ath_hal *VAR_0)
{
 struct ath_hal_5212 *VAR_1 = FUNC_0(VAR_0);
 uint32_t VAR_2;

 FUNC_1(FUNC_2(VAR_0));

 VAR_2 = 0;
 if (FUNC_4(FUNC_3(VAR_0, 7), 1, 36, 0) == 1) {
  const GAIN_VALUES *VAR_3 = &VAR_1->ah_gainValues;
  uint32_t VAR_4 = VAR_3->currStep->paramVal[0];
  uint32_t VAR_5 =
   FUNC_4(FUNC_3(VAR_0, 7), 4, 32, 0);
  switch (VAR_4) {
  case 0 :
   VAR_2 = 0;
   break;
  case 1 :
   VAR_2 = VAR_5;
   break;
  case 2 :
   VAR_2 = 2 * VAR_5 - 5;
   break;
  case 3 :
   VAR_2 = 2 * VAR_5;
   break;
  }
 }
 return VAR_2;
}
