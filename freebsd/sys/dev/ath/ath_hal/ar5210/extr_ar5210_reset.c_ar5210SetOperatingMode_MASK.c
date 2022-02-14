
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ath_hal_5210 {int ah_staId1Defaults; } ;
struct ath_hal {int dummy; } ;


 struct ath_hal_5210* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;




 int FUNC_1 (struct ath_hal*,int ) ;
 int FUNC_2 (struct ath_hal*,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct ath_hal *VAR_6, int VAR_7)
{
 struct ath_hal_5210 *VAR_8 = FUNC_0(VAR_6);
 uint32_t VAR_9;

 VAR_9 = FUNC_1(VAR_6, VAR_0) & 0xffff;
 switch (VAR_7) {
 case 131:
  FUNC_2(VAR_6, VAR_0, VAR_9
   | VAR_2
   | VAR_4
   | VAR_3
   | VAR_8->ah_staId1Defaults);
  break;
 case 130:
  FUNC_2(VAR_6, VAR_0, VAR_9
   | VAR_1
   | VAR_4
   | VAR_3
   | VAR_8->ah_staId1Defaults);
  break;
 case 128:
  FUNC_2(VAR_6, VAR_0, VAR_9
   | VAR_4
   | VAR_5
   | VAR_8->ah_staId1Defaults);
  break;
 case 129:
  FUNC_2(VAR_6, VAR_0, VAR_9
   | VAR_4
   | VAR_8->ah_staId1Defaults);
  break;
 }
}
