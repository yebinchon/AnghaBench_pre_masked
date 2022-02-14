
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct axp2xx_reg_sc {TYPE_1__* def; } ;
struct TYPE_2__ {int voltage_min; int voltage_nstep; int voltage_step; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct axp2xx_reg_sc *VAR_1, int VAR_2,
    int VAR_3, uint8_t *VAR_4)
{
 uint8_t VAR_5;
 int VAR_6, VAR_7;

 VAR_5 = 0;
 VAR_7 = VAR_1->def->voltage_min * 1000;

 for (VAR_6 = 0; VAR_6 < VAR_1->def->voltage_nstep && VAR_7 < VAR_2;
      VAR_6++) {
  ++VAR_5;
  VAR_7 += (VAR_1->def->voltage_step * 1000);
 }
 if (VAR_7 > VAR_3)
  return (VAR_0);

 *VAR_4 = VAR_5;
 return (0);
}
