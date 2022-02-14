
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct axp2xx_reg_sc {TYPE_1__* def; } ;
struct TYPE_2__ {int voltage_nstep; int voltage_min; int voltage_step; } ;



__attribute__((used)) static void
FUNC_0(struct axp2xx_reg_sc *VAR_0, uint8_t VAR_1, int *VAR_2)
{
 if (VAR_1 < VAR_0->def->voltage_nstep)
  *VAR_2 = VAR_0->def->voltage_min + VAR_1 * VAR_0->def->voltage_step;
 else
  *VAR_2 = VAR_0->def->voltage_min +
         (VAR_0->def->voltage_nstep * VAR_0->def->voltage_step);
 *VAR_2 *= 1000;
}
