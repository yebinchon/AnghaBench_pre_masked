
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct ath_hal {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath_hal*,int ,int) ;

void
FUNC_1(struct ath_hal *VAR_2, uint64_t VAR_3)
{
 FUNC_0(VAR_2, VAR_0, VAR_3 & 0xffffffff);
 FUNC_0(VAR_2, VAR_1, (VAR_3 >> 32) & 0xffffffff);
}
