
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ath_hal {int dummy; } ;
struct TYPE_3__ {int value; int addr; } ;
typedef TYPE_1__ HAL_REGWRITE ;


 int FUNC_0 (struct ath_hal*,int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct ath_hal *VAR_0, const HAL_REGWRITE *VAR_1, int VAR_2)
{
 while (VAR_2 >= sizeof(HAL_REGWRITE)) {
  FUNC_0(VAR_0, VAR_1->addr, VAR_1->value);
  VAR_1++, VAR_2 -= sizeof(HAL_REGWRITE);
 }
}
