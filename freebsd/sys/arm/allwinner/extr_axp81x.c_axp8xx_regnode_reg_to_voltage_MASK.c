
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct axp8xx_reg_sc {TYPE_1__* def; } ;
struct TYPE_2__ {int voltage_nstep1; int voltage_min; int voltage_step1; int voltage_step2; } ;



__attribute__((used)) static void
FUNC_0(struct axp8xx_reg_sc *VAR_0, uint8_t VAR_1, int *VAR_2)
{
 if (VAR_1 < VAR_0->def->voltage_nstep1)
  *VAR_2 = VAR_0->def->voltage_min + VAR_1 * VAR_0->def->voltage_step1;
 else
  *VAR_2 = VAR_0->def->voltage_min +
      (VAR_0->def->voltage_nstep1 * VAR_0->def->voltage_step1) +
      ((VAR_1 - VAR_0->def->voltage_nstep1) * VAR_0->def->voltage_step2);
 *VAR_2 *= 1000;
}
