
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
 int FUNC_0 (int) ;
 int FUNC_1 (struct ath_hal*,int ) ;
 int FUNC_2 (struct ath_hal*,int ,int ) ;

void
FUNC_3(struct ath_hal *VAR_4)
{
 uint32_t VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < 10; VAR_6++) {
  VAR_5 = FUNC_1(VAR_4, VAR_2);
  if ((VAR_5 & VAR_3) == 0)
   break;
  FUNC_0(10);
 }
 FUNC_2(VAR_4, VAR_0, VAR_1);
}
