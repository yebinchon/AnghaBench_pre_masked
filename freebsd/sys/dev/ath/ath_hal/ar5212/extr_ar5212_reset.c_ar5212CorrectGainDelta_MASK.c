
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct ath_hal_5212 {size_t* ah_ratesArray; int * ah_pcdacTable; } ;
struct ath_hal {scalar_t__ ah_magic; } ;
typedef int ratesIndex ;
typedef size_t int32_t ;
typedef size_t int16_t ;
struct TYPE_4__ {TYPE_1__* ah_eeprom; } ;
struct TYPE_3__ {size_t ee_cckOfdmGainDelta; } ;
typedef TYPE_1__ HAL_EEPROM ;


 struct ath_hal_5212* FUNC_0 (struct ath_hal*) ;
 TYPE_2__* FUNC_1 (struct ath_hal*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (size_t*) ;
 int FUNC_4 (size_t*,size_t*,int) ;
 size_t VAR_1 ;

__attribute__((used)) static void
FUNC_5(struct ath_hal *VAR_2, int VAR_3)
{

 struct ath_hal_5212 *VAR_4 = FUNC_0(VAR_2);
 const HAL_EEPROM *VAR_5 = FUNC_1(VAR_2)->ah_eeprom;
 int16_t VAR_6[(sizeof(VAR_4->ah_ratesArray) / sizeof(VAR_4->ah_ratesArray[0]))];
 uint16_t VAR_7, VAR_8, VAR_9;
 int32_t VAR_10;
 int16_t VAR_11;

 FUNC_2(VAR_2->ah_magic == VAR_0);

 VAR_11 = VAR_5->ee_cckOfdmGainDelta;


 FUNC_4(VAR_6, VAR_4->ah_ratesArray, sizeof(VAR_6));


 for (VAR_7 = 8; VAR_7 < 15; VAR_7++) {

  VAR_6[VAR_7] -= VAR_11;


  VAR_8 = 0;
  VAR_9 = 0;

  while (VAR_8 < 16) {
   if (VAR_6[VAR_7] < 0)
    VAR_6[VAR_7] = 0;
   if (VAR_8 == 8) {
    VAR_8 = 15;
    continue;
   }
   if (VAR_6[VAR_7] == VAR_4->ah_ratesArray[VAR_8]) {
    if (VAR_4->ah_ratesArray[VAR_8] == 0)
     VAR_6[VAR_7]++;
    else if (VAR_9 > 50) {




     VAR_6[VAR_7]++;
    } else
     VAR_6[VAR_7]--;

    VAR_8 = 0;
    VAR_9++;
   } else
    VAR_8++;
  }
  if (VAR_6[VAR_7] >= VAR_1)
   VAR_6[VAR_7] = VAR_1 -1;
  VAR_10 = VAR_4->ah_ratesArray[VAR_7] - VAR_3;
  if (VAR_10 < 0)
   VAR_10 = 0;





  FUNC_2(VAR_10 < VAR_1);
  FUNC_2(VAR_6[VAR_7] < VAR_1);
  VAR_4->ah_pcdacTable[VAR_6[VAR_7]] =
   VAR_4->ah_pcdacTable[VAR_10];
 }

 for (VAR_7 = 8; VAR_7 < 15; VAR_7++)
  VAR_4->ah_ratesArray[VAR_7] = VAR_6[VAR_7];

}
