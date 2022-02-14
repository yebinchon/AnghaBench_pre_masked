
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ath_hal {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;




 int FUNC_0 (struct ath_hal*,int ,int ) ;
 int FUNC_1 (struct ath_hal*,int ) ;
 int FUNC_2 (struct ath_hal*,int ,int ) ;
 int FUNC_3 (struct ath_hal*,int ,int) ;

void
FUNC_4(struct ath_hal *VAR_6, int VAR_7)
{
 uint32_t VAR_8;

 VAR_8 = FUNC_1(VAR_6, VAR_2);
 VAR_8 &= ~(VAR_5 | VAR_3);
 switch (VAR_7) {
 case 131:
  FUNC_3(VAR_6, VAR_2, VAR_8 | VAR_5
     | VAR_4);
  FUNC_0(VAR_6, VAR_0, VAR_1);
  break;
 case 130:
  FUNC_3(VAR_6, VAR_2, VAR_8 | VAR_3
     | VAR_4);
  FUNC_2(VAR_6, VAR_0, VAR_1);
  break;
 case 128:
 case 129:
  FUNC_3(VAR_6, VAR_2, VAR_8 | VAR_4);
  break;
 }
}
