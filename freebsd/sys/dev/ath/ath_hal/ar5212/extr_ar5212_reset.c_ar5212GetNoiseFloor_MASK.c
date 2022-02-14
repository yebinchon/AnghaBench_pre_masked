
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hal {int dummy; } ;
typedef int int16_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ath_hal*,int ) ;

int16_t
FUNC_2(struct ath_hal *VAR_0)
{
 int16_t VAR_1 = (FUNC_1(VAR_0, FUNC_0(25)) >> 19) & 0x1ff;
 if (VAR_1 & 0x100)
  VAR_1 = 0 - ((VAR_1 ^ 0x1ff) + 1);
 return VAR_1;
}
