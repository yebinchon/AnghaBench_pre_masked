
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ath_hal {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ath_hal*,int ) ;

uint32_t
FUNC_1(struct ath_hal *VAR_3, uint32_t VAR_4)
{
 if (VAR_4 < VAR_2) {
  uint32_t VAR_5 = FUNC_0(VAR_3, VAR_0);
  VAR_5 = ((VAR_5 & VAR_1) >> VAR_4) & 0x1;
  return VAR_5;
 } else {
  return 0xffffffff;
 }
}
