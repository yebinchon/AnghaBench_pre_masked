
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct ath_hal {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct ath_hal*,int ,int ,int*) ;

int
FUNC_1(struct ath_hal *VAR_2)
{
 u_int32_t VAR_3;
 if (FUNC_0(VAR_2, VAR_0, 0, &VAR_3) != VAR_1)
  return 1;
 return ((VAR_3 & 0x500000) == 0);
}
